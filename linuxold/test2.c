#include <stdio.h>
#include <string.h> 


int toAscii(char c)
{  int i=(int)c;
	return i;
}


void Bin(int* T,int n) {
	int i=7; while(n!=0)
	{
         T[i]=n%2;
         n=n/2;
         i--;

	}

while(i>0)
{
	T[i]=0;i--;
}
}

void Crypter(char* txt)
{


   int v=1;
   int i=0,j;
   int T[8]={0};

     txt[(strlen(txt)-1)]='\0';

   while(txt[i]!='\0')
   {  v=toAscii(txt[i]);
   	  Bin(T,v);
  for ( j = 0; j < 8; ++j)
  {
  	printf("%d ",T[j]);
  }
   printf("   ");fflush(stdout);
   i++;
     
   }
	
}	

int main()
{
	

  char c[200];
  printf("donner la phrase/mot que vous vouler crypter  : \n");
  fgets(c,200,stdin);

Crypter(c);
printf("fin\n");





  return 0;
}
