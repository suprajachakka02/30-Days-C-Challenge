INPUT OF THE PROGRAM 

<img width="681" height="945" alt="WhatsApp Image 2026-10-17 at 11 19 44 PM" src="https://github.com/user-attachments/assets/03893d57-2954-4ec0-8b96-40fa6cdc9708" />

<img width="656" height="972" alt="WhatsApp Image 2026-10-17 at 11 19 44 PM" src="https://github.com/user-attachments/assets/9e667e82-6664-4537-ab6e-22abf40b96c5" />

code of the challenge 5

#include<stdio.h>
#include<math.h>

int main()
{
    int choice;
    float a, b, c, x, r1, r2, discriminant;
    
    do
    {
        printf("\n--- Equation Solver ---\n");
        printf("1. Linear Equation\n");
        printf("2. Factorial\n");
        printf("3. Quadratic Equation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1: {
                printf("Enter a and b: ");
                scanf("%f %f", &a, &b);
                if (a == 0)
                {
                    if (b == 0)
                        printf("Infinitely many solutions\n");
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
            
            case 2: {
                int n, i, fact = 1;
                printf("Enter a number (0 to 12): ");
                scanf("%d", &n);
                if (n < 0 || n > 12)
                {
                    printf("Invalid input!\n");
                }
                else
                {
                    for(i = 1; i <= n; i++) {
                        fact *= i;
                    }
                    printf("Factorial of %d = %d\n", n, fact);
                }
                break;
            }
            
            case 3: {
                printf("Enter coefficients a, b and c: ");
                scanf("%f %f %f", &a, &b, &c);
                if (a == 0) {
                    printf("Invalid Quadratic Equation (a cannot be 0).\n");
                } else {
                    discriminant = b * b - 4 * a * c;
                    if (discriminant > 0) {
                        r1 = (-b + sqrt(discriminant)) / (2 * a);
                        r2 = (-b - sqrt(discriminant)) / (2 * a);
                        printf("Roots are real and different.\n");
                        printf("Root 1 = %.2f\n", r1);
                        printf("Root 2 = %.2f\n", r2);
                    } else if (discriminant == 0) {
                        r1 = r2 = -b / (2 * a);
                        printf("Roots are real and equal.\n");
                        printf("Root 1 = Root 2 = %.2f\n", r1);
                    } else {
                        float realPart = -b / (2 * a);
                        float imagPart = sqrt(-discriminant) / (2 * a);
                        printf("Roots are complex and different.\n");
                        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
                        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
                    }
                }
                break;
            }
            
            case 4:
                printf("Exiting the program...\n");
                break;
                
            default:
                printf("Invalid choice! Please select between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}
