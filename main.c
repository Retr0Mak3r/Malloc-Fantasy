// Created by Nirina Gallot on 23/01/2021.
//joined by Michael TALLA on 23/01/2021
// Malloc-Fantasy
#include <_stdio.h>
#include <mysql.h>





int main(int argc, char** argv){
MYSQL *connexion = mysql_init(NULL);
    if(connexion== NULL){
        printf('failed');
    }   else{
        printf('success');
    }
}
