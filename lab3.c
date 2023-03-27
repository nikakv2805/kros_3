#include "lab3.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

int factorial(int num){
    if(num < 0)
    {
        return -1;
    }
    if(num == 0 || num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

float sqrtFloat(float num){
    return sqrtf(num);
}

double sqrtDouble(double num){
    return sqrt(num);
}

char* shout(const char* inp){
    int len = strlen(inp);
    char *new_str = malloc(len + 2);
    strcpy(new_str, inp);
    new_str[len] = '!';
    new_str[len + 1] = '\0';
    return new_str;
}