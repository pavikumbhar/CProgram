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

 void main()
 { 
  
  int i,len=0;
  char s[100];
  char *t;
  printf("\n Enter the String: ");
  gets(s);
  for(i=0;s[i]!='\0';i++)
	 {
        len++;
     }
   
  t= s+len;
  while(t>=s)
  {
  printf("%c",*t);
  t--;

  }
getch();
 }
