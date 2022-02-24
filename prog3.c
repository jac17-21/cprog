//Electricity bill

#include<stdio.h>
int main() 
{
     //Declaration of variables 
     float units, charge, Total;
     printf("Enter the units : ");
     scanf("%f", &units);
     
     //Calculate the charges 
     if(units<0)
     {
	printf("Invalid input \n");
	return 1;
     } 
     if(units<=200)
     {
        charge=units*0.8+100;
     }
     else if(units<=300)
     {
              charge=200*0.8+(units-200)*0.9+100;
     }
     else
     { 
             charge=200*0.8+100*0.9+(units-300)*1+100;
     }
     //Calculate the total amount
          if(charge>400)
          {
             charge=charge+(0.15*charge);
          }
     //Display the E-bill
     printf("Electricity Bill\n");
     printf("No. of units is : %f\n", units);
     printf("The total bill is : %f\n",charge);
     return 0;
}   
  
