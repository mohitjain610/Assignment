#include"arraylib.h"
int findMaxIndex(int arr[], int size){
    int a=arr[0];
    for(int i=1;i<size;i++){
        if (a<arr[i]){
            a=arr[i];
        }
    }
    return a;
}
int findMinIndex(int arr[], int size){
   int a=arr[0];
    for(int i=1;i<size;i++){
        if (a>arr[i]){
            a=arr[i];
        }
    }
    return a;
} 
float findAverage(int arr[], int size){
    int a=0,c=1;
    for(int i=0;i<size;i++){
        a+=arr[i];
        c++;
        }
    int b=a/c;
    return b;
}
void displayArray(int arr[], int size){
    for(int i=0;i<size;i++){
        printf()
}
