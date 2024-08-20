#include <stdio.h>

struct Node { int data; struct Node* next; };

int main() {
    struct Node node1 = {10, NULL};  // データ10、次はなし
    struct Node node2 = {20, NULL};  // データ20、次はなし
    printf("Node1 Next: %p\n", (void*)node1.next);
    node1.next = &node2;  // node1の次にnode2を連結

    // node1の情報を表示
    printf("Node1 Data: %d\n", node1.data);
    printf("Node1 Next: %p\n", (void*)node1.next);

    // node2の情報を表示
    printf("Node2 Data: %d\n", node2.data);
    printf("Node2 Next: %p\n", (void*)node2.next);

    // node1の次のノード（node2）のデータを表示（ポインタを介してアクセス）
    printf("Node1's Next Node Data: %d\n", node1.next->data);

    return 0;
}

/*
gcc linked_list_basics.c -o linked_list_basics.c
./linked_list_basics.c
*/
