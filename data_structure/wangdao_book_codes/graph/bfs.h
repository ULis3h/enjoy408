/**
 * @file bfs.h
 * @brief Breadth-First Search (BFS) graph algorithm implementation.
 * 
 * This file contains the data structure and function declarations for graph
 * representation using adjacency list.
 *
 * Based on Data Structure course material from Wang Dao.
 *
 * Copyright (c) 2025
 */

#ifndef BFS_H
#define BFS_H

// Add your BFS declarations here

#define MAX_VERTEX_NUM 100

char visited[MAX_VERTEX_NUM];

/**
 * @brief Breadth-First Search (BFS) traversal of a graph.
 * 
 * Pseudocode:
 *  ```
 *  BFS(G, v)
 *      初始化队列Q;
 *      标记v为已访问;
 *      Q.push(v);
 *      while (!Q.empty()) {
 *          u = Q.pop();
 *          for (v in G.adjacent(u)) {
 *              if (!visited[v]) {
 *                  visited[v] = true;
 *                  Q.push(v);
 *              }
 *          }
 *      }
 *  ```
 *
 * This function performs a BFS traversal of the graph starting from the given vertex.
 *
 * @param G Pointer to the graph.
 * @param v The starting vertex index.
 */
void BFSTraverse(void *G);

#endif // BFS_H