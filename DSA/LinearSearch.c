#include<stdio.h>
int arr[10]={2,4,6,8,10,12,14,16,18,20};
int linearSearch();
int main()
{
    int n, pos ;
    printf("Enter a number to search: ");
    scanf("%d",&n);
    
   pos = linearSearch();
   if(pos == -1)
   {
       printf("Element not found");
   }
   else{
       printf("Element found at %d positon",pos+1);
   }
}
int linearSearch( int n){
    int f=0;
     for( int i=0; i<10; i++){
        if(arr[i]==n){
            f=1;
            return i;
        }
    }
    return-1;
    
}
