#include "project.h"

int main(void)
{
    char name[100];
    char email[100];
    int number;
    Details* details;
    details = enter_details(name, number, email);
    if (details == NULL)
    {
        printf("memory not allocated\n");
        return (1);
    }
    printf("enter name: ");
    printf("enter email: ");
    printf("enter number: ");

    free(details);
    return (0);
}