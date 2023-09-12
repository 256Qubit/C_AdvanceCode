#include <stdio.h>
#include <stdlib.h>
#include <cassert>

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
typedef int BTDataType;

typedef struct BinaryTreeNode
{
    BTDataType data;
    struct BinaryTreeNode* left;
    struct BinaryTreeNode* right;
}BTNode;


BTNode* CreatTree() {
    BTNode *n1 = (BTNode *) malloc(sizeof(BTNode));
    assert(n1);
    BTNode *n2 = (BTNode *) malloc(sizeof(BTNode));
    assert(n2);
    BTNode *n3 = (BTNode *) malloc(sizeof(BTNode));
    assert(n3);
    BTNode *n4 = (BTNode *) malloc(sizeof(BTNode));
    assert(n4);
    BTNode *n5 = (BTNode *) malloc(sizeof(BTNode));
    assert(n5);
    BTNode *n6 = (BTNode *) malloc(sizeof(BTNode));
    assert(n6);

    n1->data = 1;
    n2->data = 2;
    n3->data = 3;
    n4->data = 4;
    n5->data = 5;
    n6->data = 6;

    n1->left = n2;
    n1->right = n4;
    n2->left = n3;
    n2->right = NULL;
    n3->left = NULL;
    n3->right = NULL;
    n4->left = n5;
    n4->right = n6;
    n5->left = NULL;
    n5->right = NULL;
    n6->left = NULL;
    n6->right = NULL;

    return n1;

}

//先序
void PreOrder(BTNode* root)
{
    if (root == NULL)
    {
        printf("NULL ");
        return;
    }
    printf("%d ", root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}

//中序
void InOrder(BTNode* root)
{
    if (root == NULL)
    {
        printf("NULL ");
        return;
    }
    InOrder(root->left);
    printf("%d ", root->data);
    InOrder(root->right);
}

//后序
void PostOrder(BTNode* root) {
    if (root == NULL) {
        printf("NULL ");
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    printf("%d ", root->data);

}
int treeDepth(BTNode *root){
    if(root==0){
        return 0;
    } else{
        int l= treeDepth(root->left);
        int r= treeDepth(root->right);
        return l>r ? l+1:r+1;
    }
}
//void visit(BiTree T){
//    printf("%d",T->data);
//}
//void PreOrder(BiTree T){
//    if(T!=NULL){
//        PreOrder(T->lChild);
//        PreOrder(T->rChild);
//        visit(T);
//        PreOrder(T->lChild);
//        visit(T);
//        PreOrder(T->rChild);
//        visit(T);//访问根节点
//        PreOrder(T->lChild);//递归遍历左子树
//        PreOrder(T->rChild);//递归遍历右子树
//    }
//};

int main() {
    BTNode *T=CreatTree();
    PreOrder(T);
    printf("\n");
    InOrder(T);
    printf("\n");
    PostOrder(T);
    return 0;
}
