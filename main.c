#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void)
{
	FILE * fp ;
	char c;
	char str[30];
	
	fp = fopen("sample.txt","r");
	
		
 	while(fgets(str,30,fp) != NULL)
 	{	//문자변수 = fgetc(파일포인터) 
 		printf("%s",str);
	 	
	}	
	
	fclose(fp);
	
	return 0;


}
