#include <stdio.h>

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

int main()
{
    int menu = 1;
    menu = display_menu();
    switch (menu)
    {
        case 1:
            printf("Game Start\n");
            break;
        case 2:
            printf("Search History\n");
            break;
        case 3:
            printf("Record Output\n");
            break;
        case 4:
            printf("Quit\n");
            break;
    }       
    
    return 0;
}