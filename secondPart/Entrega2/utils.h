#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>
#define BUFLENGHT 256

typedef enum {IWANT, RECVD, ENTER, IAMIN, TIMUP, TOOLATE, CLOSD, FAILD, GAVUP} operation;

typedef struct{
    unsigned int nsecs;
    int nplaces;
    int nthreads;
    char fifoname[BUFLENGHT];
} server_args;

void initializeTime();

void toStringOperation(operation oper, char res[]);

void display(int i, int pid, long tid, int duration, int place, operation oper);