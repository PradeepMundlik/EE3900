#include <stdio.h>

double x(int n)
{
    if (n>=0 && n<=3)
    {
        return n+1;
    }
    else if (n==4)
    {
        return 2;
    }
    else if (n==5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

double y(int n)
{
    if (n<0)
    {
        return 0;
    }
    else
    {
        return x(n)+x(n-2)-0.5*y(n-1);
    }
    
}

int main()
{
    FILE *fptr = fopen("yn.dat","w");

    for (int i = 0; i < 20; i++)
    {
        fprintf(fptr,"%f\n",y(i));
    }
    fclose(fptr);
    return 0;
}