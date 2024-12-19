#include <stdio.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien students[5];

    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        
        printf("Nhap ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);
        fflush(stdin);
        
        printf("Nhap so dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        
        printf("\n");
    }

    printf("Danh sach thong tin sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}
