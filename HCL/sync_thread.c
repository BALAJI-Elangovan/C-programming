#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
int counter=1;
pthread_mutex_t lock;
void *inc_counter(void *argv)
{
   pthread_mutex_lock(&lock);
   printf("counter : %d\n",counter);
   pthread_mutex_unlock(&lock);
   counter++;
   pthread_exit(NULL);
   return NULL;
}
int main()
{
    pthread_t t1,t2;
    int id1 = 1,id2 = 2;
    pthread_mutex_init(&lock, NULL);
    pthread_create(&t1,NULL,inc_counter,&id1);
    pthread_create(&t2,NULL,inc_counter,&id2);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_mutex_destroy(&lock);
    return 0;
}