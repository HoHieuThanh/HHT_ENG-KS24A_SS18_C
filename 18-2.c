#include <stdio.h>
#include <string.h>
struct Students{
	char name[100];
	int age;
	char phoneNumber[15];
};

int main() {
	
	struct Students student01;
	printf("Nhap ten: ");
	fgets(student01.name, sizeof(student01.name), stdin);
	printf("Nhap tuoi: ");
	scanf("%d", &student01.age);
	printf("Nhap Sdt: ");
	fflush(stdin);
	fgets(student01.phoneNumber, 10, stdin);
	
	printf("Ten: %s", student01.name);
	printf("Tuoi: %d\n", student01.age);
	printf("Sdt: %s\n", student01.phoneNumber);
	
	return 0;
}
