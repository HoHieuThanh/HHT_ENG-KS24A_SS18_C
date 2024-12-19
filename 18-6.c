#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
}SinhVien;

SinhVien students[50] = {
    {0, "Nguyen Van A", 17, "0123456700"},
    {1, "Nguyen Van B", 18, "0123456701"},
    {2, "Nguyen Van C", 19, "0123456702"},
    {3, "Nguyen Van D", 20, "0123456703"},
    {4, "Nguyen Van E", 21, "0123456704"}
};

int size = 5;

void themSinhVien() {
    if (size >= 50) {
        printf("Khong the them sinh vien, mang da day.\n");
        return;
    }

    SinhVien svMoi;
    printf("Nhap ID: ");
    scanf("%d", &svMoi.id);
    getchar();

    printf("Nhap ten: ");
    fgets(svMoi.name, sizeof(svMoi.name), stdin);
    svMoi.name[strcspn(svMoi.name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &svMoi.age);

    printf("Nhap so dien thoai: ");
    scanf("%s", svMoi.phoneNumber);

    students[size] = svMoi;
    size++;

    printf("Them sinh vien thanh cong!\n");
}

void hienThiDanhSach() {
    printf("\nDanh sach thong tin sinh vien:\n");
    for (int i = 0; i < size; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ma SV: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n\n", students[i].phoneNumber);
    }
}

int main() {
    int id, index;

    hienThiDanhSach();

    printf("\nThem sinh vien moi:\n");
    themSinhVien();

    printf("\nDanh sach thong tin sinh vien sau khi them moi:\n");
    hienThiDanhSach();

    return 0;
}
