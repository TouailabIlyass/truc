#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <stdlib.h>


int toAscii(char c)
{  return (int)c;

}

char toChar(int c)
{
	return (char)c;
}

void Bin(int* T,int n)
{
	int i=8;
	while(n!=0)
	{
         T[i--]=n%2;
         n=n/2;

	}

while(i>0)
{
	T[i--]=0;
}
}

void Crypter(char* txt)
{

srand(time(NULL));
	FILE* f=fopen(txt,"r");
	FILE*  fichierCrypter=fopen("crypter.txt","a");
   int c,c2;
   int v=1;
   int i=0;
	do
	{
         c=fgetc(f);  
         if(c==10)
         {
         	fprintf(fichierCrypter,"\n");
            fflush(fichierCrypter);v=1;
          continue;
          
         }
         
   
	if (v==1)
	{      
		fprintf(fichierCrypter,"%d",((rand()%900)+100));
		
	}
	else if (v==2)
	{   
		fprintf(fichierCrypter,"%d",((rand()%9000)+1000));
	}
	else if (v==3)
	{ 
		fprintf(fichierCrypter,"%d",((rand()%90000)+10000));
		v=0;
	}
	v++;
            c2=toAscii(c);
            if(c2<100) c2*=10;
          fprintf(fichierCrypter,"%d",c2);
          fflush(fichierCrypter);

	}while(c!=EOF);
	fprintf(fichierCrypter,"\n");
          fflush(fichierCrypter);
          fclose(f);fclose(fichierCrypter);
}


void Decrypter(char* txt)
{


	FILE* f=fopen(txt,"r");
	FILE*  fichierDeCrypter=fopen("decrypter.txt","a");
   char a,b,c;
   char c2;
   int v=2,k=0;
   int i=0;
   fseek(f,3,SEEK_SET);
	do
	{
         a=fgetc(f);b=fgetc(f);c=fgetc(f);
         printf("a=%c b=%c c=%c\n",a,b,c);
         if(a==10 || b==10 || c==10)
         {
         	fprintf(fichierDeCrypter,"\n");
            fflush(fichierDeCrypter);v=1;
          continue;
          
         }
         
   
	if (v==1)
	{      
		fseek(f,3,SEEK_CUR);
		
	}
	else if (v==2)
	{   
		fseek(f,4,SEEK_CUR);
	}
	else if (v==3)
	{ 
		fseek(f,5,SEEK_CUR);
		v=0;
	}
	v++;
           
           int a1=(int)a-48;
          int b1=(int)b-48;
          int c1=(int)c-48;
             printf("a=%d b=%d c=%d \n",a1,b1,c1);
             a1*=100;
             b1*=10;
             a1=a1+b1+c1;
          	printf("%d %c\n",a1,a1);
          	
          	fprintf(fichierDeCrypter,"%c",a1);
          
            fflush(fichierDeCrypter);

	}while(c!=EOF);
	fprintf(fichierDeCrypter,"\n");
          fflush(fichierDeCrypter);
          fclose(f);fclose(fichierDeCrypter);
}



int main()
{
	

  char c[20];
  printf("donner le fichier que vous vouler crypter  : \n");
  scanf("%s",c);

Crypter(c);
//Decrypter(c);
printf("fin\n");

  return 0;
}
