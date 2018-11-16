#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <mysql/mysql.h>


int main()
{

 MYSQL m;
mysql_init(&m);
mysql_options(&m,MYSQL_READ_DEFAULT_GROUP,"option");
//mysql_real_connect(&m,"sql11.freemysqlhosting.net","sql11190053","g5jqRY8gKm","sql11190053",0,NULL,0)
if(mysql_real_connect(&m,"localhost","root","","pfe",0,NULL,0))
{
  mysql_close(&m);

}
else
{
 printf("erreur\n");
}



return 0;
}


