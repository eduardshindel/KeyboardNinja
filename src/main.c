#include <stdio.h>
#include <unistd.h>
#include "include/menu.h"
#include "include/profile.h"

int main()
{
    char* profile = add_profile();

    int choice;
    intro();
    choice = menu();
    if (choice = 1) //Для training
    {               //Example
        //trainig();
    }
    if (choice = 2) //For main
    {
    }
    if (choice = 3) //For competitive
    {
    }
    if (choice = 4) //For rating
    {
    }
    if (choice = 5) //For statistic
    {
    }

    return 0;
}