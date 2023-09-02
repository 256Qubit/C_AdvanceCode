#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* elements;
    int size;
    int capacity;
} LinearList;

// 初始化线性表
void initialize(LinearList* list) {
    list->elements = NULL;
    list->size = 0;
    list->capacity = 0;
}

// 添加元素
void add(LinearList* list, int element) {
    if (list->size == list->capacity) {
        // 如果当前容量不足，则重新分配内存空间
        int newCapacity = (list->capacity == 0) ? 1 : list->capacity * 2;
        int* newElements = (int*)realloc(list->elements, newCapacity * sizeof(int));
        if (newElements == NULL) {
            printf("Failed to allocate memory.\n");
            return;
        }
        list->elements = newElements;
        list->capacity = newCapacity;
    }

    list->elements[list->size] = element;
    list->size++;
}

// 删除元素
void removeElement(LinearList* list, int element) {
    int i;
    int found = 0;

    for (i = 0; i < list->size; i++) {
        if (list->elements[i] == element) {
            found = 1;
            break;
        }
    }

    if (found) {
        for (; i < list->size - 1; i++) {
            list->elements[i] = list->elements[i + 1];
        }
        list->size--;
    }
}

// 修改元素
void update(LinearList* list, int index, int newElement) {
    if (index >= 0 && index < list->size) {
        list->elements[index] = newElement;
    } else {
        printf("Index out of range.\n");
    }
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

// 释放线性表占用的内存空间
void freeList(LinearList* list) {
    free(list->elements);
    list->elements = NULL;
    list->size = 0;
    list->capacity = 0;
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

    // 释放线性表占用的内存空间
    freeList(&linearList);

    return 0;
}
