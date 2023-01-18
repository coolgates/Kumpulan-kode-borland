#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include "person.h"
main()
{
program("PERSON");
char tum,user[50],pass[15]="texas";
int i,a=0;
login:
cout<<"Masukkan Username : ";gets(user);
cout<<"Masukkan Password : ";
for (i = 0 ; i <= 5 ; i ++)
 { tum = getch();
   cout<<"X";
   if (tum == pass [i])
   {
   a = a + 1;
   }
 }
 if ((strcmp(user,"COOLGATES")==0) && a == 5)
  {
  clrscr();
   cout<<"HOLA "<<user<<"\nWELCOME MASTER "<<endl;
   }
   else
   {
   clrscr();
   cout<<"\nUdah Ga Faham Lagi Gw Sih Masbro "<<endl;
   a=0;
   goto login;
   }
   getch();
   }

