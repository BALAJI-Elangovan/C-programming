#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct
{
    int num;
    char name[100];
} data;
void *routine(void *argv)
{
    data *d = (data*)argv;
    printf("the num is %d and the name is %s \n", d->num, d->name);
    pthread_exit(0);
}
int main()
{
    pthread_t thread_id;
    data tdata = {10,"bala"};
    pthread_create(&thread_id,NULL,routine,(void*)&tdata);
    pthread_join(thread_id,NULL);
    exit(0);
}