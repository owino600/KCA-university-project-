#include "project.h"
char username(char *firstname, char *lastname, char *middlename)
{
    printf("\033[1mEnter First Name: \033[0m");
    fgets(firstname, sizeof(firstname), stdin);
    firstname[strcspn(firstname, "\n")] = '\0';

    printf("\033[1mEnter Last Name: \033[0m");
    fgets(lastname, sizeof(lastname), stdin);
    lastname[strcspn(lastname, "\n")] = '\0';

    printf("Enter Middle Name: ");
    fgets(middlename, sizeof(middlename), stdin);
    middlename[strcspn(middlename, "\n")] = '\0';
}
void birthdate(char *date, char *month, char *year)
{
    while (1)
    {
        printf("Date: ");
        scanf("%s", date);
        if (atoi(date) < 1 || atoi(date) > 31)
        {
            fprintf(stderr, "Invalid date!\n");
            continue;
        }
        else
        {
            *date = atoi(date);
        }
        break;
    }
    while (1)
    {
        printf("Month: ");
        scanf("%s", month);
        if (atoi(month) < 1 || atoi(month) > 12)
        {
            fprintf(stderr, "Invalid month!\n");
            continue;
        }
        else
        {
            *month = atoi(month);
        }
        break;
    }
    while (1)
    {
        printf("Year: ");
        scanf("%s", year);
        if (atoi(year) < 1940 || atoi(year) > 2050)
        {
            fprintf(stderr, "Invalid year!\n");
            continue;
        }
        else
        {
            *year = atoi(year);
        }
        break;
    }
}
int submit_update_delete (void)
{
    int choice;
    char username;

    
    printf("\n 1)Submit:\n");
    printf("\n 2)Update:\n");
    printf("\n 3)Delete:\n");
    
    printf("\nPlease choose action:\n");
    scanf("%d", &choice);
    return (choice);
    
}