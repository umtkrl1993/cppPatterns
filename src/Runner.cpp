#include"../include/WeatherData.h"
#include"../include/ShowWeather.h"
#include<pthread.h>
#include<unistd.h>
#include<cstdlib>
#include<ctime>
#include<stdio.h>
void* getWeatherData(void *ptr)
{
   srand(time(0));
   WeatherData* weather = (WeatherData*)ptr ;
   int temp = 0 ;
   int hum = 0 ;
   int pres = 0 ;
   while(1)
   {
	temp = 1 + (rand() % 20);
	hum = 1 + (rand() % 20);
	pres = 1 + (rand() % 20);
	weather->measurementChanged(temp , hum , pres );		
	sleep(5);
   }

}

int main()
{
	WeatherData * weather = new WeatherData();
	ShowWeather *display = new ShowWeather();
	weather->registerObserver(display);
	pthread_t thread ; 
	int rc ;
	rc = pthread_create(&thread , NULL ,getWeatherData, (void*)weather); 	
	pthread_join(thread , NULL);
	return 0 ;
}
