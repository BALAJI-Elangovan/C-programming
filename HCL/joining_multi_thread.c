#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

void *thread_func(void *argv)
{
    int *num = (int*)argv;
    printf("thread ID: %d\n",*num);
    pthread_exit(NULL);
    
}
int main()
{
    pthread_t thread1,thread2;
    int id1=1,id2=2;
    pthread_create(&thread1,NULL,thread_func,&id1);
    pthread_create(&thread2,NULL,thread_func,&id2);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    exit(0);
}