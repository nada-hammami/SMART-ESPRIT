#include <stdio.h>
#include <stdlib.h>

int main()
{
 float note1,note2,moy,coeff1,coeff2;

printf("entrer la première note: \n");
scanf("%f",&note1);

printf("entre deuxième note:  \n");
scanf("%f",&note2);

printf("taper coeef ; \n");
scanf("%f",&coeff1);

printf("taper coeff2: \n");
scanf("%f",&coeff2);

moy=((note1*coeff1)+(note2*coeff2))/(coeff1+coeff2);
printf("voici%f",moy);





return 0;



}
