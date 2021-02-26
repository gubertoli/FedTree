//
// Created by liqinbin on 10/13/20.
//

#ifndef FEDTREE_SERVER_H
#define FEDTREE_SERVER_H

#include "FedTree/dataset.h"
#include "FedTree/Tree/tree_builder.h"
#include "FedTree/Encryption/HE.h"
#include "FedTree/DP/noises.h"

// Todo: the server structure.

class Server : public Party {
public:
    void init(FLParam &param, int n_total_instances, vector<int> &n_instances_per_party);
    void vertical_init(FLParam &param, int n_total_instances, vector<int> &n_instances_per_party, DataSet dataSet);
    void horizontal_init (FLParam &param, int n_total_instances, vector<int> &n_instances_per_party);
    void propose_split_candidates();
    void send_info(string info_type);
//    void send_info(vector<Party> &parties, AdditivelyHE::PaillierPublicKey serverKey,vector<SplitCandidate>candidates);
    void sum_histograms();
    void hybrid_merge_trees();
    void ensemble_merge_trees();
    GBDT global_trees;
    vector<GBDT> local_trees;
    GBDTParam model_param;
//    int n_total_instances;
    vector<int> n_instances_per_party;

    AdditivelyHE::PaillierPublicKey publicKey;

    void send_key(Party &party){
        party.publicKey = publicKey;
    }

    void homo_init() {
        std::tuple<AdditivelyHE::PaillierPublicKey, AdditivelyHE::PaillierPrivateKey> keyPairs = this->HE.generate_key_pairs();
        publicKey = std::get<0>(keyPairs);
        privateKey = std::get<1>(keyPairs);
    };

    void decrypt_histogram() {
        booster.fbuilder->decrypt_histogram(privateKey);
    }

private:
//    std::unique_ptr<TreeBuilder> fbuilder;
    AdditivelyHE HE;
    DPnoises<double> DP;
    AdditivelyHE::PaillierPrivateKey privateKey;
};

#endif //FEDTREE_SERVER_H
