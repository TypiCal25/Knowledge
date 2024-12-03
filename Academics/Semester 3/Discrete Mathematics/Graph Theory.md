# Graphs
## Definition
A Graph $G = (V(G), E(G))$ consists of two finite sets: $V(G)$ is known as the vertex set, and is a non-empty set of elements called vertices, and $E(G)$, called the edge set of the graph, is a possibly empty set of elements called edges such that each edge $e$ in $E(G)$ is assigned an unordered pair of vertices $(u, v)$ called the end vertices of the edge.
## Parallel Edges
Let G be a graph. If two (or more) edges of G have the same end vertices then these edges are known as parallel
## Isolated Vertex and Neighborhood Set
A vertex of $G$ which is not the end of any edge is known as an isolated vertex. Two vertices which are joined by an edge are known as adjacent or neighbors. The set of all neighbors of a fixed vertex $v$ of $G$ is known as the neighborhood set of $v$ and is denoted by $N(v)$.
## Simple Graph
A graph is called simple if it does not have any loops or parallel edges.
## Isomorphic Graphs
A graph $G_1 = (V_1, E_1)$ is said to be isomorphic to the graph $G_2 = (V_2, E_2)$ if there is a one-to-one correspondence between the sets $V_1$ and $V_2$ and a one-to-one correspondence between the edge sets $E_1$ and $E_2$ in such a way that if $e_1$ is an edge with end vertices $u_1$ and $v_1$ in $G_1$, then the corresponding edge $e_2$ in $G_2$ has its end points as the vertices $u_2$, $v_2$ where $u_2$ and $v_2$ correspond to $u_1$ and $v_1$ respectively. Such a pair of correspondences is known as a graph isomorphism.

In simpler words, this means that they are the same graph, just that they have different names of the vertices and might be drawn in a little bit of a different way. 
## Empty Graph
An empty graph is a graph with no edges. 
## Bipartite and Bipartition
If the vertex set V of a graph G can be partitioned into two subsets X and Y ($X \cup Y = V$ and $X \cap Y = \phi$), in such a way that each edge has one end in X and one end in Y, then G is called bipartite. The partition V is known as the bipartition of G.
## Incident Edges and Vertices
An edge of a graph is said to be incident with the vertex v if v is an end-vertex of e. In this case, we also say that v is incident with e. If two edges e and f are incident to a common vertex v, then they are known to be adjacent.
## Degree of a Vertex
The degree of a vertex is the number edges of G incident with v, counting each loop twice.
## Subgraph - Proper and Spanning
A subgraph H of a graph G is a proper subgraph of G if either all the vertices are not the same or if all the edges are not the same. A spanning subgraph is a subgraph in which all the vertices are the same.
## Underlying Simple Graph 
By deleting from a graph G all loops and parallel edges but one in the collection we obtain a simple spanning subgraph of G, called the underlying simple graph of G.

Given two subgraphs G1 and G2 of G, the union G1 U G2 is the subgraph of G with the vertex set consisting of all those vertices which are in either G1 or G2 and with edge set consisting of all those edges which are in either G1 or G2 or both 

# Paths and Cycles
A walk in a graph G is an alternating sequence W: $v_0e_1v_1e_2v_2\ldots e_nv_p$ of vertices and edges, beginning and ending with vertices in which $v_{i - 1}$ and $v_i$ are the ends of $e_i$. v0 is the origin and vp is the terminus of W and the walk is said to join these two points. If v0 = vp, then the walk is closed otherwise it is open. A walk is called a trail if all the edges in the walk are distinct and it is called a path if all the vertices are distinct.

Given any two vertices u and v of a graph G, every u-v Walk contains a u-v path, i.e. given any walk, then after deletion of some vertices and edges if necessary, we can find a sub-sequence P of W, which is a u-v path.

Two vertices u and v in G are said to be connected if there exists a u-v path in G.

A graph G is called connected if every two of its vertices are connected. A graph that is not connected is called disconnected. Given any vertex u of a graph G, let C(u) denote the set of all vertices in G that are connected to u. Then the subgraph of G induced by C(u) is called the connected component containing u, or simply the component containing u.

The number of components of G is called w(G) $\rightarrow$ omega(G).

