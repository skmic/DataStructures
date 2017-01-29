#include <vector>
#include <list>

class Edge
{
  int m_nVertex;
  double m_dWeight;
public:
  Edge() = default;
  ~Edge() = default;
  Edge(int vertex, double weight): m_nVertex(vertex), m_dWeight(weight)
  { }

  int vertex() const { return m_nVertex;}
  double weight() const { return m_dWeight;}  
};

class Graph
{
  //Graph being represented by a list of adjacencies
  std::vector<std::list<Edge>> adjacencies;

public:
  Graph() = default;
  Graph(int size) : adjacencies(size) {
	}
  void vAddEdge(int u, int v, double w);
  double dGetWeightOfGraph();
  void vRemoveEdge(int u, int v);
  void vDisplayGraph();
};


