#include <stdio.h>

int main()
{
    float accuracy, confidence, modelScore, average;
    int datasetSize;
    int role;
    int statusFlags;

    printf("Enter accuracy (0-100): ");
    scanf("%f", &accuracy);

    printf("Enter confidence score (0-100): ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("Enter user role:\n");
    printf("1 = Intern\n");
    printf("2 = Engineer\n");
    printf("3 = Admin\n");
    scanf("%d", &role);

    printf("Enter status flags:\n");
    printf("1 = TRAINED\n");
    printf("2 = VALIDATED\n");
    printf("4 = APPROVED\n");
    printf("8 = DEPRECATED\n");
    scanf("%d", &statusFlags);

    /* Calculate model score */

    if (datasetSize / 1000.0 > 10)
    {
        modelScore = (accuracy * 0.5) +
                     (confidence * 0.3) +
                     (10 * 2);
    }
    else
    {
        modelScore = (accuracy * 0.5) +
                     (confidence * 0.3) +
                     ((datasetSize / 1000.0) * 2);
    }

    printf("\nModel Score: %.2f\n", modelScore);

    /* Deployment decision */

    if ((statusFlags & 8) != 0)
    {
        printf("Rejected: model deprecated\n");
    }
    else if ((statusFlags & 1) == 0)
    {
        printf("Rejected: not trained\n");
    }
    else if ((statusFlags & 2) == 0)
    {
        printf("Rejected: not validated\n");
    }
    else if ((statusFlags & 4) == 0)
    {
        printf("Pending: awaiting approval\n");
    }
    else if (accuracy < 70 || confidence < 60)
    {
        printf("Rejected: performance too low\n");
    }
    else if (datasetSize < 5000)
    {
        printf("Rejected: dataset too small\n");
    }
    else if (role == 1)
    {
        printf("Denied: interns cannot deploy\n");
    }
    else if (role == 2 && modelScore < 80)
    {
        printf("Denied: engineer needs higher score\n");
    }
    else
    {
        printf("Approved for deployment\n");
    }

    /* Average of accuracy and confidence */

    average = (accuracy + confidence) / 2;

    printf("\nAverage of accuracy and confidence: %.2f\n", average);

    if (modelScore > average)
        printf("Model score is above the average.\n");
    else
        printf("Model score is not above the average.\n");

    /* sizeof variables */

    printf("\nSize of variables:\n");
    printf("Size of accuracy: %zu bytes\n", sizeof(accuracy));
    printf("Size of confidence: %zu bytes\n", sizeof(confidence));
    printf("Size of modelScore: %zu bytes\n", sizeof(modelScore));
    printf("Size of average: %zu bytes\n", sizeof(average));
    printf("Size of datasetSize: %zu bytes\n", sizeof(datasetSize));
    printf("Size of role: %zu bytes\n", sizeof(role));
    printf("Size of statusFlags: %zu bytes\n", sizeof(statusFlags));

    return 0;
}