A non-trivial closed trail in a graph G is called a cycle if its origin and internal vertices are distinct. In detail, the closed trail C is called a cycle if C has at least one-edge and v1,v2,v3,...,vn are distinct vertices.

***Let G be a non-empty graph with at least two-vertices. Then G is called bipartite if and only if it has no-odd cycle.*** 
## Matrix Representation of a Graph
Let $G$ be a graph with n vertices, listed as $v_1, v_2, v_3, \ldots, v_n$. The adjacency matrix of $G$, with respect to this particular listing of n vertices is the n x n matrix $A(G) = (a_{ij})$ where the $(i, j)$'th entry $a_{ij}$ is the number of edges joining vertex $v_i$ to vertex $v_j$.

Let $G$ be a graph with n vertices $v_1, v_2, v_3, \ldots v_n$ and let $A$ denote the adjacency matrix of $G$ with respect to this listing of the vertices. Let k be any positive integer and let $A^k$ denote the matrix multiplication of k copies of A. Then the $(i, j)$'th entry of $A^k$ is the number of different $v_i - v_j$ walks in $G$ of length $k$.

In a graph having n vertices, the maximum length of a walk from vertices $v_i$ to $v_j$ would be $n - 1$. This is the maximum path length. As such a graph $G$ is considered to be connected if and only if for every pair of distinct indices $i, j,$ we have $b_{ij} \neq 0$
# Trees
## Definition
A Graph G is called acyclic if it contains no cycles.
A Graph G is called a tree if it is both acyclic and connected.
## Let u and v be distinct vertices of a tree T. Then there exists only one path from u to v.
Suppose that the result was false. Assume that there were two different paths from u to v, namely $P = uu_1u_2u_3\ldots u_mv$ and $P' = uv_1v_2v_3\ldots v_nv$. Let w be the first vertex that is common to both the paths P and P' (here we know that at least one $w$ exists because we know that $v$ exists on both paths). Then we can see that 
$$w = u_i = v_j$$ for some indexes $i$ and $j$. Then we can clearly see that the path $uu_1u_2\ldots u_iv_{j-1}v_{j-2}\ldots v_1u$ is a cycle since we know that no vertices are repeated (by definition of a path). But a **tree does not have any cycles**. Therefore the primary assumption must be false.

Hence, the result is true.
## Let T be a tree with at least two vertices and let P = $u_0u_1u_2\ldots u_n$ be the longest path in T (so that there is no path of length greater than n). Then both $u_0$ and $u_1$ have degree 1. 
Suppose that the degree of $u_0$ > 1. This would mean that there exists an edge apart from the edge $u_0u_1$ to another vertex V in the tree T. This vertex could be:
1. lying on the path P
2. not lying on the path P.
### The Vertex $v$ lies on the path P
In this case, we can say that $\exists i \in [0, n]$, $u_i = v$. Then there is a cycle $C = u_0u_1u_2\ldots u_iu_0$. Since a tree cannot have any cycle, the assumption must be wrong. Therefore the degree of $u_0$ = 1
### The Vertex $v$ does not lie on the path P
In this case, a path of length n + 1 gets generated. Which again goes against the result.

