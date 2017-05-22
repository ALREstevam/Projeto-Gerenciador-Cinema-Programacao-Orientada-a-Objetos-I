#include <iostream>
#include <stdio.h>
#include "sqlite3/sqlite3.h"

using namespace std;

int main()
{

   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;

   rc = sqlite3_open("db.db", &db);

   if(rc){
      cout << "Can't open database: %s\n" << sqlite3_errmsg(db) << endl;
      return(0);
   }else{
      cout << "Opened database successfully\n" << endl;
   }
   sqlite3_close(db);

    return 0;
}
