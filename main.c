#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void)
{
	FILE * fp ;
	char str[30];
	int i;
	
	fp = fopen("sample.txt","w");
	
		
	for (i=0; i<3; i++)
	{
		printf("input a word : ");
		scanf("%s", str);
		fprintf(fp,"%s\n",str);
	}

	
	fclose(fp);
	
	return 0;


}
