#include <stdio.h>

int main(void)
{
    char name[100];
    char section[50];
    double num1, num2;
    double sum, diff, prod, quot;

    printf("Enter Complete Name: ");

    if (fgets(name, sizeof(name), stdin) == NULL)
    {
        fprintf(stderr, "Error reading name.\n");
        return 1;
    }

    {
        size_t len = 0;
        while (name[len] != '\0')
            len++;
        if (len > 0 && name[len - 1] == '\n')
        {
            name[len - 1] = '\0';
        }
    }

    printf("Enter Section: ");
    if (fgets(section, sizeof(section), stdin) == NULL)
    {
        fprintf(stderr, "Error reading section.\n");
        return 1;
    }

    {
        size_t len = 0;
        while (section[len] != '\0')
            len++;
        if (len > 0 && section[len - 1] == '\n')
        {
            section[len - 1] = '\0';
        }
    }

    printf("\nEnter first number: ");
    if (scanf("%lf", &num1) != 1)
    {
        fprintf(stderr, "Invalid input for first number.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1)
    {
        fprintf(stderr, "Invalid input for second number.\n");
        return 1;
    }

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    if (num2 != 0)
    {
        quot = num1 / num2;
    }

    printf("\nStudent Calculator\n");
    printf("Student name: %s\n", name);
    printf("Section: %s\n", section);
    printf("Results:\n");
    printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
    printf("%.2f - %.2f = %.2f\n", num1, num2, diff);
    printf("%.2f * %.2f = %.2f\n", num1, num2, prod);
    if (num2 != 0)
    {
        printf("%.2f / %.2f = %.2f\n", num1, num2, quot);
    }
    else
    {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}