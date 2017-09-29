//
// Created by Nguyễn Hồng on 5/24/17.
//

#include "HeapSort.h"

#include <stdio.h>

const int n = 10;
typedef int keytype;
typedef float othertype;
typedef struct recordtype {
    keytype key;
    othertype otherfields;
};
// khai bao mang a co n phan tu
recordtype a[n];

void Swap(recordtype &x, recordtype &y) {
    recordtype temp;
    temp = x;
    x = y;
    y = temp;
}

void PushDown(int first, int last) {
    //while (r <= (last - 1) / 2)
    if (first == last || first > (last - 1) / 2) return;
    if (last == 2 * first + 1) {
        if (a[first].key > a[last].key)
            Swap(a[first], a[last]);
        //first = last;
        return;
    } else if ((a[first].key > a[2 * first + 1].key) && (a[2 * first + 1].key <= a[2 * first + 2].key)) {
        Swap(a[first], a[2 * first + 1]);
        PushDown(2 * first + 1, last);
    } else if ((a[first].key > a[2 * first + 2].key) && (a[2 * first + 2].key < a[2 * first + 1].key)) {
        Swap(a[first], a[2 * first + 2]);
        PushDown(2 * first + 2, last);
    } else return; //first = last;
}

void HeapSort(void) {
    int i;
    /*1*/  for (i = (n - 2) / 2; i >= 0; i--)
        /*2*/     PushDown(i, n - 1);
    /*3*/  for (i = n - 1; i >= 2; i--) {
        /*4*/     Swap(a[0], a[i]);
        /*5*/     PushDown(0, i - 1);
    }
    /*6*/  Swap(a[0], a[1]);
}

void readList(recordtype a[]) {
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d = ", i + 1);
        scanf("%d", &a[i]);
    }
}

void printList(recordtype a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

//}