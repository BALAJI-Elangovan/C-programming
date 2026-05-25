#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_mutex_t lock;
void *t1(void *argv)
{
   pthread_mutex_lock(&lock);
    printf("thread %d is created\n",*(int*)argv);
    pthread_mutex_unlock(&lock);
    pthread_exit(NULL);
}
int main()
{
    pthread_t thread[3];
    int arg[3] = {1,2,3};
    for(int i =0;i<3;i++)
    {
        if(pthread_create(&thread[i],NULL,t1,(void *)&arg[i])!=0)
        {
            printf("error in creation \n");
            return 1;
        }
    }
    for(int i =0;i<3;i++)
    {
        pthread_join(thread[i],NULL);
    }
    pthread_mutex_destroy(&lock);
    exit(0);
}