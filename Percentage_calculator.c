#include<stdio.h>
int main(){
    float total,obtain,percentage;
    printf("total marks:");
    scanf("%f",&total);
    printf("obtain marks:");
    scanf("%f",&obtain);
    percentage=(obtain/total)*100;
    printf("%f",percentage);
    return 0;
}
