#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int len(char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}

char* add(char* s1, char* s2)
{
    int i, j;
    int l = len(s2);
    int l2 = len(s1);
    char *s3 = (char*)malloc(l2 + l + 1);
    int l3 = len(s3);
    if (s3 == NULL)
    {
        printf("Memory alocation failed\n");
        return NULL;
    }
    for(i=0; i<l2; i++)
    {
       s3[i] = s1[i];
    }
    for(j=0; j<l; j++)
    {
        s3[i+j] = s2[j];
    }
    s3[i + j] = '\0';
    return s3;
}



int main()
{
    char s1[50], s2[50];
    printf("Enter string one:");
    scanf("%99s", s1);
    printf("\nEnter string two:");
    scanf("%99s", s2);
    
    char* str = add(s1, s2);
    if (str != NULL)
    {
        printf("New String is %s\n", str);
        free(str);
    }

    return 0;
}