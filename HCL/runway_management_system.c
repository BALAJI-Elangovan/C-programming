#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
pthread_mutex_t runway;
int no_planes;
int flag=0;
void *rway(void *plane)
{
    int *plane_no = (int*)plane;
    if(*plane_no <= (no_planes)/2)
    {
        printf("plane %d is landing\n",*plane_no);
        pthread_mutex_lock(&runway);
        flag = 1;
        sleep(1);
        printf("plane %d is landed and runway is clear now\n",*plane_no);
        flag = 0;
        pthread_mutex_unlock(&runway);
    }
    else
    {
        printf("plane %d is ready to takeoff\n ",*plane_no);
        while(flag)
        {
            sleep(2);
        }
        pthread_mutex_lock(&runway);
        printf("plane %d is taking off\n",*plane_no);
        sleep(1);
        printf("plane %d is taken off and runway is clear now\n",*plane_no);
        pthread_mutex_unlock(&runway);

    }
    pthread_exit(NULL);
}
int main()
{
    printf("Enter the no. of planes: ");
    scanf("%d",&no_planes);
    printf("\n");
    pthread_t plane[no_planes];
    int plane_id[no_planes];
    pthread_mutex_init(&runway,NULL);
    int itr=0;
    for(itr = 0; itr < no_planes; itr++)
    {
        plane_id[itr] = itr + 1; 
        pthread_create(&plane[itr], NULL, rway, &plane_id[itr]);
        sleep(1);
    }
    for(itr = 0; itr < no_planes; itr++)
    {
        pthread_join(plane[itr], NULL);
    }
    pthread_mutex_destroy(&runway);
    exit(0);
}