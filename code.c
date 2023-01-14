#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
 
void saisi (float a,float b , float c  );
int validite(float a,float b, float c );
float perimetre (float a,float b, float c);
float air(float a,float b, float c);
 
 
int main()
{   float a,b,c,x,y,z,perimetr,surface;
    bool resultat;
    
     
    do{
     printf("Saisir les entier a , b et c \n");

     saisi(a,b,c);

     resultat = validite(x,y,z);

     if(resultat==0){ printf("erreur \n");}

    }while(resultat==0);
    printf("Le perimetre est %f ", perimetre(a,b,c));
    printf("Le surface est %f ",   air(a,b,c));
    
    return 0;
}
void saisi (float a,float b , float c  )
{    printf("\n");
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f",&c);
    *x=a;
    *y=b;
    *z=c
    
   
}

int validite(float x ,float y,float z)
{ 
  if( x+y>z && x+z>y && y+z>x)
  {
   return 1;
  }else {
    return 0;
  }
}
  
float perimetre(float x,float y,float z)
{
    return x+y+z;
}

float air(float x,float y,float z)
{ float s=(x+y+z)/2;
  return sqrt(s*(s-x)*(s-y)*(s-z));
 
}

