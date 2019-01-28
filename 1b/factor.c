#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int  nd, n, i, r=1;
	printf("tarea de ruben arturo sotelo navarro \n");
	printf("ingresa tu numero \n");
	scanf("%i",&nd);
	if(nd>0 || nd==0 )
	{
	
	for (i=1;i<=nd;i++)
	{
		
		r=r*i;
	}
		printf("\n resultado \n%i", r);
    }
    else 
    {
	printf("error");
    }
return 0;
}
