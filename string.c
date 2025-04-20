#include<stdio.h>
#include<string.h>

#define max(a,b) ((a)>(b)?(a):(b))
int main()
{
    char str[100], substr[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s\n", str);
    printf("Enter a string: ");
    fgets(substr, sizeof(substr), stdin);
    printf("You entered sub string: %s\n", substr);
    int l1 = strlen(str);
    int l2 = strlen(substr);
    int c = 0, lc;
    for(int i = 0; i <= (l1-l2); i++)
    {
        lc = 0;
        int k = i;
        for(int j = 0; j < l2; j++, k++)
        {
            if(str[k] == substr[j])
            {
                lc++;
            }
            else
            {
                break;
            }
        }
        c = max(c, lc);
    }
    printf("Forward match=%.2f", ((float)c/12)*100.00);
        c = 0;
        for(int i = l1-1; i >= (l2-1); i--)
        {
            int k = i;
            lc = 0;
            for(int j = l2-1; j >= 0; j--, k--)
            {
                if(str[k] == substr[j])
                {
                    lc++;
                }
                else
                {
                    break;
                }
            }
            c = max(c, lc);
        }
        printf("Reverse match=%.2f\n", ((float)c / l2) * 100.00);
    }
    return 0;
}

