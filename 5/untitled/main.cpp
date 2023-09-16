#include <stdio.h>
#include <stdlib.h>
typedef char ElemType;



typedef struct ThreadNode{
    ElemType data;
    struct ThreadNode *lchild,*rchild;
    int ltag,rtag;
}ThreadNode,*ThreadTree;
ThreadNode *pre=nullptr;
//中序线索化
void visit1(ThreadNode *q){
    if(q->lchild==nullptr){
        q->lchild=pre;
        q->ltag=1;
    }
    if(pre!=nullptr&&pre->rchild==nullptr){
        pre->rchild=q;
        pre->rtag=1;
    }
    pre=q;
}
void InThread(ThreadTree T){
    if(T!=nullptr){
        InThread(T->lchild);
        visit1(T);
        InThread(T->lchild);
    }
}
void CreatInThread(ThreadTree T){
    pre=nullptr;
    if(T!= nullptr){
        InThread(T);
        if(pre->rchild== nullptr){
            pre->rtag=1;
        }
    }
}
//找后继节点
ThreadNode *FirstNode(ThreadNode *p){
    while (p->ltag==0){
        p=p->lchild;
    }
    return p;
}
ThreadNode *NextNode(ThreadNode *p){
    if(p->rtag==0){
        return FirstNode(p->rchild);
    } else{
        return p->rchild;
    }
}
void InOrder(ThreadNode *T){
    for (ThreadNode *p= FirstNode(T);p!= nullptr;p= NextNode(p)) {
        visit1(p);
    }
}
//找前驱
ThreadNode *LastNode(ThreadNode *p){
    while (p->rtag==0){
        p=p->rchild;
    }
    return p;
}
ThreadNode *PreNode(ThreadNode *p){
    if (p->ltag==0){
        return LastNode(p->lchild);
    } else{
        return p->lchild;
    }
}
void RevInorder(ThreadNode *T){
    for(ThreadNode *p= LastNode(T);p!= nullptr;p= PreNode(p)){
        visit1(p);
    }
}

//前序线索化
void visit2(ThreadNode *q){
    if(q->lchild== nullptr){
        q->lchild=pre;
        q->ltag=1;
    }
    if(pre!= nullptr&&pre->rchild== nullptr){
        pre->rchild=q;
        pre->rtag=1;
    }
    pre=q;
}
void PreThread(ThreadTree T){
    if(T!= nullptr){
        visit2(T);
        if(T->ltag==0){
            PreThread(T->lchild);
        }
        PreThread(T->rchild);
    }
}
void CreatPreThread(ThreadTree T){
    pre=nullptr;
    if(T!= nullptr){
        PreThread(T);
        if(pre->rchild== nullptr){
            pre->rtag=1;
        }
    }
}

//后序线索化
void visit3(ThreadNode *q){
    if(q->lchild==nullptr){
        q->lchild=pre;
        q->ltag=1;
    }
    if(pre!=nullptr&&pre->rchild==nullptr){
        pre->rchild=q;
        pre->rtag=1;
    }
    pre=q;
}
void PostThread(ThreadTree T){
    if(T!=nullptr){
        InThread(T->lchild);
        InThread(T->lchild);
        visit2(T);
    }
}
void CreatPostThread(ThreadTree T){
    pre=nullptr;
    if(T!= nullptr){
        PostThread(T);
        if(pre->rchild== nullptr){
            pre->rtag=1;
        }
    }
}


void creat_tree(ThreadTree root){
    char ch;
    scanf("%c", &ch);
    if (ch == '#') {
        root = nullptr;
    } else{
        root=(ThreadNode*)malloc(sizeof(ThreadTree));
        root->data=ch;
        root->ltag = 0;
        root->rtag = 0;
        creat_tree(root->lchild);
        creat_tree(root->lchild);
    }
}




typedef struct BiTNode{
    ElemType data;
    struct BiTNode *lchild,*rchild;
    int ltag,rtag;
}BiTNode,*BiTree;

BiTNode *p;
BiTNode *pre1=nullptr;
BiTNode *final=nullptr;

void visit(BiTNode *q){
    if(q==p){
        final=pre1;
    } else{
        pre1=q;
    }
}
void  InOrder(BiTree T){
    if(T!=nullptr){
        InOrder(T->lchild);
        visit(T);
        InOrder(T->rchild);
    }
}
//先序建立一棵树
void Create_Tree(BiTree root) {
    char ch;
    scanf("%c", &ch);
    if (ch == '#') {
        root = nullptr;
    }
    else {
        root = (BiTNode*)malloc(sizeof(ElemType));
        root->data = ch;
        root->ltag = 0;
        root->rtag = 0;
        Create_Tree(root->lchild);
        Create_Tree(root->rchild);
    }
}
int main() {
    return 0;
}
