/***********************************************************************
 Progrom to Copy String  without Using Library Function.
 ----------------------------------------------------------------------
 Input:  Enter the String A: Pavi Kumbhar

 Output: After Copy String B: Pavi Kumbhar
----------------------------------------------------------------------
Author: Pavi Kumbhar B.C.S MCA[Sci]

Catch Me at :www.facebook.com/pavi.kumbhar

************************************************************************/
#include<stdio.h>
#include<conio.h>

void xstrcopy(char *,char *);

void main()
{
 char a[100],b[100];
 
 clrscr();
 printf("\n Enter the String A: ");
 gets(a);
 xstrcopy(a,b);
 printf("\n After Copy String B: ");
 printf("%s",b);
 getch();

}

//Function for Copy String 
void xstrcopy(char *s,char *t)
{
  while(*s)
  {
   *t=*s;
   s++;
   t++;

  }
  *t='\0';

}
