#include <stdio.h>
#include "mylib.h"
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int arr[n];
    inputArray(arr, n);
    printf("Mang vua nhap la: ");
    printArray(arr, n);
    return 0;
}