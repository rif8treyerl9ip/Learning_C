#include <stdio.h>

struct Node { int data; struct Node* next; };

int main() {
    struct Node node1 = {10, NULL};  // データ10、次はなし
    struct Node node2 = {20, NULL};  // データ20、次はなし
    node1.next = &node2;  // node1の次にnode2を連結

    // node1のデータを表示
    printf("Node1 Data: %d\n", node1.data);

    // node1の次のノード（node2）のデータを表示
    printf("Node2 Data: %d\n", node1.next->data);

    return 0;
}

/*
gcc node_example.c -o node_example
./node_example
*/
