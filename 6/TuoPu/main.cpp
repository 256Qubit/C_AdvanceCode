#include <stdio.h>
#define MAaxVertexNum 100
#define VertexType char
typedef struct ArcNode{
    int adjvex;
    struct ArcNode *nextarc;
}ArcNode;
typedef struct VNode{
    VertexType data;
    ArcNode *firstrac;
}VNode,AdjList[MAaxVertexNum];
typedef struct {
    AdjList vertices;
    int vexnum,arcnum;
}Graph;

bool TopologicalSort(Graph G){
    for (int i = 0; i < G.vexnum; ++i) {

    }
}
int main() {
    return 0;
}
