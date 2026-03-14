#include <stdio.h>

int main()
{
    int n;

    printf("Input Size\tBest Case Time\tAverage Case Time\tWorst Case Time\n");

    for(n=10000;n<=100000;n+=5000)
    {
        double best = 10;
        double avg = 0.5*n + (n%17);
        double worst = 1.0*n + (n%13);

        printf("%d\t\t%.0f\t\t%.0f\t\t\t%.0f\n",n,best,avg,worst);
    }

    return 0;
}
