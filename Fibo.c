#include<stdio.h>
#include<stdio.h>  
int n1=0,n2=1,n3,i,NumberOfElements,Sum; 
void generateFibonacciSeries(int Arr[],int num){
    if(num==0){
        return;
    }
    if(num==1){
        Arr[0]=0;
    }
    
    
    Arr[0]=n1;
    Arr[1]=n2;
    if(num==2){
        return;
    }
    for(i=2;i<NumberOfElements;++i)
    {    
        n3=n1+n2;     
        Arr[i]=n3;
        n1=n2;    
        n2=n3;    
    }
    return;
}
int main()    
{    
    printf("Enter the number of elements : ");    
    scanf("%d",&NumberOfElements);    
    int arr[NumberOfElements];
    generateFibonacciSeries(arr,NumberOfElements); 
    printf("The Series : ");
    for(int i=0;i<NumberOfElements;i++){
        printf("%d ",arr[i]);
    }
    return 0;  
}  