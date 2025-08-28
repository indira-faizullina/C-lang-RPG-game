#include <stdio.h>

int main(void) {

    short gold = 10;
    short hp_goblin = 3;
    short hp_hero = 3;
    char action;

    printf("You attacked by Goblin!\n\aGoblin HP = %d, your HP = %d\n", hp_goblin, hp_hero);
    
    printf("Press 'A' for attack or 'R' for run.\n");

    

    while (hp_hero > 0)
    {
        action = getchar();
        if(action == 65 || action == 97) // "A" or "a"
        {
            getchar(); //cleaning
            hp_goblin--;
            printf("You kicked it!\nGoblin HP = %d\n", hp_goblin);
        
            if (hp_goblin <= 0) 
            {
                printf("You are a winner!\n");
                printf("You get %d gold.\n", gold);
                printf("You can buy more lives\nPress 'B' for buy\n");
                action = getchar();

                if(action == 66 || action == 98) // "B" or "b"
                {
                    printf("Enter the number of lives you want to buy. 1 live = 5 gold.\n");
                    short lives;
                    scanf("%d", &lives);;

                    hp_hero += lives;
                    printf("Good! Your HP = %d\n", hp_hero);
                }
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