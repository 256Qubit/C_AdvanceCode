#include <stdio.h>
#include <stdlib.h>

typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *front,*rear;
}LinkQueue;
void InitQueue(LinkQueue &Q){
    Q.front=Q.rear=(LinkNode*) malloc(sizeof(LinkNode));
    Q.front->next=NULL;
//Q.front=NULL;
//Q.rear=NULL;
//不带头结点初始化
}
bool EnQueue(LinkQueue &Q,int x){
    LinkNode *L=(LinkNode*) malloc(sizeof(LinkNode));//定义一个头结点
    L->next=NULL;
    Q.rear=Q.front=L;
    LinkNode *s=(LinkNode*) malloc(sizeof(LinkNode));//分配结点
    s->data=x;
    s->next=NULL;
    Q.rear->next=s;
    Q.rear=s;
    return true;
//    LinkNode *s=(LinkNode*) malloc(sizeof(LinkNode));
//    s->data=x;
//    s->next=NULL;
//    if (Q.front=NULL){//在空队列中插入第一个元素
//        Q.front=s;//修改队头队尾指针
//        Q.rear=s;
//    } else{//如果表不为空则修改rear指针
//        Q.rear->next=s;
//        Q.rear=s;
//    }
//    return true;
}
bool DeQueue(LinkQueue &Q,int &x){
//    if(Q.front==NULL){
//        return false;
//    }
//    LinkNode *p=Q.front;
//    x=p->data;
//    Q.front=p->next;
//    if(Q.rear==p){
//        Q.front=NULL;
//        Q.rear=NULL;
//    }
//    free(p);
//    return true;
    if(Q.front==Q.rear){
        return false;
    }
    LinkNode *p=Q.front->next;//每次出队为front->next的指针指向的节点,p指针指向Q.front->next指向的节点
    x=p->data;
    Q.front->next=p->next;
    if(Q.rear==p){
        Q.rear=Q.front;
    }
    free(p);
    return true;

}
bool IsEmpty(LinkQueue Q){
    if (Q.front==Q.rear){
        return true;
    } else{
        return false;
    }
}
void testLinkQueue(){
    LinkQueue Q;
    InitQueue(Q);
}
int main() {
    return 0;
}
