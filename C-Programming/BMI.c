/*
The Body Mas index(BMI) is define as ratio of the weight of aperson (in kill0grames) to square of the hight (in meters).

*/
#include<stdio.h>
#include<math.h>

int main (){
    float weight,hight,bmi;
    printf("Enter the weight in killograms: \n");
    scanf("%f",&weight);
    printf("Enter the hight in meter: \n");
    scanf("%f",&hight);
    bmi=(weight/(hight*hight));
    printf("The BMI is %.2f\n",bmi);
  
    
    
    
   if (bmi<15)
    printf("starvatiin\n");
    else if (bmi>15 && bmi<17.5)
    printf("Anorexic\n");
    else if (bmi>17.6 && bmi<18.5)
    printf("Underweight\n");
    else if (bmi>18.6 && bmi<24.9)
    printf("Ideal\n");
    else if (bmi>25 && bmi<25.9)
    printf("Overweight\n");
    else if (bmi>30 && bmi<30.9)
    printf("Obese\n");
   // }
 else if  (bmi>=40)
 printf("Morbidly Obese\n");
    return 0;
}
