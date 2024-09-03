#include<stdio.h>
#include<stdbool.h>

#define V 5  // Number of vertices in the graph
#define INF 99999

// Function to find the vertex with the minimum key value, from the set of vertices not yet included in MST
int minKey(int key[], bool mstSet[]) {
    int min = INF, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

// Function to print the constructed MST
void printMST(int parent[], int graph[V][V]) {
    printf("Edge \tWeight\n");
    for (int i = 1; i < V; i++)
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
}

void primMST(int graph[V][V]) {
    int parent[V];
    int key[V];
    bool mstSet[V];

    for (int i = 0; i < V; i++)
        key[i] = INF, mstSet[i] = false;

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = true;

        for (int v = 0; v < V; v++)
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    printMST(parent, graph);
}

int main() {
    int graph[V][V];

    printf("Enter the adjacency matrix for the graph (%d x %d):\n", V, V);
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            printf("graph[%d][%d]: ", i, j);
            scanf("%d", &graph[i][j]);
        }
    }

    primMST(graph);
    return 0;
}
