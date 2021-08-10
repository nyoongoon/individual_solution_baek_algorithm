#include <stdio.h>

struct Player_Point {
    int x;
    int y;
};

struct Player {
    char *name;
    int level;
    double hp;
    struct Player_Point position;
};

void print_point(struct Player_Point x) {
    printf("point : (x : %d , y : %d)\n", x.x, x.y);
}

int main(void)
{
    struct Player_Point player = {10, 20};
    struct Player_Point monster = {0, 20};
  
    struct Player p1 = {"lockpick", 1, 10.0};
    p1.position.x = 0;
    p1.position.y = 2;
    
    print_point(player);
    print_point(monster);
    
    return 0;
}
