#include "WeatherData.h"

WeatherData::WeatherData()
{
	temp = 0 ;
	hum = 0 ;
	pres = 0;
}

WeatherData::WeatherData(int temp , int hum , int pres)
{
	this->temp = temp ;
	this->hum = hum ;
	this->pres = pres ;
}

void WeatherData::registerObserver(Observer * observerObject )
{
	Observers.push_back(observerObject);
}

void WeatherData::removeObserver(Observer * observerObject)
{
	int index = 0 ;
	vector<Observer*>::iterator listIt ;
	for ( listIt = Observers.begin() ; listIt != Observers.end(); listIt++)
	{
		if( *listIt == observerObject )
		{	
		 break ;   				
		}
		index++;
	}
	Observers.erase(Observers.begin() + index ) ;
}

void WeatherData::notify()
{
	vector<Observer*>::iterator listIt ;

	for (listIt = Observers.begin() ; listIt != Observers.end() ; listIt++)
	{
		(*listIt)->update(temp,hum,pres);	
	}


}

void WeatherData::measurementChanged(int temp , int hum , int pres )
{
	this->temp = temp ;
	this->hum = hum ;
	this->pres = pres;
	notify();
}

int WeatherData::getTemperature()
{
	return temp ;
}

int WeatherData::getHumidity()
{
	return hum ;
}

int WeatherData::getPressure()
{
	return pres ;
}
