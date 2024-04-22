#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int externalSum(int a, int b)
{
    return a+b;
}

int isPrime(int num)
{
    if (num < 2)
    {
        return FALSE;
    }
    if (num == 2)
        return TRUE;
    if( num % 2 == 0)
        return FALSE;
    for(int i=3; i*i<=num; i=i+2)
        if( num % i == 0  )
            return FALSE;
    return TRUE;
}
void erasePrimes(int *v, int n)
{
    for(int i=0;i<n;i++)
        if(isPrime(v[i])==TRUE)
            v[i] = -1;
}

int* arrayFirst20()
{
    static int arr[20]={0};
    for(int i=0;i<20;i++)
        arr[i] = 20*i-1;
    return arr;

}




