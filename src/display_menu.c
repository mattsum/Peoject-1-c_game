#include <stdio.h>
#include <stdlib.h>

int display_menu()
{
    int menu;

    system("clear");
    
    printf("Tetris kmw\n");
    printf("-----------------------\n");
    printf("\t\tGAME MENU\n");
    printf("-----------------------\n");
    printf("1. Game Start\n");
    printf("2. Search History\n");
    printf("3. Record Output");
    printf("4. Quit\n");

    scanf("%d", &menu);
    return menu;
}
