#include "project.h"
Details* enter_details(const char* name, int number, char *email)
{
    Details *list = NULL;
    Details *newdetails;
    newdetails = (Details *)malloc(sizeof(Details));
    if (newdetails == NULL)
    {
        return (NULL);
    }
    strcpy(newdetails->name, name);
    strcpy(newdetails->email, email);
    //newdetails->name = strdup(name);
    //newdetails->email = strdup(email);
    newdetails->number = number;
    newdetails->next = NULL;
    newdetails->next = list;
    list = newdetails;
    // free (newdetails);
    return (list);
}