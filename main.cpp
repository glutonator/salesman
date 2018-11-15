#include <iostream>
#include <vector>
#include <chrono>
#include "graph.h"

using namespace std;


int main() {

    int numberOfNodes = 10;

    Graph *graph = new Graph(numberOfNodes);

    graph->createComleteGraph();
    graph->printGraph();

    // Record start time
    auto start = std::chrono::high_resolution_clock::now();

    // Portion of code to be timed
//    list<vector<int>> qqq = graph->findShortestPath();
    graph->findShortestPathBetter();

    // Record end time
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";




//    std::cout << std::endl;
//
//    for(auto it = qqq.begin(); it!=qqq.end(); ++it) {
//        for(auto it2 = it->begin(); it2!=it->end(); ++it2) {
//            std::cout << *it2;
//        }
//        std::cout << std::endl;
//    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}