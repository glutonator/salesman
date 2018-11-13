#include <iostream>
#include <vector>
#include "graph.h"

using namespace std;


int main() {


//    int V = 5;
//    vector<pair<int, int> > adj[V];
//    addEdge(adj, 0, 1, 10);
//    addEdge(adj, 0, 4, 20);
//    addEdge(adj, 1, 2, 30);
//    addEdge(adj, 1, 3, 40);
//    addEdge(adj, 1, 4, 50);
//    addEdge(adj, 2, 3, 60);
//    addEdge(adj, 3, 4, 70);
//    printGraph(adj, V);
//    return 0;

    Graph *graph = new Graph(3);
    graph->addEdge(0, 1, 10);
//    graph->printGraph();

    list<vector<int>>  qqq = graph->allPossiblePermutationsNodes();
    std::cout << std::endl;

    for(auto it = qqq.begin(); it!=qqq.end(); ++it) {
        for(auto it2 = it->begin(); it2!=it->end(); ++it2) {
            std::cout << *it2;
        }
        std::cout << std::endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}