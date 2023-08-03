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
    for(int i=0;i<NumberOfElements;++i)
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
    for(int ind=0;ind<num-1;ind++)
    {
        sum+=Arr[ind];
    }
    sum+=Arr[num-1]+Arr[num-2];
    return sum;
}
int nthElement(int num){
    n1=0,n2=1,n3=0;
    if(num==0){
        return -1;
    }
    if(num==1){
        return 0;
    }
    if(num==2){
        return 1;
    }
    for(int i=2;i<num;++i)
    {    
        n3=n1+n2;
        n1=n2;    
        n2=n3;    
    }
    return n3;
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
    Sum = SumSeries(arr,NumberOfElements);
    printf("\nSum: %d",Sum);
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
    printf("\nThe %d th element is : %d",NumberOfElements,nthElement(NumberOfElements));
    return 0;  
}
