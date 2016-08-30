#ifndef SHOW_WEATHER_H
#define SHOW_WEATHER_H
#include "observer.h"
#include<iostream>

class ShowWeather : public Observer
{
public:
ShowWeather();
void update(int , int , int );

private:
void printWeather();
int temp ; 
int hum ;
int pres ;


};

#endif
