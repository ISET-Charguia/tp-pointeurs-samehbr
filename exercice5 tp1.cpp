#include <stdlib.h> 
#include <stdio.h>
int main() { 
  char *ch; 
  ch=(char*)malloc(30*sizeof(*ch));
  puts("Donner une chaine : ");
  scanf("%s",ch);
  if (ch!=NULL) { 
  char *p=ch; 
  while(*p!='\0') p++; 
	 printf("%d \n",p-ch);
	} else {
	  printf("echec"); 
	}
return 0; 
}
