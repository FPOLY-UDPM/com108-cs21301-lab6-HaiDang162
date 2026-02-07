/******************************************************************************
 * Họ và tên: [Lã Hải Đăng ]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng

#include <stdio.h>
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    float tb, tong = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            tong += arr[i];
            count++;
        }
    }
    if (count == 0)
    {
        printf("Khong co so nao chia het cho 3 trong mang\n");
        return 0;
    }
    tb = tong / count;
    printf("Trung binh cong cac so chia het cho 3 trong mang la: %.2f", tb);
    return 0;
}
