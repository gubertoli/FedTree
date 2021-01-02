//
// Created by liqinbin on 10/13/20.
//
#include "FedTree/common.h"
#include "FedTree/dataset.h"

#ifndef FEDTREE_PARTITION_H
#define FEDTREE_PARTITION_H

class Partition {

public:
    std::map<int, vector<int>> homo_partition(const DataSet &dataset, const int n_parties, const bool is_horizontal);

    std::map<int, vector<int>>
    hetero_partition(const DataSet &dataset, const int n_parties, const bool is_horizontal,
                     const vector<float> alpha = {});

    void hybrid_partition(const DataSet &dataset, const int n_parties, vector<float> &alpha, vector<DataSet> &subsets,
                          vector<SyncArray<bool>> &feature_map);

};

#endif //FEDTREE_PARTITION_H
