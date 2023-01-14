#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
 
void saisi (float a,float b , float c , float *x,float *y,float *z );
bool validite(bool resultat );
float perimetre (float perimetr);
float air(float surface);
 
 
int main()
{   float a,b,c,x,y,z,perimetr,surface;
    bool resultat;
    
     
    do{
     printf("Saisir les entier a , b et c \n");

     saisi(a,b,c,&x,&y,&z);

     resultat = validite(a,b,c);

     if(resultat==false){ printf("erreur");}

    }while(resultat==false);
    printf("Le perimetre est %f ", perimetre(perimetr));
    printf("Le surface est %f ",   air(surface));
    
    return 0;
}
void saisi (float a,float b , float c , float *x,float *y,float *z )
{    printf("\n");
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f",&c);
    *x=a;
    *y=b;
    *z=c;
}

bool validite(float x ,float y,float z)
{ 
  if( x+y>z && x+z>y && y+z>x)
  {
   return true;
  }else {
    return false;
  }
}
  
float perimetre(float perimetr)
{
    float x,y,z;
    perimetr=x+y+z;
}
float air(float surface)
{ float x,y,z,s=(x+y+z)/2;
  surface=sqrt(s*(s-x)*(s-y)*(s-z));
 
}

