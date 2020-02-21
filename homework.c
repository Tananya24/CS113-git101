#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max1 10
int num,i;
int j,k;
int a[max1];
void main(){
    for(i=0;i<num;i++){
         scanf("%d",&num);
         if (num <=0){
             break;
         }
    }
    int a[num];
    srand(time(NULL));
    for(i=0;i<num;i++){
        a[i]=srand()%30;
    }
    printf("Before: ");
    for(i=0;i<max1;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    for(j=1;j<max1;j++){
        k =a[j];
        for(i=j-1;i>=0 && k<a[i];i--){
            a[i+1] = a[i];
        }
        a[i+1]=k;
        for(i=0;i<max1;i++){
            printf("%d",a[i]);
        }
        printf("\n");
    }
    printf("After sort:");
    for(i=0;i<max1;i++){
        printf("%d",a[i]);
    }
    printf("\n");
   
}