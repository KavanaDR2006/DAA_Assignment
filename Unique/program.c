#include <stdio.h>
#include <windows.h>
int unique(int a[], int n){
    for(int i=0;i<n-1;i++)   {
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])
                return 0;
        }
    }
    return 1;
}
int main(){
    LARGE_INTEGER s,e,f;
    QueryPerformanceFrequency(&f);
    int n,a[10000],r;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    QueryPerformanceCounter(&s);
    r = unique(a,n);
    QueryPerformanceCounter(&e);
    double t = (double)(e.QuadPart - s.QuadPart) * 1e9 / f.QuadPart;
    if(r)
        printf("All elements are unique\n");
    else
        printf("Duplicate elements found\n");
    printf("Execution Time = %.0f ns\n\n",t);
    printf("Simulated Performance Data\n");
    printf("Input Size\tBest Case Time\tAverage Case Time\tWorst Case Time\n");
    for(int i=1000;i<=10000;i+=500)
    {
        double best = 5 + (i%3);
        double avg = 0.25*i*i + (i%11);
        double worst = 0.5*i*i + (i%17);
        printf("%d\t\t%.0f\t\t%.0f\t\t\t%.0f\n",i,best,avg,worst);
    }
    return 0;
}
