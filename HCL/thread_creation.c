#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
void* t1(void* vargp)
{
    sleep(1);
    printf("Thread-1 \n");
    return NULL;
}
void *t2(void *varbp)
{
    sleep(1);
    printf("hello\n");
    return NULL;
}
void *t3(void *varbp)
{
    sleep(1);
    printf("hi\n");
    return NULL;
}
int main()
{
    pthread_t thread_id;
    printf("Before Thread\n");
    pthread_create(&thread_id, NULL, t3, NULL);
    pthread_create(&thread_id, NULL, t2, NULL);
    pthread_create(&thread_id, NULL, t1, NULL);
    pthread_join(thread_id, NULL);
    printf("After Thread\n");
return 0;
}