// Created by Nirina GALLOT on 23/01/2021.
//joined by Michael TALLA on 23/01/2021.
// Malloc-Fantasy
#include <stdio.h>
#include <mysql.h>
int main(int argc, char** argv){
MYSQL *connexion = mysql_init(NULL);
    printf(connexion == NULL ? 'failed...' : 'success');
}
