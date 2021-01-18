#include<stdio.h>

int main(){
    int n,smaller=0,equal=0,large,i;
    
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
     for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    large=arr[0];
  for(i=1;i<n;i++)
  {
    if(large<arr[i])
    large=arr[i];
  }
    
    for(int i=0;i<n;i++){
        if(large>arr[i]) smaller++;
        else equal++;
    }

    printf("Number lesser than max value : %d\n",smaller);
    printf("Max value appearance count : %d",equal);

    return 0;
}
