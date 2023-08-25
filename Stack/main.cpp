#include <stdio.h>

int tag;

#define MaxSize 10
typedef struct {
    int data[MaxSize];
    int front,rear;
}SqQueue;
void InitQueue(SqQueue &Q){
    Q.front=Q.rear=0;
}
bool EnQueue(SqQueue &Q,int x){
    if(Q.front==Q.rear&&tag==1){
        return false;
    }
    Q.data[Q.rear]=x;
    Q.rear=(Q.rear+1)%MaxSize;
    return true;
    tag=1;
}
bool DeQueue(SqQueue &Q,int &x){
    if(Q.rear==Q.front&&tag==0){
        return false;
    }
    x=Q.data[Q.front];
    Q.front=(Q.front+1)%MaxSize;
    return true;
    tag=0;
}
bool GetHead(SqQueue Q,int &x){
    if (Q.front==Q.rear&&tag==0){
        return false;
    }
    x=Q.data[Q.front];
    return true;
}
int SumQueue(SqQueue Q){
    int sum;
    sum=(Q.rear+MaxSize-Q.front)%MaxSize;
    return sum;
}
bool QueueEmpty(SqQueue Q){
    return (Q.front==Q.rear);
}
void test(){
    SqQueue Q;
}
int main() {
    printf("Queue\n");
    return 0;
}
