#include <stdio.h>

int main(void) {

    int gold = 10;
    int hp_goblin = 3;
    int hp_hero = 3;
    char action;

    printf("You attacked by Goblin!\nGoblin HP = %d, your HP = %d\n", hp_goblin, hp_hero);
    
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
                printf("You are a winner!");
                printf("You get %d gold.\n", gold);
            }
            else 
            {
                hp_hero--;
                printf("Goblin kicked you!\nYour HP = %d\n", hp_hero);
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