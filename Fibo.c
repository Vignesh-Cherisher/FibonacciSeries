#include<stdio.h>
int n1=0,n2=1,n3,i,NumberOfElements,Sum; 
void getEvenNumbers(int arr[],int n,int even[]);
int j=0,m=0;
void getEvenNumbers(int arr[],int n,int even[]){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[j]=arr[i];
            j++;
        }
    }
} 
void getOddNumbers(int arr[],int n,int odd[]){
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            odd[m]=arr[i];
            m++;
        }
    }
} 
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
    for(int i=2;i<NumberOfElements;++i)
    {    
        n3=n1+n2;     
        Arr[i]=n3;
        n1=n2;    
        n2=n3;    
    }
    return;
}
int SumSeries(int Arr[],int num)
{
    int sum=0;
    for(int ind=0;ind<num;ind++)
    {
        sum+=Arr[ind];
    }
    return sum-1;
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
    
    int even[NumberOfElements];
    getEvenNumbers(arr,NumberOfElements,even);
    printf("\nEven Numbers: ");
    for(int x=0;x<j;x++){
        printf("%d ",even[x]);
    }
    int odd[NumberOfElements];
    getOddNumbers(arr,NumberOfElements,odd);
    printf("\nodd Numbers: ");
    for(int x=0;x<m;x++){
        printf("%d ",odd[x]);
    }
    return 0;  
}  