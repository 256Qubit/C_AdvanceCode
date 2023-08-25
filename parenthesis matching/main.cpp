#include <stdio.h>
#define MaxSize 10
typedef struct {
    char data[MaxSize];
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
bool Push(SqStack &s,char &x){
    if(s.top==MaxSize-1){
        return false;
    }
//    s.top=s.top+1;
//    s.data[s.top]=x;
    s.data[++s.top]=x;//先让top的值+1，然后再来使用top
    return true;
}
bool Pop(SqStack &s,char &x){
    if(s.top==-1){
        return false;
    }
    x=s.data[s.top--];
//    x=s.data[s.top];//栈顶元素先出栈
//    s.top=s.top-1;//指针减1
    return true;
}
bool bracketCheck(char str[],int length){
    SqStack S;
    InitStack(S);
    for (int i=0;i<length;i++) {
        if(str[i]=='('||str[i]=='['||str[i]=='{'){
            Push(S,str[i]);
        } else{
            if (StackEmpty(S)){
                return false;
            }
            char topElem;
            Pop(S,topElem);
            if (str[i]==')'&&topElem!='('){
                return false;
            }
            if (str[i]==']'&&topElem!='['){
                return false;
            }
            if (str[i]=='}'&&topElem!='}'){
                return false;
            }
        }
    }
    return StackEmpty(S);
}
int main() {
    return 0;
}
