//
// Created by filip on 13.11.18.
//

#include <iostream>
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
void Graph::printGraph()
{
    int nodeNumber2, weight;
    for (int nodeNumber = 0; nodeNumber < this->numberOfNodes; nodeNumber++)
    {
        cout << "Node " << nodeNumber << " makes an edge with \n";
        for (auto it = adjacencyList[nodeNumber].begin(); it!=adjacencyList[nodeNumber].end(); it++)
        {
            nodeNumber2 = it->first;
            weight = it->second;
            cout << "\tNode " << nodeNumber2 << " with edge weight ="
                 << weight << "\n";
        }
        cout << "\n";
    }
}


