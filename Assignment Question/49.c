#include <stdio.h>

int main() {
    int maxMarks = 0 ;
    float marks[5];
    float totalMarks = 0;
    int fail = 0;
    int due = 0;
    int sum[5];
    printf ("Enter maximum marks for each subject :\n");
    for(int i =0;i<5;i++)
    {
        scanf("%d",&sum);
        maxMarks = maxMarks + sum[i];
    }
    printf("Enter marks for each paper:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        totalMarks = totalMarks + marks[i];
        if (marks[i] < 0.4*sum[i]) 
            due++;
        
        if (marks[i] < 0.33*sum[i]) 
            fail++;
        
    }

    if (fail >= 2) 
        printf("FAIL\n");
     else if (due > 0) {
        printf("PAPER DUE\n");
    } else {
        float percentage = (totalMarks /maxMarks) * 100;

        if (percentage < 33) 
            printf("Fail\n");
         else if (percentage >= 33 && percentage < 45) 
            printf("Third Division\n");
         else if (percentage >= 45 && percentage < 60) 
            printf("Second Division\n");
         else if (percentage >= 60 && percentage < 70) 
            printf("First Division\n");
        else 
            printf("Pass with Hons\n");
        
    }

    return 0;
}
