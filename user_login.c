#include "main.h"
Details* enter_details(char name[], int number, char *email)
{
    Details *newdetails;
    newdetails = malloc(sizeof(Details));
    if (newdetails == NULL)
    {
        return (NULL);
    }
    newdetails->email = strdup(email);
    newdetails->number = number;
    free (newdetails);
    return (0);
}