#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("INPUT.txt","w+");
	char c;
	while(1)
	{
		if(c!='\n')
		{
			scanf("%c", &c);
			fputc(c, fp);
			
		}
		else
		{
			break;
		}
	}
	fseek(fp,0,0);
	while((c=getc(fp))!=-1)
	{
		printf("%c",c);
	}
	fclose(fp);
	return 0;
}
