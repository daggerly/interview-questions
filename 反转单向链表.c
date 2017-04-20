#include <stdio.h>

struct Node{
    struct Node* next;
    int val;
};

void reverse(struct Node* head){
    struct Node* pre;
    struct Node* now;
    struct Node* next;
    pre = head;
    now = head->next;
    head->next = NULL;
    while(now){
        next = now->next;
        now->next = pre;
        pre = now;
        now = next;
    };
}
int main(int argc, char* argv[]){
    struct Node n1, n2, n3;
    struct Node* n;
    struct Node* head;
    n1.next = &n2;
    n1.val = 1;
    n2.val = 2;
    n2.next = &n3;
    n3.next = NULL;
    n3.val = 3;
    head = &n1;
    reverse(&n1);
    n = &n3;
    while(n){
        printf("%d\n", n->val);
        n = n->next;
    }
    return 0;
}
