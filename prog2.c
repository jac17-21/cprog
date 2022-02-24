//Program to compute the roots of a quadratic equation
#include<stdio.h>
#include<math.h>

int main()
{
              //Variable declaration
               float a, b, c, d, r1, r2, rpart, ipart;

              //Accept the input
              printf("Enter the coefficients :");
              scanf("%f%f%f", &a, &b, &c);

              if (a == 0)
              {
              printf("Invalid input.....\n");
              return 1;
              }

              //Compute discriminant
              d = (b*b)-(4.0*a*c);
             
              if (d == 0)
              {
                   printf("The roots are real and equal\n");
                   r1 = r2 = -b/ (2.0*a);
                   printf("The roots are :\n");
                   printf("r1 = r2 = %f\n", r1);
               }
              else if(d > 0)
              {
                   printf("The roots are real and distinct\n");     
                   r1 = (-b + sqrt(d)) / (2*a);
                   r2 = (-b - sqrt(d)) / (2*a);
                   printf("r1=%f and r2=%f", r1, r2);
              }
              else
              {
                   printf("The roots are real and imaginary\n"); 
                   rpart=-b/(2*a);
                   ipart=sqrt(-d)/(2*a);
                   printf("r1=%f +i %f", rpart,ipart);
                   printf("r2=%f -i %f", rpart,ipart);
              }
              return 0;
}
        
