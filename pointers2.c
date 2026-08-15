#include <stdio.h>

int main(void)
{
    char *s = "HI!";
   //printf("%c", s[0]);
    printf("%s\n", s);
    //printf("%c", s[1]);
    printf("%s\n", (s+1));
    //printf("%c", s[2]);
    printf("%s\n", (s+2));
}

//"%p" Gives address of the string, %s and %c give the character in that string if we use s or s[]