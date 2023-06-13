#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class Edge {
public:
    int src, dest, weight;
    
    Edge(int src, int dest, int weight) : src(src), dest(dest), weight(weight) {}
};

class Graph {
private:
    int numVertices;
    vector<vector<Edge>> adjacencyList;
    
public:
    Graph(int n) : numVertices(n), adjacencyList(n) {}
    
    void addEdge(int src, int dest, int weight) {
        Edge edge1(src, dest, weight);
        Edge edge2(dest, src, weight);
        adjacencyList[src].push_back(edge1);
        adjacencyList[dest].push_back(edge2);
    }
    
    vector<Edge> primMST(int source) {
        vector<bool> visited(numVertices, false);
        vector<int> dist(numVertices, INT_MAX);
        vector<int> parent(numVertices, -1);
        
        dist[source] = 0;
        
        auto compare = [](const Edge& e1, const Edge& e2) {
            return e1.weight > e2.weight;
        };
        priority_queue<Edge, vector<Edge>, decltype(compare)> pq(compare);
        pq.push(Edge(-1, source, 0));
        
        while (!pq.empty()) {
            Edge current = pq.top();
            pq.pop();
            
            int u = current.dest;
            if (visited[u])
                continue;
            
            visited[u] = true;
            
            for (const Edge& edge : adjacencyList[u]) {
                int v = edge.dest;
                int weight = edge.weight;
                
                if (!visited[v] && weight < dist[v]) {
                    dist[v] = weight;
                    parent[v] = u;
                    pq.push(Edge(u, v, weight));
                }
            }
        }
        
        vector<Edge> mst;
        for (int i = 1; i < numVertices; i++) {
            mst.push_back(Edge(parent[i], i, dist[i]));
        }
        
        return mst;
    }
};

int main() {
    int n = 6;  // Number of vertices
    Graph graph(n);
    
    // Adding edges to the graph
    graph.addEdge(0, 1, 2);
    graph.addEdge(1, 2, 1);
    graph.addEdge(2, 3, 5);
    graph.addEdge(3, 4, 7);
    graph.addEdge(0, 3, 4);
    graph.addEdge(1, 3, 3);
    
    int source = 0;  // Choose the source vertex for Prim's algorithm
    
    vector<Edge> mst = graph.primMST(source);
    
    cout << "Minimum Spanning Tree edges:\n";
    for (const Edge& edge : mst) {
        cout << edge.src << " - " << edge.dest << " (weight: " << edge.weight << ")\n";
    }
    
    return 0;
}
