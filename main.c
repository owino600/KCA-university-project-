#include "project.h"

int main(void)
{
    char firstname[100];
    char lastname[100];
    char middlename[100];
    char year[5];
    char month[3];
    char day[3];
    char gender[20];
    int choice;
    char name[100];
    char email[100];
    int number;
    //Details* details;
    //details = enter_details(name, number, email);
    //if (details == NULL)
    //{
     //   printf("memory not allocated\n");
      //  return (1);
    //}
    //printf("enter name: ");
    //printf("enter email: ");
    //printf("enter number: ");

    //free(details);

    while (1)
    {
         username(firstname, lastname, middlename);
         birthdate(day, month, year);

        choice = submit_update_delete();
        if (choice == 1)
        {
            sleep(1.5);
            printf("Details submitted.\n");
            break;
        }
        else if (choice == 2)
        {
            sleep(1.5);
            printf("\nplease choose item to update\n");
            printf("\n 1:) User Name:\n");
            printf("\n 2:) BirthDate: \n");
            printf("\n 3:) ALL: \n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                username(firstname, lastname, middlename);
                break;
            }
            else if (choice == 2)
            {
                birthdate(day, month, year);
                break;
            }
            else if (choice == 3)
            {
                username(firstname, lastname, middlename);
                birthdate(day, month, year);
                break;
            }
            break;
        }
        else if (choice == 3)
        {
            sleep(1.5);
            printf("\nplease choose item to delete\n");
            break;
        }
        else
        {
            printf("Invalid Choice\n");
            continue;
        }
        break;
    }
    
    return (0);
}