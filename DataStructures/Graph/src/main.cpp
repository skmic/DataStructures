#include<iostream>
#include<Graph.h>

int  main()
{
  Graph g(5);
  g.vAddEdge(0, 1, 1);
  g.vAddEdge(0, 4, 1);
  g.vAddEdge(1, 0, 1);
  g.vAddEdge(1, 2, 1);
  g.vAddEdge(1, 3, 1);
  g.vAddEdge(1, 4, 1);
  g.vAddEdge(2, 1, 1);
  g.vAddEdge(2, 3, 1);
  g.vAddEdge(3, 1, 1);
  g.vAddEdge(3, 2, 1);
  g.vAddEdge(3, 4, 1);
  g.vAddEdge(4, 0, 1);
  g.vAddEdge(4, 1, 1);

  std::cout << "Weight of Graph = " << g.dGetWeightOfGraph();
  std::cout << std::endl << "Graph is displayed below";
  g.vDisplayGraph();

  return 0;


}
