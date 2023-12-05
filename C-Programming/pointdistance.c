#include <stdio.h>
# include<math.h>

float distance (float x1,float y1, float x2, float y2){
    return sqrt(pow(x1-x2 ,2)+ (y1-y2 ,2));
}

float triangleArea(float x1, float x2, float x3 , float y1, float y2, float y3){
    float side1 = distance(x1,y1,x2,y2);
    float side2 = distance(x2,y2,x3,y3);
    float side3 = distance(x3,y3,x1,y1);

    float s = (side1+side2+side3)/2;
    return  sqrt(s*(s-side1)*(s-side2)*(s-side3));
}
int pointinsideTriangle(float x, float y,float x1, float x2, float x3 , float y1, float y2, float y3 ){
        float totalarea = triangleArea(x1,y1,x2,y2,x3,y3);
        float area1 = triangleArea(x,y,x2,y2,x3,y3);
        float area2= triangleArea(x1,y1,x,y,x3,y3);
        float area3  = triangleArea(x1,y1,x2,y2,x,y);
        float epsilon = 0.0001;
        return fabs(totalarea-(area1+area2+area3))<epsilon ;
       
     }

int main(){
    float x1,y1,x2,y2,x3,y3,x,y;
    printf("Enter the X,Y  point\n");
    scanf("%f%f",&x,&y);
    printf("enter the triangle  X1,Y1 point\n");
    scanf("%f%f",&x1,&y1);
    printf("ENTER THE X2,Y2 POINT:\n");
     scanf("%f%f",&x2,&y2);
      printf("ENTER THE X3,Y3 POINT:\n");
     scanf("%f%f",&x3,&y3 );
    

    if(pointinsideTriangle( x,y,x1,y1,x2,y2,x3,y3) ){
        printf("The point (%.2f,%.2f) lies inside the triangle", x, y);
    }else{
        printf("The point (%.2f,%.2f) lies  not inside the triangle", x, y);
    }
    return 0;
}

