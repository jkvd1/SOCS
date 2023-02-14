#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	int age;
	char name[100];	
};

int main() {
//	int angka = 10;
//	int *ptr1 = &angka;
//	
//	*ptr1 = 12;
//	
//	//double pointer
//	int **ptr2 = &ptr1;
//	**ptr2 = 15;
//	printf("%d %d\n", angka,&angka);
//	printf("%d %d\n", ptr1, &ptr1);
//	printf("%d %d\n", ptr2, &ptr2);
//
//	printf("%d", sizeof(int*));
	
//	int angka = 10;		
//	int *a,*b = &angka;
//	printf("%d %d",a,b);
	
	
//	Student student1 = {100,"Rico"};
//	Student student1 = {22,"Erwin"};
//	Student arrStudent[5] = 
//	{{100,"Rico"},{22,"Erwin"}};
//
//	printf("%d %s\n", arrStudent[0].age, arrStudent[0].name);
//	printf("%d %s", arrStudent[1].age, arrStudent[1].name);

//	Student student1 = {100,"Rico"};
//	Student *ptr = &student1;
//	printf("%d\n",sizeof(student1));
//	printf("%d %s\n",ptr->age,ptr->name);
//	printf("%d %s\n",(*ptr).age,(*ptr).name);

	Student *ptr = (Student*)malloc(sizeof(Student));
	strcpy(ptr->name,"Rico");
	ptr->age=100;
	printf("%s %d", ptr->name,ptr->age);
	return 0;
}

