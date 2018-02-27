#include <stdio.h> 
#include <stdlib.h>
int main() {
int *p,*q;
double *p1,*q1;
char *p2,*q2; 

puts("Donner un entier : ");
scanf("%d",&p);

q=p+1;
printf("p = %d \n",&p);
printf("q = %d \n",&q);
printf("l entier est = %d \n",sizeof(int));

p1=(double*)malloc (1*sizeof(*p1));
puts("Donner un reel : ");
scanf("%lf",&p);
q1=p1+1; 
printf("p1= %d \n",&p1);
printf("q1= %d \n",&q1); 
printf("double est = %d \n",sizeof(double)); 

p2=(char*)malloc (1*sizeof(*p2)); 
puts("Donner une chaine : "); 
scanf("%s",&p2); 
q2=p2+1; 
printf("p2= %d \n",&p2); 
printf("q2= %d \n",&q2); 
printf("la chaine est = %d \n",sizeof(char));
return 0; 
}
