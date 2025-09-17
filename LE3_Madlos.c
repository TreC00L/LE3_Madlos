#include <stdio.h>

int main(void)
{
    char name[100];
    char section[50];
    int n1, n2;
    float sum, diff, prod, quot;

    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);

    {
        int i = 0;
        while (name[i] != '\0')
        {
            if (name[i] == '\n')
            {
                name[i] = '\0';
                break;
            }
            i++;
        }
    }

    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);

    {
        int i = 0;
        while (section[i] != '\0')
        {
            if (section[i] == '\n')
            {
                section[i] = '\0';
                break;
            }
            i++;
        }
    }

    printf("\nEnter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    sum = n1 + n2;
    diff = n1 - n2;
    prod = n1 * n2;
    if (n2 != 0)
    {
        quot = (float)n1 / n2;
    }

    printf("\nStudent Calculator\n");
    printf("Student name: %s\n", name);
    printf("Section: %s\n", section);
    printf("Results:\n");
    printf("%d + %d = %.2f\n", n1, n2, sum);
    printf("%d - %d = %.2f\n", n1, n2, diff);
    printf("%d * %d = %.2f\n", n1, n2, prod);
    if (n2 != 0)
    {
        printf("%d / %d = %.2f\n", n1, n2, quot);
    }
    else
    {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
