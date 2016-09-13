#ifndef WEATHER_DATA
#define WEATHER_DATA
#include<vector>
#include "Subject.h"

class WeatherData : public Subject
{
public :
WeatherData();
WeatherData(int , int , int ) ;
int getTemperature();
int getHumidity();
int getPressure();
void measurementChanged(int , int , int);
void registerObserver(Observer *) ;
void removeObserver(Observer *) ;
void notify();

private:
vector<Observer *> Observers ;
int temp ;
int hum;
int pres;

};


#endif
