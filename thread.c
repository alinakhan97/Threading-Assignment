#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int n[1000];

void *sum(void* argc)
{

	int sum = 0;
	int end_value = (int)argc;
	int start_value = end_value - 100;
	int i;
  
	for(i=start_value;i<end_value;i++)
	{
		sum += n[i];
	}
  
	return(void*)sum;
  
}

int main()
{

	int i;
  
	for(i = 0;i<1000; i++)
	{
		n[i] = i;
	}
  
pthread_t thread1,thread2,thread3,thread4,thread5,thread6,thread7,thread8,thread9,thread10;

	pthread_create(&thread1,NULL,sum,(void*)100);

  pthread_create(&thread2,NULL,sum,(void*)200);

	pthread_create(&thread3,NULL,sum,(void*)300);

	pthread_create(&thread4,NULL,sum,(void*)400);

	pthread_create(&thread5,NULL,sum,(void*)500);

	pthread_create(&thread6,NULL,sum,(void*)600);

	pthread_create(&thread7,NULL,sum,(void*)700);

	pthread_create(&thread8,NULL,sum,(void*)800);

	pthread_create(&thread9,NULL,sum,(void*)900);

	pthread_create(&thread10,NULL,sum,(void*)1000);

	void *sum1,*sum2,*sum3,*sum4,*sum5,*sum6,*sum7,*sum8,*sum9,*sum10;

	pthread_join(thread1,&sum1);

	pthread_join(thread2,&sum2);

	pthread_join(thread3,&sum3);

	pthread_join(thread4,&sum4);

	pthread_join(thread5,&sum5);

	pthread_join(thread6,&sum6);

	pthread_join(thread7,&sum7);

	pthread_join(thread8,&sum8);

	pthread_join(thread9,&sum9);

	pthread_join(thread10,&sum10);

	int total = 0;

	total = (int)sum1 + (int)sum2 + (int)sum3 + (int)sum4 + (int)sum5 + (int)sum6 + (int)sum7 + (int)sum8 + (int)sum9 + (int)sum10;

	printf("%d",sum);
  
	return 0;
  
}


