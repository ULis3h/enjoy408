/**
 * adjacency_list.h - Graph Adjacency List Implementation
 *
 * This file contains the data structure and function declarations for graph
 * representation using adjacency list.
 *
 * Based on Data Structure course material from Wang Dao.
 *
 * Copyright (c) 2025
 */

#ifndef ADJACENCY_LIST_H
#define ADJACENCY_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Maximum number of vertices in the graph */
#define MAX_VERTICES 100

/* Define vertex types based on application needs */
typedef char VertexType;

/* Define edge weight type */
typedef int EdgeType;

/**
 * Edge Node Structure
 * Represents an edge in the adjacency list
 */
typedef struct EdgeNode {
    int adjvex;                  /* Index of the adjacent vertex */
    EdgeType weight;             /* Weight of the edge */
    struct EdgeNode *next;       /* Pointer to the next edge node */
} EdgeNode;

/**
 * Vertex Node Structure
 * Represents a vertex in the adjacency list
 */
typedef struct VertexNode {
    VertexType data;             /* Data stored in the vertex */
    EdgeNode *first;             /* Pointer to the first edge node */
} VertexNode, AdjList[MAX_VERTICES];

/**
 * Graph Structure
 * Represents the entire graph using adjacency list
 */
typedef struct {
    AdjList vertices;            /* Array of vertex nodes */
    int vertexNum;               /* Number of vertices */
    int edgeNum;                 /* Number of edges */
    bool directed;               /* Whether the graph is directed or not */
} ALGraph;

/**
 * Function declarations for graph operations
 */

/**
 * Initialize a graph
 * @param graph Pointer to the graph to be initialized
 * @param directed Whether the graph is directed or not
 */
void InitGraph(ALGraph *graph, bool directed);

/**
 * Create a graph by input
 * @param graph Pointer to the graph to be created
 */
void CreateGraph(ALGraph *graph);

/**
 * Add an edge to the graph
 * @param graph Pointer to the graph
 * @param start Start vertex index
 * @param end End vertex index
 * @param weight Weight of the edge
 */
void AddEdge(ALGraph *graph, int start, int end, EdgeType weight);

/**
 * Print the graph
 * @param graph Pointer to the graph to be printed
 */
void PrintGraph(ALGraph *graph);

/**
 * Depth-First Search traversal
 * @param graph Pointer to the graph
 * @param start Start vertex index for traversal
 */
void DFS(ALGraph *graph, int start);

/**
 * Breadth-First Search traversal
 * @param graph Pointer to the graph
 * @param start Start vertex index for traversal
 */
void BFS(ALGraph *graph, int start);

/**
 * Find the shortest path between two vertices (Dijkstra algorithm)
 * @param graph Pointer to the graph
 * @param start Start vertex index
 * @param end End vertex index
 */
void ShortestPath(ALGraph *graph, int start, int end);

/**
 * Find all shortest paths (Floyd algorithm)
 * @param graph Pointer to the graph
 */
void FloydAllShortestPaths(ALGraph *graph);

/**
 * Minimum spanning tree using Prim algorithm
 * @param graph Pointer to the graph
 */
void PrimMST(ALGraph *graph);

/**
 * Minimum spanning tree using Kruskal algorithm
 * @param graph Pointer to the graph
 */
void KruskalMST(ALGraph *graph);

/**
 * Topological sort for directed acyclic graphs
 * @param graph Pointer to the graph
 */
void TopologicalSort(ALGraph *graph);

/**
 * Check if the graph has a cycle
 * @param graph Pointer to the graph
 * @return true if the graph has a cycle, false otherwise
 */
bool HasCycle(ALGraph *graph);

#endif /* ADJACENCY_LIST_H */