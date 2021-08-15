#include <stdio.h>
#include <string.h>

struct book
{
    char title[30];
    char author[30];
    int price;
};

int main(void)
{
    struct book my_book = {"C언어 완전 해부","홍길동",35000};
    struct book *ptr_my_book; //구조체 포인트 선언!
    
    ptr_my_book = &my_book;

    strcpy((*ptr_my_book).title, "C언어 마스터"); // 참조 연산자(*)를 이용하는 방법
    strcpy(ptr_my_book->author, "이순신");
    ptr_my_book -> price  = 32000;
    
    printf("책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n",

        my_book.title, my_book.author, my_book.price);
    return 0;
}
