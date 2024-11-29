#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j)
                printf("%d\t", matrix[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }

    return 0;
}


/*#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j)
                printf("%d\t", matrix[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }

    return 0;
}*/
/*#include <stdio.h>

#define MAX_STUDENTS 10
#define QUIZZES 3

typedef struct {
    int rollNo;
    int scores[QUIZZES];
} Student;

void printScores(Student students[], int n) {
    printf("\nStudent Scores:\n");
    printf("Roll No\tQuiz 1\tQuiz 2\tQuiz 3\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", students[i].rollNo);
        for (int j = 0; j < QUIZZES; j++) {
            printf("%d\t", students[i].scores[j]);
        }
        printf("\n");
    }
}

void calculateStatistics(Student students[], int n) {
    int highScore[QUIZZES] = {0}, lowScore[QUIZZES] = {100, 100, 100};
    int highRoll[QUIZZES], lowRoll[QUIZZES];
    float quizAvg[QUIZZES] = {0}, overallAvg = 0;
    float studentAvg[MAX_STUDENTS] = {0};
    int highAvgQuiz = 0, lowAvgQuiz = 0;
    float highestAvg = 0, lowestAvg = 100;

    for (int i = 0; i < QUIZZES; i++) {
        for (int j = 0; j < n; j++) {
            quizAvg[i] += students[j].scores[i];
            if (students[j].scores[i] > highScore[i]) {
                highScore[i] = students[j].scores[i];
                highRoll[i] = students[j].rollNo;
            }
            if (students[j].scores[i] < lowScore[i]) {
                lowScore[i] = students[j].scores[i];
                lowRoll[i] = students[j].rollNo;
            }
        }
        quizAvg[i] /= n;
        overallAvg += quizAvg[i];
    }
    overallAvg /= QUIZZES;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < QUIZZES; j++) {
            studentAvg[i] += students[i].scores[j];
        }
        studentAvg[i] /= QUIZZES;
        if (studentAvg[i] > highestAvg) {
            highestAvg = studentAvg[i];
            highAvgQuiz = i + 1;
        }
        if (studentAvg[i] < lowestAvg) {
            lowestAvg = studentAvg[i];
            lowAvgQuiz = i + 1;
        }
    }

    printf("\nStatistics:\n");
    for (int i = 0; i < QUIZZES; i++) {
        printf("Quiz %d - High Score: %d (Roll No: %d), Low Score: %d (Roll No: %d), Average: %.2f\n",
               i + 1, highScore[i], highRoll[i], lowScore[i], lowRoll[i], quizAvg[i]);
    }
    printf("Overall Average of all Quizzes: %.2f\n", overallAvg);
    printf("Student with Highest Average: Quiz %d (Average: %.2f)\n", highAvgQuiz, highestAvg);
    printf("Student with Lowest Average: Quiz %d (Average: %.2f)\n", lowAvgQuiz, lowestAvg);
}

int main() {
    int n;
    printf("Enter the number of students (max 10): ");
    scanf("%d", &n);

    if (n > MAX_STUDENTS || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    Student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].rollNo);
        printf("Enter scores for 3 quizzes: ");
        for (int j = 0; j < QUIZZES; j++) {
            scanf("%d", &students[i].scores[j]);
        }
    }

    printScores(students, n);
    calculateStatistics(students, n);

    return 0;
}*/
