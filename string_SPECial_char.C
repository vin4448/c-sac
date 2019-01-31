#include<stdio.h>
#include<conio.h>
void main()
{
    char ch[20];
    int i=0;
    clrscr();
    printf(" enter any string=");
    scanf("%s",ch);

    while(ch[i]!='\0')
    {

	if(ch[i]>=65 && ch[i]<123)
	{
	       printf("alphabet is %c",ch[i]);

	}
	else if(ch[i]>=48 && ch[i]<58)
	{
		printf("digit is %c",ch[i]);

	}
	else
	{
		printf("special char is %c",ch[i]);

	}
       i++;

}
       //	printf("%s",ch);
    getch();

}




