//
// Created by filip on 13.11.18.
//

#include <iostream>
#include <algorithm>
#include <numeric>
#include "graph.h"

Graph::Graph(int numberOfNodes) {
    this->numberOfNodes = numberOfNodes;
    adjacencyList = vector<vector<pair<int, int> > >(numberOfNodes);
}

// To add an edge
void Graph::addEdge(int node1, int node2, int weight) {
    adjacencyList[node1].push_back(make_pair(node1, weight));
    adjacencyList[node2].push_back(make_pair(node2, weight));

}

// Print adjacency list representaion ot graph
void Graph::printGraph() {
    int nodeNumber2, weight;
    for (int nodeNumber = 0; nodeNumber < this->numberOfNodes; nodeNumber++) {
        cout << "Node " << nodeNumber << " makes an edge with \n";
        for (auto it = adjacencyList[nodeNumber].begin(); it != adjacencyList[nodeNumber].end(); it++) {
            nodeNumber2 = it->first;
            weight = it->second;
            cout << "\tNode " << nodeNumber2 << " with edge weight ="
                 << weight << "\n";
        }
        cout << "\n";
    }
}

list<vector<int>> Graph::allPossiblePermutationsNodes() {
    //list of all possible permutations
    list <vector<int>> out = list<vector<int>>();

    //popluation of vector
    vector <int> singlePermutation =  vector <int>(numberOfNodes);
    iota (std::begin(singlePermutation), std::end(singlePermutation), 0);
    //sorting, not necessary
    sort(begin(singlePermutation), end(singlePermutation));
    //add first element
    out.push_back(singlePermutation);
    std::cout << singlePermutation[0] << singlePermutation[1] << singlePermutation[2] << std::endl;

    //add all other elements
    while (std::next_permutation(singlePermutation.begin(), singlePermutation.end())) {
        for (auto it = singlePermutation.begin(); it!=singlePermutation.end(); ++it) {
            //todo: dodać sprawdzaenie czy dany node jest połaczyny z frugim nodem i tak dla wszystkic hkolejnych par w wektorze
            std::cout << *it;
        }
        out.push_back(singlePermutation);
        std::cout << std::endl;
    }

    return out;
}






