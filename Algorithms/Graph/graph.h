#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include <vector>
using namespace std;
class Graph {
public:
  Graph(vector<string> names);
  void addEdges(int vertexIndex, vector<int> targets);
  void BFS();


private:
  class Vertex;
  class Edge;

  void DFSRecursion(Vertex *current_vertex);
  void restoreVertices();

  int last_index = 0;
  vector<Vertex *> vertices; 

  class Vertex {
  public:
    string name;  
    bool visited; 
    vector<Edge *> vertexLinks; 
                              
  };

  class Edge {
  public:
    double weight;  
    Vertex *source; 
    Vertex *target; 

    Edge(Vertex *source, Vertex *target, double weight = 0) {
      this->source = source;
      this->target = target;
      this->weight = weight;
    }
  };
};

#endif 
