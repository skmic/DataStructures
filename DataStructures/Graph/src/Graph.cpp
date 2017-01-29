#include<iostream>
#include<Graph.h>


void Graph::vAddEdge(int u, int v, double w)
{
  this->adjacencies[u].emplace_back(Edge(v,w));
}

double Graph::dGetWeightOfGraph()
{
  double dSum = 0;
  for (const auto & e : this->adjacencies)
  {
    for (const auto & e2: e)
    {
      dSum += e2.weight();
    }
  }
  return dSum;
}

void Graph::vRemoveEdge(int u, int v)
{
  for (std::list<Edge>::iterator e = this->adjacencies[u].begin(); e != this->adjacencies[u].end(); ++e)
  {
    if (e->vertex() == v)
    {
      this->adjacencies[u].erase(e);
      break;
    }
  }
}

void Graph::vDisplayGraph()
{
  if (this->adjacencies.size() == 0)
  {
    std::cout<<"No edge in Graph";
    return;
  }

  std::cout<< "Graph Display using Adjacency Lists" <<std::endl;
  int v = 0;
  for (const auto & e: this->adjacencies)
  {
    std::cout << "Adjacency List of vertex " << v << ": ";
    for (const auto & e2 : e)
      std::cout << e2.vertex() << " , ";
    std::cout << std::endl;
    ++v;
  }
}
