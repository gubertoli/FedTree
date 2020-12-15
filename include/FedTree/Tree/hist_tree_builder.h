//
// Created by liqinbin on 11/3/20.
//

#ifndef FEDTREE_HIST_TREE_BUILDER_H
#define FEDTREE_HIST_TREE_BUILDER_H

#include "tree_builder.h"
#include "hist_cut.h"

class HistTreeBuilder : public TreeBuilder {
public:

//    void init(const DataSet &dataset, const GBDTParam &param) override;

    void get_bin_ids();

    void
    compute_histogram(SyncArray<GHPair> &gradients, HistCut &cut, SyncArray<unsigned char> &dense_bin_id, bool enc);

//    void find_split(int level, int device_id) override;

    virtual ~HistTreeBuilder() {};

//    void update_ins2node_id() override;

//support equal division or weighted division
    void propose_split_candidates();

    void merge_histograms_server_propose(MSyncArray<GHPair> &histograms, bool enc);

    void merge_histograms_client_propose(MSyncArray<GHPair> &histograms, vector<HistCut> &cuts, bool enc);

    SyncArray<GHPair> get_hist() {
        SyncArray<GHPair> h(last_hist.size());
        h.copy_from(last_hist);
        return h;
    }

private:
    vector<HistCut> cut;
    // MSyncArray<unsigned char> char_dense_bin_id;
    SyncArray<unsigned char> dense_bin_id;
    SyncArray<GHPair> last_hist;

    double build_hist_used_time = 0;
    int build_n_hist = 0;
    int total_hist_num = 0;
    double total_dp_time = 0;
    double total_copy_time = 0;
};

#endif //FEDTREE_HIST_TREE_BUILDER_H
