#include <stdio.h>
#define MaxSize 10

typedef struct {
    int data[MaxSize];
    int front,rear;
    int size;
}SqQueue;
void InitQueue(SqQueue &Q){
    Q.front=Q.rear=0;
}
bool QueueEmpty(SqQueue Q){
    if(Q.rear==Q.front){
        return true;
    } else{
        return false;
    }
}
bool EnQueue(SqQueue &Q,int x){
    if((Q.rear+1)%MaxSize==Q.front){
        return false;
    }
    Q.data[Q.rear]=x;//将x插入队尾
    Q.rear=(Q.rear+1)%MaxSize;
    return true;
}
bool DeQueue(SqQueue &Q,int &x){
    if (Q.rear==Q.front){//判断队列为空
        return false;
    }
    x=Q.data[Q.front];
    Q.front=(Q.front+1)%MaxSize;
    return true;
}
bool GetHead(SqQueue Q,int &x){
    if(Q.rear==Q.front){
        return false;
    }
    x=Q.data[Q.front];
    return true;
}
void testQueue(){

};
int main() {
    return 0;
}
