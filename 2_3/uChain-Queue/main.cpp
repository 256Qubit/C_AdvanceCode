#include <stdio.h>
#include <stdlib.h>

typedef struct LinkNode LinkNode;

typedef struct {
    LinkNode *front,*rear;
}LinkQueue;

struct LinkNode{
    int data;
    struct LinkNode *next;
};


void InitQueue(LinkQueue &Q){
    Q.front=Q.rear=(LinkNode*) malloc(sizeof(LinkNode));
    Q.front->next=NULL;
}
bool IsEmpty(LinkQueue Q){
    if(Q.front==Q.rear){
        return true;
    } else{
        return false;
    }
}

void EnQueue(LinkQueue &Q,int x){
    LinkNode *s=(LinkNode*) malloc(sizeof(LinkNode));
    s->data=x;
    s->next=NULL;
    Q.rear->next=s;//新结点插入到rear之后
    Q.rear=s;//修改表尾指针
}
bool DeQueue(LinkQueue &Q,int &x){
    if(Q.front==Q.rear){
        return false;
    }
    LinkNode *p=Q.front->next;
    x=p->data;
    Q.front->next=p->next;
    if(Q.rear==p){
        Q.rear=Q.front;
    }
    free(p);
}
void testLinkQueue(){
    LinkQueue Q;
    InitQueue(Q);
}
int main() {
    return 0;
}
