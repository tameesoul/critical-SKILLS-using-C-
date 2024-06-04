#include "Graph.h"
#include <iostream>
#include <queue>
using namespace std;
Graph::Graph(vector<string> names) {
  for (const auto &name : names) {
    Vertex *vertex = new Vertex();
    vertex->name = name;
    vertices.push_back(vertex);
    last_index++;
  }
}

void Graph::addEdges(int vertexIndex, vector<int> targets) {
  vertices[vertexIndex]->vertexLinks.reserve(targets.size());
  for (const auto &target : targets) {
    vertices[vertexIndex]->vertexLinks.push_back(
        new Edge(vertices[vertexIndex], vertices[target]));
  }
}

void Graph::BFS() {
  cout << "BFS From Graph Class;\n";
  int v = vertices.size();
  queue<Vertex *> q;
  q.push(vertices[0]);
  vertices[0]->visited = true;

  Vertex *current_vertex;
  vector<Edge *> destinations;
  while (!q.empty()) {
    current_vertex = q.front();
    q.pop();
    destinations = current_vertex->vertexLinks;
    for (const auto &destination : destinations) {
      if (!destination->target->visited) {
        q.push(destination->target);
        destination->target->visited = true;
        cout << current_vertex->name << " - " << destination->target->name
             << endl;
      }
    }
  }
  restoreVertices();
}


void Graph::restoreVertices() {
  for (const auto &vertex : vertices) {
    vertex->visited = false;
  }
}