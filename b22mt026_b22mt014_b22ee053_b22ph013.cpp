#include <stdio.h>
#include <math.h>

void linearequation(float a,float b);
void quadraticequation(float a,float b,float c);
void linearsystem(float a1,float b1,float c1,float a2,float b2,float c2);

int main() {
    int num;
    
   
    printf("1. linear equation\n");
    printf("2. quadratic equation\n");
    printf("3. system of linear\n");
    printf("Enter num ");
    scanf("%d", &num);

    switch (num) {
        case 1: {
            float a,b;
           printf ("enter a and b");
            scanf("%f %f",&a,&b);
            linearequation(a,b);
            break;
        }
        case 2: {
            float a,b,c;
           printf ("enter a,b,c");
            scanf("%f %f %f",&a,&b,&c);
            
        quadraticequation(a,b,c);
            break;
        }
        case 3: {
            float a1,b1,c1,a2,b2,c2;
            printf ("enter a1,b1,c1");
            scanf("%f %f %f",&a1,&b1,&c1);
           printf ("enter a2,b2,c2");
            scanf("%f %f %f",&a2,&b2,&c2);
            linearsystem(a1,b1,c1,a2,b2,c2);
            break;
        }
        default:
            printf("invalid num\n");
            break;
    }

    return 0;
}

void linearequation(float a, float b) {
    if (a == 0) {
        printf("not linear equation\n");
    } else {
        float solution = -b / a;
        printf("solution x = %.2f\n", solution);
    }
}

void quadraticequation(float a,float b,float c) {
    float discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Solutions: x1 = %.2f, x2 = %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        float root = -b/(2*a);
        printf("Solution x = %.2f\n", root);
    } else {
        float realpart = -b / (2 * a);
        float imagpart = sqrt(-discriminant) / (2 * a);
        printf("Complex Solutions: %.2f + %.2fi, %.2f - %.2fi\n",realpart,imagpart,realpart,imagpart);
    }
}

void linearsystem(float a1,float b1,float c1,float a2,float b2,float c2) {
    float det= (a1*b2) - (a2*b1);

    if (det == 0) {
        printf("no unique solution\n");
    } else {
        float x = (c1*b2 - c2*b1) / det;
        float y = (a1*c2 - a2*c1) / det;
        printf("Solution x = %.2f, y = %.2f\n",x,y);
   }
}