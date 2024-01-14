#ifndef _PROJECT_H
#define _PROJECT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Details
{
    char name[100];
    int number;
    char email[100];
    struct Details *next;
}Details;

Details* enter_details(const char* name, int number, char *email);
char username(char *firstname, char *lastname, char *middlename);
void birthdate(char *day, char *month, char *year);
int submit_update_delete (void);
#endif