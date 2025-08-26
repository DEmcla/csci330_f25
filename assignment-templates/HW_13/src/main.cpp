#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>

class Graph {
private:
    int numVertices;
    std::vector<std::vector<int>> adjList;
    
public:
    // TODO: Implement constructor
    Graph(int vertices);
    
    // TODO: Implement add edge function
    void addEdge(int src, int dest);
    
    // TODO: Implement breadth-first search (BFS)
    void BFS(int startVertex);
    
    // TODO: Implement depth-first search (DFS) - recursive
    void DFS(int startVertex);
    
    // TODO: Helper function for DFS
    void DFSHelper(int vertex, std::vector<bool>& visited);
    
    // TODO: Implement DFS using stack (iterative)
    void DFSIterative(int startVertex);
    
    // TODO: Implement function to check if path exists between two vertices
    bool hasPath(int src, int dest);
    
    // TODO: Implement function to find shortest path (BFS-based)
    int shortestPath(int src, int dest);
    
    // TODO: Implement display function
    void display();
    
    // TODO: Implement function to check if graph is connected
    bool isConnected();
};

int main() {
    // TODO: Create a graph with 6 vertices (0-5)
    
    // TODO: Add edges to create a connected graph
    // Suggested edges: (0,1), (0,2), (1,3), (2,4), (3,5), (4,5)
    
    // TODO: Display the adjacency list
    
    // TODO: Perform BFS starting from vertex 0
    
    // TODO: Perform DFS starting from vertex 0
    
    // TODO: Check if path exists between various vertex pairs
    
    // TODO: Find shortest path between various vertex pairs
    
    // TODO: Check if the graph is connected
    
    // BONUS TODO: Implement cycle detection
    
    return 0;
}