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

	if(ch[i]>=65 && ch[i]<91)
	{
	       ch[i]=ch[i]+32;
	}
	else
	{
		ch[i]=ch[i]-32;
	}

       i++;

}
	printf("%s",ch);
    getch();
}




