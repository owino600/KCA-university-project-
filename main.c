#include "project.h"

int main(void)
{
    char name[100];
    char email[100];
    int number;
    Details* details;
    details = enter_details(name, email, number);
    if (details == NULL)
    {
        printf("memory not allocated");
    }
    printf("enter name: ");
    printf("enter email: ");
    printf("enter number: ");

    free(details);
    return (0);
}