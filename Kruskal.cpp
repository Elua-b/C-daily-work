#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge {
public:
    int src, dest, weight;
    
    Edge(int src, int dest, int weight) : src(src), dest(dest), weight(weight) {}
};

class DisjointSet {
public:
    vector<int> parent, rank;
    
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n);
        
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
            rank[i] = 0;
        }
    }
    
    int find(int v) {
        if (parent[v] != v) {
            parent[v] = find(parent[v]);
        }
        return parent[v];
    }
    
    void unionSets(int v1, int v2) {
        int root1 = find(v1);
        int root2 = find(v2);
        
        if (rank[root1] < rank[root2]) {
            parent[root1] = root2;
        } else if (rank[root1] > rank[root2]) {
            parent[root2] = root1;
        } else {
            parent[root2] = root1;
            rank[root1]++;
        }
    }
};

bool compareEdges(const Edge& e1, const Edge& e2) {
    return e1.weight < e2.weight;
}

class Graph {
private:
    int numVertices;
    vector<Edge> edges;
    
public:
    Graph(int n) : numVertices(n) {}
    
    void addEdge(int src, int dest, int weight) {
        Edge edge(src, dest, weight);
        edges.push_back(edge);
    }
    
    vector<Edge> kruskalMST() {
        sort(edges.begin(), edges.end(), compareEdges);
        
        DisjointSet ds(numVertices);
        vector<Edge> mst;
        
        for (const Edge& edge : edges) {
            int srcParent = ds.find(edge.src);
            int destParent = ds.find(edge.dest);
            
            if (srcParent != destParent) {
                mst.push_back(edge);
                ds.unionSets(srcParent, destParent);
            }
            
            if (mst.size() == numVertices - 1) {
                break;  // MST is complete
            }
        }
        
        return mst;
    }
};

int main() {
    int n = 6;  // Number of vertices
    Graph graph(n);
    
    // Adding edges to the graph
    graph.addEdge(0, 1, 2);
    graph.addEdge(0, 2, 3);
    graph.addEdge(1, 2, 1);
    graph.addEdge(1, 3, 4);
    graph.addEdge(2, 3, 5);
    graph.addEdge(3, 4, 7);
    graph.addEdge(3, 5, 2);
    // ...
    
    vector<Edge> mst = graph.kruskalMST();
    
    cout << "Minimum Spanning Tree edges:\n";
    for (const Edge& edge : mst) {
        cout << edge.src << " - " << edge.dest << " (weight: " << edge.weight << ")\n";
    }
    
    return 0;
}
