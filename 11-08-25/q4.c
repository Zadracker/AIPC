/*
4. Implement a program to store the marks of n students in 3 subjects using a dynamically allocated 2D array, 
then print the average marks of each student.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,avg;
    printf("Enter no. of Students: ");
    scanf("%d",&n);
    int subject=3;
    int students[n][subject];
    for(int i=0; i<n;i++){
        printf("Enter marks for AFL for Student %d: ",i+1);
        scanf("%d",&students[i][0]);
        printf("Enter marks for DS for Student %d: ",i+1);
        scanf("%d",&students[i][1]);
        printf("Enter marks for PS for Student %d: ",i+1);
        scanf("%d",&students[i][2]);
    }

    for(int i=0; i<n;i++){
        printf("\nMarks for AFL for Student %d: %d",i+1,students[i][0]);
        printf("\nMarks for DS for Student %d: %d",i+1,students[i][1]);
        printf("\nMarks for PS for Student %d: %d",i+1,students[i][2]);
        avg=(students[i][0]+students[i][1]+students[i][2])/3;
        printf("\nAverage marks of Student %d: %d",i+1,avg);
        printf("\n");

    }
return 0;
}