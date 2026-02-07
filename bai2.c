/******************************************************************************
 * Họ và tên: [Lã Hải Đăng ]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randomArray(int arr[], int size, int min, int max)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % (max - min + 1)) + min;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findMaxMin(int arr[], int size, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Nhap arr[%d]: ", i);
    //     scanf("%d", &arr[i]);
    // }
    randomArray(arr, n, 50, 1000);
    printArray(arr, n);
    int max = arr[0];
    int min = arr[0];
    findMaxMin(arr, n, &max, &min);
    printf("Gia tri lon nhat trong mang la: %d\n", max);
    printf("Gia tri nho nhat trong mang la: %d\n", min);
    return 0;
}
