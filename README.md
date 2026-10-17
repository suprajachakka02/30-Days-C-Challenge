#include <stdio.h>
#include <math.h>
int main()
{
    int choice;
    float a, b, c, x, r1, r2;
    do
    {
        printf("\n--- Equation Solver+ ---\n");
        printf("1. Linear Equation\n");
        printf("2. Factorial\n");
        printf("3. Quadratic Equation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                printf("Enter a and b: ");
                scanf("%f %f", &a, &b);

                if (a == 0)
                {
                    if (b == 0)
                    {
                        printf("Infinitely many solutions\n");
                    }
                    else
                    {
                        printf("No solution\n");
                    }
                }
                else
                {
                    x = -b / a;
                    printf("x = %.2f\n", x);
                }
                break;
            }
            case 2:
            {
                int n, i, fact = 1;
                printf("Enter a number (0 to 12): ");
                scanf("%d", &n);
                if (n < 0 || n > 12)
                {
                    printf("Invalid input!\n");
                }
                else
                {
                    for (i = 1; i <= n; i++)
                    {
                        fact = fact * i;
                    }
                    printf("Factorial = %d\n", fact);
                }
                break;
            }
            case 3:
            {
                float a, b, c, d, r1, r2;
                printf("Enter a, b and c: ");
                scanf("%f %f %f", &a, &b, &c);
                if (a == 0)
                {
                    printf("Not a quadratic equation\n");
                }
                else
                {
                    d = b * b - 4 * a * c;
                    if (d > 0)
                    {
                        r1 = (-b + sqrt(d)) / (2 * a);
                        r2 = (-b - sqrt(d)) / (2 * a);
                        printf("Two distinct real roots\n");
                        printf("Root 1 = %.2f\n", r1);
                        printf("Root 2 = %.2f\n", r2);
                    }
                    else if (d == 0)
                    {
                        r1 = -b / (2 * a);
                        printf("Two equal real roots\n");
                        printf("Root = %.2f\n", r1);
                    }
                    else
                    {
                        printf("No real roots\n");
                    }
                }
                break;
            }
            case 4:
                printf("Thank you for using Equation Solver+!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);
    return 0;
}
