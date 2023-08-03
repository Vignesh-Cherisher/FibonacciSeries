#include<stdio.h>
#include<stdio.h>  
int SumSeries(int Arr[],int num);
int main()    
{    
    int n1=0,n2=1,n3,i,NumberOfElements,Sum;    
    printf("Enter the number of elements : ");    
    scanf("%d",&NumberOfElements);    
    int arr[NumberOfElements];
    printf("\nSeries : %d %d",n1,n2);
    arr[0]=n1;
    arr[1]=n2;
    for(i=2;i<NumberOfElements;++i)
    {    
        n3=n1+n2;    
        printf(" %d",n3);   
        arr[i]=n3;
        n1=n2;    
        n2=n3;    
    }  
    return 0;  
}  