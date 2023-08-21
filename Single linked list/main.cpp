#include <stdio.h>
//typedef struct LNode{//定义单链表类型结构
//    int data;//每个结点存放的数据类型
//    struct LNode *next;//指针指向下一个结点
//}LNode,*LinkList;
typedef struct LNode LNode;//定义LNode代替struct LNode
typedef struct LNode *LinkList;//定义一个LinkList表示指向LNode的指针（头指针）
struct LNode{
    int data;
    struct LNode *next;//next指针表示指向下一个结点的指针
};
bool InitList(LinkList &L){
    L=NULL;//空表暂时还没有任何结点
    return true;
}
bool Empty(LinkList L){//判断单链表是否为空
    if(L==NULL){
        return true;
    } else{
        return false;
    }
}
//bool Empty(LinkList L){
//    return (L==NULL);
//}
void test(){
    LinkList L;//声明一个指向单链表的指针，此刻没有创建一个结点
    InitList(L);//调用InitList函数，初始化一个空表
    Empty(L);

};
int main() {
    return 0;
}
