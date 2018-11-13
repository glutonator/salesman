//
// Created by filip on 13.11.18.
//

#ifndef SALESMAN_GRAPH_H
#define SALESMAN_GRAPH_H

#include <vector>
#include <list>

using namespace std;

class Graph {

private:
    int numberOfNodes;
    vector<vector<pair<int, int> > > adjacencyList;

public:

    Graph(int numberOfNodes);

    void addEdge(int node1, int node2, int weight);

    void printGraph();

    list <vector<int>> allPossiblePermutationsNodes();

};


#endif //SALESMAN_GRAPH_H
