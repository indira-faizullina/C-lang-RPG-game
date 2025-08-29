#include <stdio.h>
#include <string.h>

int main(void) {

    char nickname[10];

    printf("What is your name?\n");
    scanf("%s", nickname);
    printf("Hi, %s!\n", nickname);

    short gold = 10;
    short hp_goblin = 3;
    short hp_hero = 3;
    char action;

    printf("Attention!!!\n");
    for(short i = 3; i > 0; i--) {
    printf("%d\n", i);
    }
    printf("START THE GAME\n");

    printf("%s, you attacked by Goblin!\n\aGoblin HP = %d, your HP = %d\n", nickname, hp_goblin, hp_hero);
    
    printf("Press 'A' for attack or 'R' for run.\n");

    while (hp_hero > 0)
    {
        action = getchar();
        if(action == 65 || action == 97) // "A" or "a"
        {
            getchar(); //cleaning
            hp_goblin--;
            printf("%s, you kicked it!\nGoblin HP = %d\n", nickname, hp_goblin);
        
            if (hp_goblin <= 0) 
            {
                printf("%s! you are a winner!\n", nickname);
                printf("You get %d gold.\n", gold);
                printf("You can buy more lives\nPress 'B' for buy or 'C' for continue the game\n");
                action = getchar();

                if(action == 66 || action == 98) // "B" or "b"
                {
                    printf("Enter the number of lives you want to buy. 1 live = 5 gold.\n");
                    short lives;
                    scanf("%d", &lives);;

                    hp_hero += lives;
                    printf("Good! Your HP = %d\n", hp_hero);
                }
                if(action == 67 || action == 99) // "C" or "c"
                {
                    hp_goblin = 3;
                }
                return 0;
            }
            else 
            {
                hp_hero--;
                printf("Goblin kicked you!\n\aYour HP = %d\n", hp_hero);
                if(hp_hero > 0)
                    {
                    printf("Next action?\n");
                    }
            }
        }
        else if(action == 82 || action == 114) // "R" or "r"
            {
                getchar(); //cleaning
                printf("You ran away! Buy!");
                return 0;
            }
    } 

    printf("Unfortunately you lost.");
    return 0;
}