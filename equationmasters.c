#include <stdio.h>
#include <math.h>
void displayMenu()
{
    printf("choose an option:\n");
    printf("1. solve linear equation\n");
    printf("2. solve qadratic qeuation\n");
    printf("3. solve system of linear equations\n");
    printf("4. exit\n");
    printf("enter your choice: ");
}
int main()
{
    int choice;
    do
    {
        display();
        if (scanf("%d", &choice))
        {
            printf("error invalid input\n");
            continue;
        }
        switch (choice) 
        {
            case 1: 
            {
                // solve linear equation
                float a, b;              
                printf("enter'a': ");
                if (scanf("%f", &a))
                {
                    printf("invalid input\n");
                    continue;
                }
                printf("enter 'b': ");        
                if (scanf("%f", &b) ) 
                {
                    printf("invalid input\n");
                    continue;
                }
                // solve linear equation
                if (a == 0) 
                {
                    if (b == 0)
                    {
                        printf("infinte solution \n");
                    } else
                    {
                        printf("no solution\n");
                    }
                } else 
                {
                    float x = -b / a;
                    printf("solution: x = %.2f\n", x);
                }
            }
            break;
            case 2: 
            {
                // solve quadratic equation
                float a, b, c;             
                printf("enter 'a': ");
                if (scanf("%f", &a) ) 
                {
                    printf("invalid input\n");
                    continue;
                }
                printf("enter 'b': ");
                if (scanf("%f", &b) ) 
                {
                    printf("invalid input\n");
                    continue;
                }
                printf("Enter 'c': ");
                
                if (scanf("%f", &c) ) 
                {
                    printf("invalid input\n");
                    continue;
                }
                if (a == 0) 
                {
                    printf("not quadratic equation\n");
                } else
                {
                    float s = (b * b - 4 * a * c);
                    if (s > 0) {
                        float root1 = (-b + sqrt(s)) / (2 * a);
                        float root2 = (-b - sqrt(s)) / (2 * a);
                        printf("two real and distinct sol: x1 = %.2f, x2 = %.2f\n", root1, root2);
                    } else if (s == 0) {
                        float root = -b / (2 * a);
                        printf("One real solution (double root): x = %.2f\n", root);
                    } else {
                        float realpart = -b / (2 * a);
                        float imaginarypart = sqrt(fabs(s)) / (2 * a);
                        printf("complex solutions: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n", realpart, imaginarypart, realpart, imaginarypart);
                    }
                }
            }
            break;
            case 3:
            {
                // solve system of linear equations
                float a1, b1, c1, a2, b2, c2;
             
                printf("enter 'a1': ");
                if (scanf("%f", &a1) ) 
                { 
                    printf("invalid input\n"); 
                    continue;
                }
                printf("enter 'b1': ");
                if (scanf("%f", &b1) ) 
                {    
                    printf("invalid input\n");
                    continue;
                }
                printf("enter 'c1': ");
                if (scanf("%f", &c1) )
                { 
                    printf("invalid input\n"); 
                    continue;
                }
                printf("enter 'a2': ");
                if (scanf("%f", &a2) ) 
                {   
                    printf("invalid input\n"); 
               continue;
                }
                printf("enter 'b2': ");
                if (scanf("%f", &b2) ) 
                { 
                    printf("invalid input\n");
                    continue;
                }
                printf("enter 'c2': ");
                if (scanf("%f", &c2) ) 
                {  
                    printf("invalid input\n");
                    continue;
                }
                float p = a1 * b2 - a2 * b1;
                if (p == 0) {
                    if ((c1 * b2 - c2 * b1) == 0)
                    {
                        printf("infinte solution\n");
                    } else {
                        printf("no solution\n");
                    }
                } else 
                {
                    float x = (c1 * b2 - c2 * b1) / p;
                    float y = (a1 * c2 - a2 * c1) / p;
                    printf("unique solution: x = %.2f, y = %.2f\n", x, y);
                }
            }
            break;
            case 4:
                printf("exiting the program. Goodbye!\n");
                break;
            default:
                printf("please enter a valid option.\n");
                break;
        }
    } while (choice != 4);
   return 0;
}
