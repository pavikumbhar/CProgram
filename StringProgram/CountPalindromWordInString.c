/***********************************************************************
 Progrom to Count Number of Palindrom Word  Present in  String .
 ----------------------------------------------------------------------
 Input: madam asked For nitin
 Output: 2 ( eg. madam  and nitin)
----------------------------------------------------------------------
Author: Pavi Kumbhar B.C.S MCA[Sci]

Catch Me at :www.facebook.com/pavi.Kumbhar

************************************************************************/


#include<stdio.h>
#include<conio.h>

int xstrcmp(char *, char *);
int xstrlen(char *);

void main()
{
 char str[100],str2[100];
 char str3[100];
 char *a;
 int i,j,k=0,c,x,count=0;
 clrscr();
 printf("\n Enter the sting: ");
 gets(str);
 j=xstrlen(str);
 for(i=0;i<=j;i++)
   {
	  if(str[i]==' '||str[i]=='\0')
	  {

	   str2[k]='\0';
	   c=xstrlen(str2);
	   a=str2+c-1;
	   for(x=0;x<c;x++)
		{
		 str3[x]=*a;
		 a-- ;
		}

		str3[x]='\0';

	  if(xstrcmp(str2,str3)==0)
	   count++;
	   k=0;

	  }
	  else{

		  str2[k++]=str[i];

		 }


   }
   printf("\n No of Palindrom Word =%d",count);
getch();

}


// Function for Count Length of String 
int xstrlen(char *s)
{

  int c=0;
  while(*s)
  {
   s++;
   c++;

  }
 return c;

}

//Function for Compare Two String
int xstrcmp(char *s,char *t )
  {
	while(*s==*t)
	{
	 if(!(*s))
	 return 0;
	 s++;

	 t++;

	}
return(*s-*t);

  }

