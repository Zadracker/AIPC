/*
5. Read n numbers into a dynamically allocated array, then use realloc() to increase the size by m more integers, 
input the new integers, and print the whole array.
*/

#include<stdio.h>
#include<stdlib.h>


int main(){
    int n,m;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int* arr1=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        printf("Enter number for position %d:\t",i);
        scanf("%d",&arr1[i]);
    }
    printf("Enter new size of the array: ");
    scanf("%d",&m);
    
   arr1 = realloc(arr1, m * sizeof(int));
    if (m>n){
    for (int j=n;j<m;j++){
        printf("Enter number for position %d:\t",j);
        scanf("%d",&arr1[j]);
    }} else {printf("Invalid");}
    printf("The array is: ");
    for (int k=0; k<m;k++){
        printf("%d,",arr1[k]);
    }
    return 0;
}