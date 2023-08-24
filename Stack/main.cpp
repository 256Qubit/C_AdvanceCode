#include <stdio.h>
#define MaxSize 10
typedef struct {
    int data[MaxSize];
    int top;
}SqStack;
void InitStack(SqStack &s){
    s.top=-1;
}
bool StackEmpty(SqStack s){
    if(s.top==-1){
        return true;
    } else{
        return false;
    }
}
bool Push(SqStack &s,int x){
    if(s.top==MaxSize-1){
        return false;
    }
//    s.top=s.top+1;
//    s.data[s.top]=x;
    s.data[++s.top]=x;//先让top的值+1，然后再来使用top
    return true;
}
bool Pop(SqStack &s,int &x){
    if(s.top==-1){
        return false;
    }
    x=s.data[s.top--];
//    x=s.data[s.top];//栈顶元素先出栈
//    s.top=s.top-1;//指针减1
    return true;
}
bool GetTop(SqStack s,int &x){
    if(s.top==-1){
        return false;
    }
    x=s.data[s.top];
    return true;
}

void test(){
    SqStack s;
    InitStack(s);
}
int main() {
    return 0;
}
