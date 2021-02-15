#include<stdio.h>

int mark_avg=0;

struct student{
    char name[30];
    int rno;
    int marks;
    int fee;
};

void Topper(struct student st[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(st[max].marks<st[i].marks) max=i;
    }
    printf("Details of the topper : %s %d %d %d",st[max].name,st[max].rno,st[max].marks,st[max].fee);
}

void greater(struct student st[],int n){
    printf("Students having marks greater than avg marks : \m");
    for(int i=0;i<n;i++){
        if(st[i].marks>mark_avg)
        printf("%s %d %d %d\n",st[i].name,st[i].rno,st[i].marks,st[i].fee);
    }
}

void FEE(struct student st[],int n){
    printf("Students who have not paid there fees : \m");
    for(int i=0;i<n;i++){
        if(st[i].fee<=0)
        printf("%s %d %d %d\n",st[i].name,st[i].rno,st[i].marks,st[i].fee);
    }
}

int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    struct student st[n];
    printf("Enter the details like : name rno marks fee\n");
    for(int i=0;i<n;i++){
        printf("Student %d : ",i+1);
        scanf("%s%d%d%d",&st[i].name,&st[i].rno,&st[i].marks,&st[i].fee);
        mark_avg+=st[i].marks;
    }
    mark_avg/=n;
    greater(st,n);
    Topper(st,n);
    FEE(st,n);
    printf("\n");
    return 0;
}