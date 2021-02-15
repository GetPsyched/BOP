#include<stdio.h>
#include<string.h>

struct book{
    char title[30];
    char author[30];
    int cost;
    int year;
};

// Print details of books whose title is computer and cost is below 500
void spec1(struct book b[],int n){
    for(int i=0;i<n;i++){
        if(!strcmp(b[i].title,"computer") && b[i].cost<500)
            printf("%s %s %d %d\n",b[i].title,b[i].author,b[i].cost,b[i].year);
    }     
}

// books written by a particular author x
void spec2(struct book b[],int n,int x){
    for(int i=0;i<n;i++){
        if(!strcmp(b[i].author,x))
            printf("%s %s %d %d\n",b[i].title,b[i].author,b[i].cost,b[i].year);
    }     
}
// list of books which are published on or after a particular year
void spec3(struct book b[],int n,int y){
    for(int i=0;i<n;i++){
        if(b[i].year>=y)
            printf("%s %s %d %d\n",b[i].title,b[i].author,b[i].cost,b[i].year);
    }     
}

int main(){
    int n;
    printf("Enter the number of books : ");
    scanf("%d",&n);
    struct book b[n];
    printf("Enter the details like : title author cost year\n");
    for(int i=0;i<n;i++){
        printf("Book %d : ",i+1);
        scanf("%s%s%d%d",&b[i].title,&b[i].author,&b[i].cost,&b[i].year);
    }    
    return 0;
}