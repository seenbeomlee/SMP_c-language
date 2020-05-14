#include<stdio.h>

struct stu {
	int ID;
	float kor, eng, math;
	float avg;
	char grade;
};

typedef struct stu stu;

int main() {

	stu* A;
	stu B = { 0,1,2,3,4, 'a' };

	A = &B;

	printf("BÀÇgrade´Â?: %c", A->grade);

	return 0;
}