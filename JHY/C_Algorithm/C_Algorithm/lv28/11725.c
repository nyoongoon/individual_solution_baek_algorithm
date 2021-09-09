#include <stdio.h>
#include <stdlib.h>


struct node { // 연결리스트의 노드 구조체
    int data; // 데이터 저장
    struct node *next; // 다음 노드의 주소를 저장할 포인터
};

void addFirst(struct node *target, int data)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode -> next = target -> next;
    newNode -> data = data;
    
    target -> next = newNode;
}

int main(void)
{
    return 0;
}
