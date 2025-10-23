#include"arraylib.h"
#include<stdio.h>
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
    float a=0;
    for(int i=0;i<size;i++){
        a+=arr[i];
        }
    float b=a/size;
    return b;
}
void displayArray(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void reverseArray(int arr[], int size){
    int a;
    for(int start=0,end=size-1;start<end;start++,end--){
        a=arr[start];
        arr[start]=arr[end];
        arr[end]=a;
    }
}
void sortArray(int arr[], int size){
    int temp;
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i; j++) {
            if(arr[j] > arr[j+1]) {
                
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int linearSearch(int arrIl, int size, int value){
      for(int i=0;i<size;itt){
         if(arr|i]==value){
         return i;
}
}
   return -1;
}

