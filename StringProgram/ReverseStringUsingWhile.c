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
#include<string.h>

void main()
{
 char str[100],temp;
 int i,j=0;

 printf("\n Enter the string :");
 gets(str);

 i=0;
 j=strlen(str)-1;

 while(i<j)
	 {
	 temp=str[i];
	 str[i]=str[j];
	 str[j]=temp;
	 i++;
	 j--;
	 }

 printf("\n Reverse string is :%s",str);
 getch();
}
