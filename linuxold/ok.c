#include <stdio.h>

int main(int argc, char const *argv[])
{
	int tab[3]={0,1,2};


	printf("%p \n",tab+2);
	printf("%d \n",*(tab+2));
	return 0;
}