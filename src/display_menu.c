#include <stdio.h>
#include <stdlib.h>

int display_menu()
{
    int menu;

    system("clear");

    printf("Tetris csk\n");
    printf("-------------------\n");
    printf("\t\tGAME MENU\n");
    printf("-------------------\n");
    printf("1. Game Start\n");
    printf("2. Search history\n");
    printf("3. Record Output\n");
    printf("4. Quit\n");
    printf("5. Color\n");       // 컬러 추가 [연습]
    scanf("%d", &menu);
    return menu;
}
