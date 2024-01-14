#include "project.h"
char username(char *firstname, char *lastname, char *middlename)
{
    printf("Enter First Name: ");
    fgets(firstname, sizeof(firstname), stdin);
    firstname[strcspn(firstname, "\n")] = '\0';

    printf("Enter Last Name: ");
    fgets(lastname, sizeof(lastname), stdin);
    lastname[strcspn(lastname, "\n")] = '\0';

    printf("Enter Middle Name: ");
    fgets(middlename, sizeof(middlename), stdin);
    middlename[strcspn(middlename, "\n")] = '\0';
}
void birthdate(char *day, char *month, char *year)
{
    while (1)
    {
        printf("Day: ");
        scanf("%s", day);
        if (atoi(day) < 1 || atoi(day) > 31)
        {
            printf("Day Error\n");
            continue;
        }
        *day = atoi(day);
        break;
    }
    while (1)
    {
        printf("Month: ");
        scanf("%s", month);
        if (atoi(month) < 1 || atoi(month) > 12)
        {
            printf("Month Error\n");
            continue;
        }
        *month = atoi(month);
        break;
    }
    while (1)
    {
        printf("Year: ");
        scanf("%s", year);
        if (atoi(year) < 1940 || atoi(year) > 2050)
        {
            printf("year Error\n");
            continue;
        }
        *year = atoi(year);
        break;
    }
}
int submit_update_delete (void)
{
    int choice;
    char username;
    
    printf("\n 1)Submit: ");
    printf("\n 2)Update: ");
    printf("\n 3)Delete: ");
    
    printf("Please choose action:\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Form Submited\n");
    }
    else if (choice == 2)
    {
        printf("Please Update\n");
    }
    else if (choice == 3)
    {
        printf("Choose data to delete");
    }
    printf("Invalid input");
}