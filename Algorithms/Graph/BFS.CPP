#include "Graph.h"
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  vector<string> names{"A", "B", "C", "D", "E", "F", "G", "H", "I"};
  Graph g(names);
  g.addEdges(0, {1, 2});
  g.addEdges(1, {0, 3, 4});
  g.addEdges(2, {0, 3, 5});
  g.addEdges(3, {1, 2, 4});
  g.addEdges(4, {1, 5});
  g.addEdges(5, {2, 3, 4, 7});
  g.addEdges(6, {7, 8});
  g.addEdges(7, {5, 6, 8});
  g.addEdges(8, {6, 7});

  g.BFS();

  return 0;
}