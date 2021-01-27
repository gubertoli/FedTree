//
// Created by liqinbin on 11/3/20.
//

#ifndef FEDTREE_HIST_TREE_BUILDER_H
#define FEDTREE_HIST_TREE_BUILDER_H

#include "tree_builder.h"
#include "hist_cut.h"

class HistTreeBuilder : public TreeBuilder {
public:

    void init(DataSet &dataset, const GBDTParam &param) override;

    void get_bin_ids();

    void find_split(int level) override;

    void find_split_by_predefined_features(int level) override;

    void compute_histogram_in_a_level(int level, int n_max_splits, int n_bins, int n_nodes_in_level, int* hist_fid_data,
                                      SyncArray<GHPair> &missing_gh, SyncArray<GHPair> &hist) override;

    void compute_histogram_in_a_node(SyncArray<GHPair> &gradients, HistCut &cut, SyncArray<unsigned char> &dense_bin_id, bool enc);

    void compute_gain_in_a_level(SyncArray<float_type> &gain, int n_nodes_in_level, int n_bins, int* hist_fid_data,
                                 SyncArray<GHPair> &missing_gh, SyncArray<GHPair> &hist) override;

    void get_best_gain_in_a_level(SyncArray<float_type> &gain, SyncArray<int_float> &best_idx_gain, int n_nodes_in_level, int n_bins) override;

    void get_split_points(SyncArray<int_float> &best_idx_gain, int level, int *hist_fid, SyncArray<GHPair> &missing_gh, SyncArray<GHPair> &hist);

    void get_split_points_in_a_node(int node_id, int best_idx, float best_gain, int n_nodes_in_level, int *hist_fid, SyncArray<GHPair> &missing_gh, SyncArray<GHPair> &hist) override;

//    SyncArray<GHPair> compute_histogram(SyncArray<GHPair> &gradients, HistCut &cut,
//                                        SyncArray<unsigned char> &dense_bin_id);


    virtual ~HistTreeBuilder() {};

    void update_ins2node_id() override;

    void update_ins2node_id_in_a_node(int node_id) override;

//support equal division or weighted division
    void propose_split_candidates();

    void merge_histograms_server_propose();

    void merge_histograms_client_propose();

    void concat_histograms() override;

    SyncArray<float_type> gain(Tree &tree, SyncArray<GHPair> &hist, int level, int n_split);

    HistCut get_cut() override{
        return cut;
    }

    SyncArray<GHPair> get_hist() override{
        SyncArray<GHPair> h(last_hist.size());
        h.copy_from(last_hist);
        return h;
    }

    HistCut cut;
    void parties_hist_init(int party_size) override{
        parties_hist = MSyncArray<GHPair>(party_size);
        this->party_size = party_size;
        party_idx = 0;
    }

    void append_hist(SyncArray<GHPair> &hist) override{
        CHECK_LT(party_idx, party_size);
        parties_hist[party_idx].resize(hist.size());
        parties_hist[party_idx].copy_from(hist);
        party_idx += 1;
    }

    MSyncArray<GHPair> get_parties_hist() {
        return parties_hist;
    }

    void set_cut (HisCut commonCut) {
        cut = commonCut;
    }

    void set_last_hist(SyncArray<GHPair> last_hist_input) {
        last_hist = last_hist_input;
    }

    SyncArray<GHPair> get_last_hist () {
        return last_hist;
    }

    void decrypt_histogram(SyncArray<GHPair> &hist, AdditivelyHE::PaillierPrivateKey privateKey) {
        auto hist_data = hist.host_data();
        for (int i = 0; i < hist_data.size(); i++) {
            hist_data[i].decrypt(privateKey);
        }
    }


private:
    vector<HistCut> parties_cut;
    // MSyncArray<unsigned char> char_dense_bin_id;
    SyncArray<unsigned char> dense_bin_id;
    SyncArray<GHPair> last_hist;
    MSyncArray<GHPair> parties_hist;
    int party_idx = 0;
    int party_size = 0;

    double build_hist_used_time = 0;
    int build_n_hist = 0;
    int total_hist_num = 0;
    double total_dp_time = 0;
    double total_copy_time = 0;
};

#endif //FEDTREE_HIST_TREE_BUILDER_H
