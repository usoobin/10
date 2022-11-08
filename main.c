#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void)
{
	FILE * fp ;
	char c;
	int i;
	
	fp = fopen("sample.txt","r");
	
		
 	while( c != EOF)
 	{	//문자변수 = fgetc(파일포인터) 
 		c = fgetc(fp);
	 	putchar(c); 
	}	
	
	fclose(fp);
	
	return 0;


}