**A Tree with at least 2 vertices has more than one vertex of degree 1**.
## If T is a tree with n vertices then it has precisely n - 1 edges
### Case for n = 1
We use induction to prove this. When n = 1, i.e, T has only 1 vertex, since it has no loops, then it can't have any edges, i.e it has n - 1 edges = 0 edges. This establishes the case for n = 1
### Induction Assumption
Assume that the result is true for n = k. 
### Case for n = k + 1
Let there be a tree having k + 1 vertices and let u be a vertex of degree 1 in T. (This vertex always exists for a tree having at least 2 vertices). Let u be a vertex of degree 1 in T. Let $e = uv$ denote the unique edge of T which has u as the end of an edge. *This is a leaf node of the Tree*. Then if x and y are vertices of the tree T, that are both different from U, the path joining them both does not include the vertex u since the edge e would have to be counted twice in the path (which is against the definition of a path). The subgraph T - u, obtained from T by deleting the vertex is also connected. Moreover if there was a cycle in the subgraph T - u, then there would also be a cycle in the Tree T which is impossible since T is a tree. Hence the subgraph T - u is also a tree. Thus T - u is also a tree. However T - u has k vertices. By the induction assumption, this means that  the T - u tree has k - 1 edges. Since T - u has exactly 1 edge less than T, it follows that T has k edges. Thus by the principle of mathematical induction, the proof is completed.
## Let G be an acyclic graph with n vertices and k connected components, i.e, $\omega (G) = k$. Then G has $n - k$ edges.
Denote the k components of G by by C1, C2, C3, ..., Ck and suppose that each component has $n_i$ vertices. Then n = n1 + n2 + n3 + ... nk vertices. 
# Bridges
$$\Huge \omega(G) \le \omega(G-E) \le \omega (G) + 1$$
An edge is a bridge if it satisfies this condition. In english words, this condition tells us that the edge is a bridge if disconnecting it splits the graph into two different components.
## 1. An edge $e$ of a graph G is a bridge if and only if e is not part of any cycle in G.
Let $e$ have ends $u$ and $v$. If $e$ is not a bridge, then by the above remarks, it is either a loop or there is a path P = 
## 2. Let G be a connected graph. Then G is a tree if and only if every edge of G is a bridge, i.e, if and only if for every edge e of G, the subgraph G - e has two components.
By definition, a tree is both acyclic and connected. Therefore, by definition, no edge is part of a cycle in a tree. Therefore, if it is not part of a cycle, and since there are no loops in a tree, every edge must be a bridge.
## 3. Let G be a graph with n vertices. Then the following three statements are equivalent: (i) G is a tree (ii) G is an acyclic graph with n - 1 vertices (iii) G is a connected graph with n - 1 vertices.
G is a tree $\rightarrow$ It is acyclic and has n - 1 vertices.
If G is an acyclic graph with k connected components, then the number of edges are $n - \omega (G) \implies \omega (G) = 1$. Therefore, the acyclic graph G is a connected graph. 
# Spanning Trees
A spanning tree of a graph G is a spanning subgraph of G that is a tree.
## A Graph G is connected if and only if it has a spanning tree
# Euler Tours and Hamiltonian Graphs
## Euler Tours
### Euler Trail
A trail in G is called an Euler trail if it includes every edge of G.
### Euler Tour
An Euler tour of G is a tour which includes every edge of G exactly once. 
### Eulerian Graph
A graph is called Eulerian if it has an Euler Tour
## Hamiltonian Graphs
A Hamiltonian path in a graph G is a path which contains every vertex of G. A Hamiltonian cycle in a graph G is a cycle which contains every vertex of G. A graph G is called Hamiltonian if it has a Hamiltonian cycle. 

If G is a simple graph with n vertices, where $n \ge 3$, and the degree $d(v) \ge \dfrac{n}{2}$, for every vertex $v$ of G, then G is hamiltonian.
# Plane and Planar Graphs
A plane graph is a graph drawn in the plane of the paper in such a way that any pair of edges meet only at their end vertices.

A planar graph is a graph which is isomorphic to a plane graph, i.e, it can be redrawn as a plane graph.

A jordan curve in the plane is a continuous non-self-intersecting curve whose origin and terminus intersect.

The Jordan-Curve theorem states that for any jordan curve, any line joining a point x lying in Int J and a point y lying in Ext J has to pass through and intersect the jordan curve
## Euler's Formula
A plane graph G partitions the plane into a number of regions called the faces of G. More precisely, if x is a point on the plane which is not in G, i.e., is not a vertex of G or a point on any edge of G, then we define the face of G containing x to be the set of all points on the plane which can be reached from x by a line(straight or curved) which does not ross any edge of G or go through any vertex of G.

Let G be a **connected, plane graph** and let n, e, and f denote the number of vertices, edges, and faces of G, then, 
$$\Huge n - e + f = 2$$

Let G be a plane graph with n vertices, e edges, f faces and k connected components. Then
$$\Huge n - e + f = k + 1$$
## Degree of a Face
Let $\phi$ be a face of a plane graph G. We define the degree of $\phi$ denoted by $d(\phi)$, to be the number of edges on the boundary of $\phi$

**Theorem**: Let G be a simple planar graph with $n$ vertices and $e$ edges, where $n \ge 3$. Then
$$\Huge e \le 3n - 6$$
**Theorem**: If G is a simple planar graph then G has a vertex of degree less than 6.

