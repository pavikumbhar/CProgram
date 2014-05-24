
/***********************************************************************
 Progrom to Count No of Occurrence of Alphabet in String .
 ----------------------------------------------------------------------
 Input: Paviii Kkkumbharr
 Output:p=1
        a=2
    		v=1
		    i=3
        k=3
	    	u=1
	    	m=1
		    b=1
		    h=1
		    r=2
----------------------------------------------------------------------
Author: Pavi Kumbhar B.C.S MCA[Sci]

Catch Me at :www.facebook.com/pavi.kumbhar

************************************************************************/

#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,ch1,count=0;
 char a[100];
 char ch;
 clrscr();
 printf("\n Enter the String: ");
 gets(a);

  for(i=0;a[i]!='\0';i++)
  {
	ch=a[i];
	ch1=a[i]+32; //UpperCase Match
	if(a[i]!=' ')
	{
	 for(j=i;a[j]!='\0';j++)
	 {
	   if(ch==a[j]||ch1==a[j])
		 {
		 count++;
		 a[j]=' ';
		 }

	 }
		printf("\n%c= %d",ch,count);
		count=0;

	}


  }
  getch();
}
