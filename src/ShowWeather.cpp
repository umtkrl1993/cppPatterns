#include "../include/ShowWeather.h"
using namespace std ;
ShowWeather :: ShowWeather()
{
	temp = 0 ;
	hum = 0;
	pres = 0;
}

void ShowWeather::update(int temp , int hum , int pres)
{
	this->temp = temp ;
	this->hum = hum;
	this->pres = pres ;
	printWeather();
}

void ShowWeather::printWeather()
{
	cout << "Temperature is " << temp << '\n' ;
	cout << "Humidity is " << hum << '\n';
	cout << "Pressure is " << pres << '\n';
}


