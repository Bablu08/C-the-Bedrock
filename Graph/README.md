# Graph Data Structure Guide

A **Graph** is a collection of nodes (or vertices) connected by edges. Graphs are widely used to model relationships, such as networks, social connections, or pathways in maps.

---

## Table of Contents
1. [Why Use Graphs?](#why-use-graphs)
2. [Graph Terminology](#graph-terminology)
3. [Types of Graphs](#types-of-graphs)
4. [Graph Representations](#graph-representations)
5. [Basic Graph Operations](#basic-graph-operations)
6. [Properties of Graphs](#properties-of-graphs)
7. [Applications of Graphs](#applications-of-graphs)

---

## Why Use Graphs?

Graphs are useful when:
- Relationships between objects need to be represented (e.g., social networks, road maps, dependency graphs).
- You need to solve problems like shortest paths, network flow, or connectivity.

---

## Graph Terminology

Key terms used in graphs:
- **Vertex (Node):** A point in the graph.
- **Edge:** A connection between two vertices.
- **Directed Graph:** Edges have a direction (e.g., A → B).
- **Undirected Graph:** Edges have no direction (e.g., A ↔ B).
- **Weighted Graph:** Edges have weights or costs associated with them.
- **Degree:** The number of edges connected to a vertex.

---

## Types of Graphs

1. **Directed Graph:**  
   A graph where edges have a direction.

2. **Undirected Graph:**  
   A graph where edges have no direction.

3. **Weighted Graph:**  
   A graph where edges have weights.

4. **Cyclic Graph:**  
   A graph containing cycles (loops).

5. **Acyclic Graph:**  
   A graph without cycles.

6. **Complete Graph:**  
   Every vertex is connected to every other vertex.

---

## Graph Representations

1. **Adjacency Matrix**:
   - A 2D array where `matrix[i][j]` indicates an edge between vertex `i` and `j`.
   - Example:
     ```
     0  1  1
     1  0  0
     1  0  0
     ```

2. **Adjacency List**:
   - A list where each vertex points to a list of connected vertices.
   - Example:
     ```
     1: [2, 3]
     2: [1]
     3: [1]
     ```

---

## Basic Graph Operations

1. **Add a Vertex**:
   Add a new node to the graph.

2. **Add an Edge**:
   Connect two vertices with an edge.

3. **Remove a Vertex**:
   Delete a node and all its associated edges.

4. **Remove an Edge**:
   Delete a connection between two nodes.

5. **Traversal**:
   - **Breadth-First Search (BFS):** Explore neighbors level by level.
   - **Depth-First Search (DFS):** Explore paths as deeply as possible before backtracking.

---

## Properties of Graphs

1. **Connected Graph**:
   Every vertex is reachable from every other vertex.

2. **Disconnected Graph**:
   Not all vertices are connected.

3. **Sparse Graph**:
   A graph with fewer edges compared to vertices.

4. **Dense Graph**:
   A graph with a high number of edges.

---

## Applications of Graphs

1. **Social Networks**:
   - Represent relationships and connections.
   - Example: LinkedIn, Facebook.

2. **Navigation and Maps**:
   - Shortest path finding (e.g., Google Maps).

3. **Web Crawling**:
   - Represent websites as vertices and hyperlinks as edges.

4. **Dependency Resolution**:
   - Package managers (e.g., npm, pip).

5. **Network Flow**:
   - Optimize flows in communication or transport networks.

---

**Explore More**:
- Learn about graph algorithms like Dijkstra's, Bellman-Ford, Kruskal's, and Prim's.
- Practice graph implementations in popular programming languages.

---

