#include <stdio.h>

struct Students{
	char name[100];
	int age;
	char phoneNumber[15];
};

int main() {
	struct Students student01={
		"Ho Hieu Thanh",18,"0123456789"
	};
	printf("Ten: %s\n", student01.name);
	printf("Tuoi: %d\n", student01.age);
	printf("Sdt: %s\n", student01.phoneNumber);
	return 0;
}
