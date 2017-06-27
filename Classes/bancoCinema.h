#ifndef BANCOCINEMA_H
#define BANCOCINEMA_H
//#include "sqlite3/sqlite3.h"
#include <sqlite3.h>

class bancoCinema
{
    public:
        bancoCinema();
        virtual ~bancoCinema();
        int execQuery(char query[]);
        int execSelectQuery(char query[],char**** queryResult,int*l,int*c);

    protected:

    private:
        sqlite3 *db;
        char *zErrMsg /*= 0*/;
        int rc;
        char *sql;
        const char* data/* = "Callback function called"*/;
        int open();


};

#endif // BANCOCINEMA_H
