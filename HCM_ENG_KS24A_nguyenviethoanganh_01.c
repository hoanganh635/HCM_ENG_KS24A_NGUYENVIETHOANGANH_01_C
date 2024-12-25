#include <stdio.h>

int main() {
    int MAX = 100;
    int arr[MAX];
    int size = 0;
    int n;
    printf("-----------------------------------MENU-------------------------------------\n");
    printf("1. nhap so phan tu va gia tri cho mang\n");
    printf("2. in ra gia tri cac phan tu trong mang\n");
    printf("3. tim gia tri nho nhat va lon nhat trong mang\n");
    printf("4. in ra tong cua tat ca cac phan tu\n");
    printf("5. them 1 phan tu vao cuoi mang\n");
    printf("6. xoa phan tu tai 1 vi tri\n");
    printf("7. sap xep mang theo thu tu giam dan\n");
    printf("8. nhap vao 1 phan tu, kiem tra xem phan tu do co ton tai trong mang hay khong\n");
    printf("9. in ra toan bo so nguyen to trong mang\n");
    printf("10. sap xep mang theo thu tu tang dan\n");
    int choice;
    printf(" moi ban nhap lua chon");
    scanf("%d",&choice);
    switch(choice) {
        case 1:printf("nhap so phan tu va gia tri cho mang\n");
        printf("nhap so phan tu: ");
        scanf("%d",&n);
        if (n > MAX || n < 0) {
            printf("du lieu ban nhap khong phu hop");
            return 1;
        }
        size = n;
        printf("nhap gia tri tung phan tu  : \n");
        for(int i=0;i<size;i++) {
            printf("gia tri thu %d la : ", i+1);
            scanf("%d",&arr[i]);
        }
        break;
        case 2:printf("2. in ra gia tri cac phan tu trong mang\n");
        if(size == 0){
            printf("mang rong \n");
            break;
        }
        printf("Cac phan tu trong mang la : \n");
        for (int i = 0; i < size; ++i) {
            printf("%d ",arr[i]);
        }
        printf("\n");
        break;
        case 3: printf("tim gia tri nho nhat va lon nhat cua mang");
        for(int i=0;i<size-1;i++) {
            for(int j=0;j<size - 1 - i;j++) {
                if(arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
                printf("gia tri nho nhat cua mang la : %d ",arr[0]);
                printf("gia tri lon nhat cua mang la : %d ",arr[size -1]);
            }
        }
        break;


        case 4: printf("in ra tong cua tat ca cac phan tu" );
        int sum = 0;
        for(int i=0;i < size;i++) {
            sum += arr[i];
        }
        break;
        case 5:printf("them 1 phan tu vao cuoi mang");
        int addindex,valueindex;
        printf("vi tri can them phan tu ");
        scanf("%d",&addindex);
        printf("gia tri cua phan tu can them la :");
        scanf("%d",&valueindex);
        arr[size] = arr[addindex];
        arr[size] = valueindex;
        printf("da duoc them");
        break;
        case 6: printf("xoa phan tu tai vi tri cu the");
        int deleteindex,deletevalue;
        printf("moi ban nhap vao vi tri can xoa");
        scanf("%d",deleteindex);
        printf("moi ban nhap vao gia tri can xoa");
        scanf("%d",deletevalue);
        if(deleteindex > size - 1 || deleteindex < 0) {
            printf("du lieu khong dung : ");
        }else {
            for(int i= deleteindex;i>=size - 1;i++) {
                arr[i] = arr[i+1];
            }
        }
        printf("gia tri da dc xoa: ");
        break;
        case 10: printf("Thoat  : \n");
        break;
        default: printf("moi ban nhap lai tu 1 -6");

        if(choice == 10) {
            printf("thoat  : \n");
        }
    }
    return 0;
}    



























































































