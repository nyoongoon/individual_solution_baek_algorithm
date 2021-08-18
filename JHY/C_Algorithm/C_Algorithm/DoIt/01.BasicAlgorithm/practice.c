#include <stdio.h>

struct name {
    char last[30];
    char first[30];
};

struct friends
{
    struct name friend_name;
    char address[30];
    char job[30];
};

int main(void)
{
    struct friends hong = {
        {"전", "호영"},
        "서울시 강서구",
        "프로그래머"
    };
    
    printf("%s\n\n", hong.address);
    printf("%s%s에게,\n", hong.friend_name.last, hong.friend_name.first);
    printf("그동안 잘 지냈니? 아직 %s지?\n", hong.job);
    puts("공부 잘 하고, 다음에 꼭 한번 보자.\n잘 지내^^");
    return 0;
}
