#include <stdio.h>
#include <windows.h>
long long factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    return n * factorial(n-1);
}
int main()
{
    LARGE_INTEGER s,e,freq;
    QueryPerformanceFrequency(&freq);
    int n;
    long long result;
    printf("Enter a number: ");
    scanf("%d",&n);
    QueryPerformanceCounter(&s);
    result = factorial(n);
    QueryPerformanceCounter(&e);
    double time = (double)(e.QuadPart - s.QuadPart) * 1e9 / freq.QuadPart;
    printf("Factorial = %lld\n",result);
    printf("Execution Time = %.0f ns\n",time);

    return 0;
}
