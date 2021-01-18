#include<stdio.h>
maxfn(int x,int y)
{
    int max;
    if(x>y){
        max=x;
    }
    else {
        max=y;
    }
    return max;
}
main()
{
    int num,large=0,count=1,i=0,j;                //we can't find the largest if all numbers are less than 0 by using this
    int temp_large;                             // These are for temporarily storing the larest and smallest number
    int sec_large_1,sec_large_2;                //sec_large_1 for second largest before largest, sec_large_2 for second largest after largest,
    int second_large;                            //second_large actually second largest
    printf("This program calculates second largest number only for positive integers.\n");
    printf("From how many numbers do you wish to get the second largest number?\n");
    scanf("%d",&num);
    int numbers[num];
    for(i=0;i<num;i++){
        printf("Enter the number %d\n",count++);
        scanf("%d",&numbers[i]);
    }
    for(i=1;i<num;i++){
        temp_large=maxfn(numbers[i-1],numbers[i]);
        if(temp_large>large){
            large=temp_large;
        }
    }
    printf("\nLargest number: %d\n",large);
    for(i=0;i<num;i++){
        if(large==numbers[i]){
            j=i;
        }
        for(i=0;i<(j-1);i++){
            temp_large=maxfn(numbers[i],numbers[i+1]);
            if(temp_large>sec_large_1){
                sec_large_1=temp_large;
            }
        }
        for(i=j+1;i<num-1;i++){
            temp_large=maxfn(numbers[i],numbers[i+1]);
            if(temp_large>sec_large_2){
                sec_large_2=temp_large;
            }
        }
    }
    second_large=maxfn(sec_large_1,sec_large_2);
    printf("\nSecond largest number: %d",second_large);
    return 0;
}
