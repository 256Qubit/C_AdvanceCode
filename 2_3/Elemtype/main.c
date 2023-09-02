#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int elements[MAX_SIZE];
    int size;
} LinearList;

// 初始化线性表
void initialize(LinearList* list) {
    list->size = 0;
}

// 判断线性表是否为空
int isEmpty(LinearList* list) {
    return list->size == 0;
}

// 判断线性表是否已满
int isFull(LinearList* list) {
    return list->size == MAX_SIZE;
}

// 添加元素
void add(LinearList* list, int element) {
    if (isFull(list)) {
        printf("List is full. Cannot add element.\n");
        return;
    }

    list->elements[list->size] = element;
    list->size++;
}

// 删除元素
void removeElement(LinearList* list, int index) {
    if (index < 0 || index >= list->size) {
        printf("Invalid index.\n");
        return;
    }

    int i;
    for (i = index; i < list->size - 1; i++) {
        list->elements[i] = list->elements[i + 1];
    }

    list->size--;
}

// 修改元素
void update(LinearList* list, int index, int newElement) {
    if (index < 0 || index >= list->size) {
        printf("Invalid index.\n");
        return;
    }

    list->elements[index] = newElement;
}

// 查找元素
int search(LinearList* list, int element) {
    int i;
    for (i = 0; i < list->size; i++) {
        if (list->elements[i] == element) {
            return i;
        }
    }

    return -1; // 返回-1表示未找到
}

// 打印线性表中的所有元素
void printList(LinearList* list) {
    int i;
    for (i = 0; i < list->size; i++) {
        printf("%d\n", list->elements[i]);
    }
}

int main() {
    LinearList linearList;
    initialize(&linearList);

    // 添加元素
    add(&linearList, 1);
    add(&linearList, 2);
    add(&linearList, 3);
    add(&linearList, 4);

    // 打印线性表
    printList(&linearList);

    // 删除元素
    removeElement(&linearList, 2);

    // 修改元素
    update(&linearList, 0, 5);

    // 查找元素
    int index = search(&linearList, 4);
    printf("Index of 4: %d\n", index);

    // 打印线性表长度
    printf("Size of list: %d\n", linearList.size);

    // 获取指定位置的元素
    int element = linearList.elements[1];
    printf("Element at index 1: %d\n", element);

    return 0;
}
