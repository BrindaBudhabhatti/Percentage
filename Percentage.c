#include <stdio.h>

int main()
{
    char name[100];
    int eng, math, sci, max_marks;
    float percent;

    printf("Your name: ");
    scanf("%s", name);

    printf("Percentage in English: ");
    scanf("%d", &eng);

    printf("Percentage in Mathematics: ");
    scanf("%d", &math);

    printf("Percentage in Science: ");
    scanf("%d", &sci);

    printf("Maximum Marks: ");
    scanf("%d", &max_marks);

    percent = (eng + math + sci)*100 / (max_marks * 3);

    printf("Hi! %s, youe percentage is: %f", name, percent);

}
