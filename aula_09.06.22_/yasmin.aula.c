#include <stdio.h>


int main()
{
	 char entrada;
	 scanf ("%c", &entrada);
	 switch (entrada)
	 {
	     case 'a':
	     case 'e':
	     case 'i':
	     case 'o':
	     case 'u':	     
		   printf("voce digitou uma vogal\n");
		   break;
	     default:
		   printf("voce digitou uma consoant\n");
	   }
}
