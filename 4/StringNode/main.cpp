#include <stdio.h>
#include <stdlib.h>
#define MaxLen 255
//typedef struct StringNode{
//    char ch[4];
//    struct StringNode *next;
//}StringNode,*String;//存储密度高

// typedef struct StringNode{
//    char ch;
//    struct StringNode *next;
//}StringNode,*String;//存储密度低，每个字符1B，每个指针4B

//typedef struct {
//char *ch;//按照串的长度分配存储区，ch指向串的基地址
//int length;//串的长度
//}HString;

//void InitHString(HString &S){
//    S.ch=(char *) malloc(MaxLen* sizeof(char));
//    S.length=0;
//}

typedef struct {//静态数组实现（定长顺序存储）
char ch[MaxLen];//每个分量存储一个字符
int length;//串的实际长度
}SString;

bool SubString(SString &Sub,SString S,int pos,int len){
    if(pos+len-1>S.length){
        return false;
    }
    for (int i = pos; i <pos+len ; ++i) {
        Sub.ch[i-pos+1]=S.ch[i];
    }
    Sub.length=len;
    return true;
}
int StrCompare(SString S,SString T){//比较两个字符大小
    for (int i=1;i<S.length&&i<T.length;i++){
        if(S.ch[i]!=T.ch[i]){
            return S.ch[i]-T.ch[i];
        }
    }
    return S.length-T.length;
}
int Index1(SString S,SString T){
    int i=1,n=S.length,m=T.length;
    SString Sub;
    while (i<=n-m+1){
        SubString(Sub,S,i,m);
        if(StrCompare(Sub,T)!=0){
            i++;
        } else{
            return i;//返回子串在主串中的位置
        }
    }
    return 0;
}
int Index(SString S,SString T){
    int i=1,j=1;
    while (i<S.length&&j<T.length){
        if(S.ch[i]==T.ch[j]){
            i++;j++;//继续比较后继字符
        } else{
            i=i-j+2;
            j=1;//指针后退重新开始匹配
        }
    }
    if(j>T.length){
        return i-T.length;
    } else{
        return 0;
    }
}
int main() {
    return 0;
}
