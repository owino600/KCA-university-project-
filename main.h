#ifndef _PROJECT_H
#define _PROJECT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Details
{
    char name[100];
    int number;
    char *email;
}Details;

Details* enter_details(char name[], int number, char *email);
#endif