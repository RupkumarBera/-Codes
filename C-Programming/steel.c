/* A CERTAIN GRADE OF STEEL IS GRADED ACCORDING TO THE FLLOWING CONDIONATION 
1.Hardness must be greater than 50
2.Carbon Content must be less than 0.7
3.Tensile strength must be greater than 5600*/
# include<stdio.h>
#include<math.h>
 
 float main ()
 {
    float hard,carbon,tensile;
    printf("Enter the  hardness :\n ");
    scanf("%f", &hard);
    printf("Enter the  carbon :\n ");
    scanf("%f", &carbon);
    printf("Enter the  tensile :\n ");
    scanf("%f", &tensile);
    
    
  
        if (hard>50 && carbon<0.7 && tensile>5600)
        printf("The steel Grade is 10 \n");
    
        else if (hard>50 && carbon<0.7 && tensile<5600)
        printf("The steel Grade is 9 \n");
        else if  (hard<50 && carbon<0.7 && tensile>5600)
        printf("The steel Grade is 8 \n");
        else if  ((hard>50 && carbon>0.7 )&& tensile>5600)
        printf("The steel Grade is 7 \n");
        else if  (hard>50 || carbon<0.7 || tensile>5600)
        printf("The steel Grade is 6 \n");
    
     else   
     printf ("The steel Grade is 5 \n");
     


return 0;
 }