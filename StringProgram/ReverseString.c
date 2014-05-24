/***********************************************************************
 Progrom to Reverse String without Using Library Function.
 ----------------------------------------------------------------------
 Input: Pavi Kumbhar
 Output: rahbmuK ivaP
----------------------------------------------------------------------
Author: Pavi Kumbhar B.C.S MCA[Sci]

Catch Me at :www.facebook.com/pavi.Kumbhar

************************************************************************/

#include<stdio.h>
#include<conio.h>

int xstrlen(char *);
void xstrrev(char *,int);

void main()
{
  char str[100];
  int l=0;
  printf("\n Enter the String: ");
  gets(str);
   l=xstrlen(str);
   xstrrev(str,l);
   printf("\n Reverse String : %s",str);
   getch();

}

int xstrlen(char *s)
  {
	int c=0;
	while(*s)
	   {
		c++;
		s++;
	   }
 return c ;
  }



void xstrrev(char *s,int l)
{   int i;
	char *t,temp;
	t=s+l-1;
	for(i=1;i<=l/2;i++)
	{
	   temp=*s;
	   *s=*t;
	   *t=temp;
	   s++;
	   t--;

	}

}
