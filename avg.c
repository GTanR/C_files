#include <stdio.h>
struct student
{
    char name[20];
    int rollno, marks;
};
void main()
{
    struct student s[20];
    int n, i;
    float total = 0, avg_marks;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    printf("Enter the Roll no's of the students\n");
    for(i=0;i<n;i++)
    {
            scanf("%d", &s[i].rollno);
    }
    printf("Enter the Names of the students\n");
    for(i=0;i<n;i++)
    {
            scanf("%s",s[i].name);
    }
    printf("Enter the marks of the students\n");
    for(i=0;i<n;i++)
    {
            scanf("%d",&s[i].marks);
    }
    for(i=0;i<n;i++)
    {
            total = total + s[i].marks;
    }
    avg_marks=total/n;
    printf("The average marks:%f\n",avg_marks);
    printf("The students scored above the average marks\n");
    printf("\t Name\t Marks\n");
    for(i=0;i<n;i++)
    {
            if (s[i].marks > avg_marks)
                printf("%15s : %d\n", s[i].name, s[i].marks);
    }
    printf("The students scored below the average marks\n");
    printf("\t Name\t Marks\n");
    for(i=0;i<n;i++)
    {
            if (s[i].marks < avg_marks)
                printf("%15s : %d\n", s[i].name, s[i].marks);
    }
}