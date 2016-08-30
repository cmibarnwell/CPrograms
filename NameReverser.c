#include <stdio.h>
#include  <string.h>
//Also do this by using only szName

int main(int argc, char *argv[])
{
  char szName[21]="Perry Scope";
    char szReversedName[21];
  int i;
   int j= strlen(szName)-1;
   for(i=0;i<strlen(szName);i++,j--)
  {
   szReversedName[j]=szName[i];
  }
   szReversedName[i]='\0';
   printf("The name is: %s",szReversedName);
   return 0;
  }
