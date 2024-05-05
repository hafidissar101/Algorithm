// Matrix Chain Multiplication using Dynamic Programming
#include <stdio.h>
#include<limits.h>
int main() {
    int size[]={1,2,3,4};
    int n=sizeof(size)/sizeof(size[0]);
    int m[100][100]={0};
    int i,j,k,d,q,min;
    for(d=1;d<n-1;d++)
    {
        for(i=1;i<n-d;i++)
        {
            j=i+d;
            min=INT_MAX;
            for(k=1;k<=j-1;k++)
            {
                q=m[i][k]+m[k+1][j]+size[i-1]*size[k]*size[j];
                if(q<min)
                {
                    min=q;
                }
            }
            m[i][j]=min;
        }
    }
    printf("Minimum number of multiplications is: %d",m[1][n-1]);

    return 0;
}
