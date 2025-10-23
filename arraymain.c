#include<stdio.h>
#include "arraylib.h"
int main() {
    int choice,size;
    do {
        printf("\n===== MENU =====\n");
        printf("1. findMaxIndex\n");
        printf("2. findMinIndex\n");
        printf("3. findAverage\n");
        printf("4. displayArray\n");
        printf("5. reverseArray\n");
        printf("6. sortArray\n");
        printf("7. linearSearch\n");
        printf("8. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        if (choice == 8) {
        printf("Exiting program. Goodbye!\n");
        break;
        }
        printf("Enter a size of array:");
        scanf("%d", &size);
        int arr[size],value;
        for(int i=0;i<size;i++){
            printf("Enter a no:");
            scanf("%d",&arr[i]);
        }
        switch (choice) {
        case 1:
            printf("%d",findMaxIndex(arr,size));
            break;
        case 2:
            printf("%d",findMinIndex(arr,size));
            break;
        case 3:
            printf("%f",findAverage(arr,size)); 
            break;
        case 4:
             displayArray(arr,size);
             break;
        case 5:
             reverseArray(arr,size);
             for (int i = 0; i < size; i++)
             {
                printf("%d ",arr[i]);
             }
             break;
        case 6:
             sortArray(arr,size);
             8for (int i = 0; i < size; i++)
             {
                printf("%d ",arr[i]);
             }
             break;
        case 7:
             printf("enter target value");
             scanf("%d",&value);
             printf("index is %d ",linearSearch(arr,size,value));
             break;
        default:
            printf("Invalid choice! Please select between 1–4.\n");
        }
    }   
    while (choice != 8);
            return 0;
}
