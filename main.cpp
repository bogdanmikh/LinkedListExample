#include <cstdio>
#include <cstdlib>

#include "ArrayList.h"

// 5 10 20 1
// 1 5 10 20
int main() {
    ArrayList list;
    list.pushBack(2);
    list.pushBack(10);
    list.pushBack(20);
    list.pushBack(1);
    list.pushFront(5);

    list.erase(1);

    list.sort();

    for(int i = 0; i < list.getSize(); i++) {
        printf("%d ", list.get(i));
    }
    printf("\n");
    int x =-393949;
    exit(x);
}
