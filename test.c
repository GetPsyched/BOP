//Write a program in C to merge two arrays of same size sorted in decending order.

#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=a;
    a=b;
    b=t;

}
void rearrange(int *a,int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[i]<a[i+1])
                swap(a[i],a[i+1]);

        }
    }
}
print(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n1,n2;
    printf("enter the size of first array --> ");
    scanf("%d",&n1);

    printf("enter the size of second array --> ");
    scanf("%d",&n2);

    int a[n1],b[n2],i;
    printf("enter the data for first array --> ");
    for(i=0;i<n1;i++)
    {
        printf("enter the value of data --> ");
        scanf("%d",&a[i]);
    }
        printf("enter the data for second array");
    for(i=0;i<n2;i++)
    {
        printf("enter the value of data-->");
        scanf("%d",&b[i]);
    }

    int c[n1+n2];

    rearrange(c,n1+n2);
    print(c,n1+n2);

    return 0;
}
