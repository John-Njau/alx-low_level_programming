#include <stdio.h>
#include <ctype.h>

int main(){

    for(int i = 'A'; i <='z'; i++)
    {
        putchar(tolower(i));
    }
    return 0;
}