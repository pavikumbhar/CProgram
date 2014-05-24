/***********************************************************************
 Progrom to Display the SubString (Dislpay those word in Sub string which
 are Whole word in Origin String if Sub String Not contain Any Full Word in 
 origin String then disply Null) .
 ----------------------------------------------------------------------
* Case 1]
 Input:Enter String : Pavi Kumbhar
        Enter the upper limit of substring: 2

 
 Output: Substring is :pa
         Resultant String:null (bcoz 'pa' is not whole Word In original String)

*Case 2]
 
 Input:Enter String : Pavi Kumbhar
        Enter the upper limit of substring: 8

 
 Output: Substring is :pavi Kum
         Resultant String:pavi  (only 'pavi' bcoz 'Kum' whole Word In original String)

----------------------------------------------------------------------
Author: Pavi Kumbhar B.C.S MCA[Sci]

Catch Me at :www.facebook.com/pavi.kumbhar

************************************************************************/



#include<stdio.h>
#include<conio.h>


void main()
{
   char string[20];
   int n,i,j;
   printf("\n Enter string: ");
   gets(string);
   printf("\n you entered: %s",string);
   printf("\n\n Enter the upper limit of substring: ");
   scanf("%d",&n);
   printf("\n\n Substring is: ");
   for(i=0;i<n;i++)
   printf("%c",string[i]);



   printf("\n\n Resultant String: ");
   if(string[n]==' '||string[n-1]==' ')
   {
	  for(i=0;i<n;i++)
	  {
	   printf("%c",string[i]);
	  }

   }
   else
	  {
	   for(i=n;i>0;i--)
	   {
		if(string[i]==' ')
		   break;

	   }
	   if(i>0)
		{
	   for(j=0;j<i;j++)
	   printf("%c",string[j]);
		 }
		 else{
			 printf("null");
			 }

	  }


getch();

}
