#include <stdio.h>
#include <stdlib.h>
#define MaxSize 10
// Created by Administrator on 2023/8/23.
//
//typedef struct Node SLinkList[MaxSize];//SLinkList为静态链表
typedef struct {
    int data;
    int next;
}SLinkList[MaxSize];

struct Node{
    int data;//一个静态链表元素包含data与next虚拟地址指针，大小为8个字节
    int next;
};
void testSLinkList(){
    struct Node x;
    printf("%d\n", sizeof(x));

    struct Node a[MaxSize];
    printf("%d\n", sizeof(a));

    SLinkList b;
    printf("%d\n", sizeof(b));
}

void test(){
    SLinkList a;//其中a为数组名，等价于strcut Node a[MaxSize]表示定义了一个数组a其中最大长度为MaxSize=10
//    struct Node a[MaxSize];
}
int main(){

}
