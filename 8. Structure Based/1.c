#include<stdio.h>

struct date
{
    int d;
    int m;
    int y;
};

struct date compare(struct date d1,struct date d2){
    if(d1.y>d2.y) return d1;
    else if(d1.y<d2.y) return d2;
    else{
        if(d1.m>d2.m) return d1;
        else if(d1.m<d2.m) return d2;
        else{
            if(d1.d>d2.d) return d1;
            else if(d1.d<d2.d) return d2;
            else return d1;
        }
    }
}

int main(){
    struct date d1,d2,d3;
    printf("Enter the date 1 dd/mm/yyyy format : ");
    scanf("%d%d%d",&d1.d,&d1.m,&d1.y);
    printf("Enter the date 2 dd/mm/yyyy format : ");
    scanf("%d%d%d",&d2.d,&d2.m,&d2.y);    
    d3=compare(d1,d2);
    printf("The recent date is : %d/%d/%d\n",d3.d,d3.m,d3.y);
    return 0;
}