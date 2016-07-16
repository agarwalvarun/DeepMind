#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 	char ch,source[20],target[20];
FILE *fs,*ft;
 	clrscr();
printf("Enter name of file to copy\n");
 	gets(source);
 	fs=fopen(source,"r");
 	if(fs==NULL)
 	{
  		printf("Cannot open File\n");
  		exit(1);
 	}
 	printf("Enter name of target file\n");
 	gets(target);
 	ft=fopen(target,"w");
 	if(ft==NULL)
 	{
  		fclose(fs);
  		exit(1);
 	}
 	while((ch=fgetc(fs))!=EOF)
 	fputc(ch,ft);
 	printf("File copied successfully.\n")’

 	fclose(source);
 	fclose(target);
 	getch();
}
