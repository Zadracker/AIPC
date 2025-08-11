/*
3. Given an unsorted array, find the minimum difference between any pair in given array.
*/

#include<stdio.h>
int main(){
    int diff=99, temp=0;
    int p1,p2;
    int arr1[10]={28,92,33,91,34,90,62,59,10,51};
    int size=sizeof(arr1)/sizeof(int);
    printf("Size: %d",size);

    for (int i=0; i<=size-2; i++){
        p1=arr1[i];
        p2=arr1[i+1];
        temp= p1-p2;
        if (temp>=0){
            if (diff>temp){
                diff=temp;
            }
        }else{
            temp=temp*(-1);
                if (diff>temp){
                    diff=temp;
            }
        }
    }
    printf("\nSmallest difference: %d",diff);
}