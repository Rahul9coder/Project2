#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, j, k;
    float s = 0.0, x;
    printf("Enter values for n and x: ");
    scanf("%d %f", &n, &x);
    j=0;
    k=2;
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            s += (pow(x, i)/ i);
            k--;
            if(k == 0)
            {
                k = 2;
                j=1;
            }
        }
        else{
            s-= (pow(x, i)/ i);
            k--;
            if(k == 0)
            {
                k = 2;
                j=0;
            }
        }
    }
    printf("Sum = %f\n", s);
    return 0;
}