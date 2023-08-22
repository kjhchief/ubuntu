#include <stdio.h>

typedef struct student
{
	int id;
	char name[20];
	int korean;
	int english;
	int math;
	int total;
	double average;
	char grade;
} Student;
void print_data(Student* students, int size);
void input_data(Student* students, int size);
void sort_data(Student* students, int size);


int main(void)
{
	Student students[3];

	/*
	for (int i = 0; i < 3; i++)
	{
		printf("학번 : ");
		scanf("%d", &students[i].id);
		printf("이름 : ");
		scanf("%s", students[i].name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d", &students[i].korean, &students[i].english, &students[i].math);
		students[i].total = students[i].korean + students[i].english + students[i].math;
		students[i].average = (double)students[i].total / 3;
		
		if (students[i].average >= 90)
			students[i].grade = 'A';
		else if ((students[i].average >= 80) && (students[i].average < 90))
			students[i].grade = 'B';
		else if ((students[i].average >= 70) && (students[i].average < 80))
			students[i].grade = 'C';
		else 
			students[i].grade = 'F';
	}
	*/
	input_data(students, sizeof(students)/sizeof(Student));


	printf("# 정렬 전 데이터 ...\n");
	/*
	for (int i = 0; i < 3; i++)
	{
		printf("%5d %10s %5d %5d %5d %5d %5.1lf %5c", students[i].id, students[i].name, students[i].korean, students[i].english, 
				students[i].math, students[i].total, students[i].average, students[i].grade);
		printf("\n");
	}
	*/
	print_data(students, sizeof(students)/sizeof(Student));

	printf("# 정렬 후 데이터 ...\n");
	sort_data(students, sizeof(students)/sizeof(Student));
	print_data(students, sizeof(students)/sizeof(Student));
	/*
	for (int i = 0; i < 2; i++)
	{
		if (students[i].total < students[i+1].total)
		{
		       Student temp;
		       temp = students[i];
		       students[i] = students[i+1];
		       students[i+1] = temp;
				
		}
	}
	*/
	/*
	for (int i = 0; i < 3; i++)
	{
		printf("%5d %10s %5d %5d %5d %5d %5.1lf %c", students[i].id, students[i].name, students[i].korean, students[i].english, 
				students[i].math, students[i].total, students[i].average, students[i].grade);
		printf("\n");
	}
	*/

	return 0;
}
void print_data(Student* students, int size)
{
	
	for (int i = 0; i < size; i++)
	{
		printf("%5d %10s %5d %5d %5d %5d %5.1lf %5c", students[i].id, students[i].name, students[i].korean, students[i].english, 
				students[i].math, students[i].total, students[i].average, students[i].grade);
		printf("\n");
	}
}
void input_data(Student* students, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("학번 : ");
		scanf("%d", &students[i].id);
		printf("이름 : ");
		scanf("%s", students[i].name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d", &students[i].korean, &students[i].english, &students[i].math);
		students[i].total = students[i].korean + students[i].english + students[i].math;
		students[i].average = (double)students[i].total / 3;
		
		if (students[i].average >= 90)
			students[i].grade = 'A';
		else if ((students[i].average >= 80) && (students[i].average < 90))
			students[i].grade = 'B';
		else if ((students[i].average >= 70) && (students[i].average < 80))
			students[i].grade = 'C';
		else 
			students[i].grade = 'F';
	}
}
void sort_data(Student* students, int size)
{
	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < j; i++)
		{
			if (students[i].total < students[i+1].total)
			{
			       Student temp;
			       temp = students[i];
			       students[i] = students[i+1];
			       students[i+1] = temp;
					
			}
		}
		
	}
}
//
//
//
