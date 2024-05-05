// 0/1 Knapsack problem
#include <stdio.h>
int max(int a, int b)
{
    if(a>b)
        return a;
    else 
        return b;
}
int knapsack(int profit[], int weight[], int capacity, int items)
{
    if(items==0 || capacity==0)
        return 0;
    else if(weight[items-1]>capacity)
        return(knapsack(profit,weight,capacity,items-1));
    else
        max(knapsack(profit,weight,capacity,items-1),profit[items-1]+knapsack(profit,weight,capacity-weight[items-1],items-1));
}
int main() {
    int profit[]={60,150,90};
    int weight[]={2,4,1};
    int capacity =5;
    int items = sizeof(weight)/sizeof(weight[0]);
    int total=knapsack(profit,weight,capacity,items);
    printf("Total profit earned is %d",total);
    

    return 0;
}
