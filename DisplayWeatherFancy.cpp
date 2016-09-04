#include"DisplayWeatherFancy"
	
DisplayWeatherFancy::DisplayWeatherFancy()
{
	temp = 0;
	hum = 0;
	pres = 0;
}

void DisplayWeather::update(int temp, int hum, int pres)
{
	this->temp = temp;
	this->hum = hum;
	this->pres = pres;
	printWeather();
}

void DisplayWeather::printWeather()
{
	cout << "***** temp is ***** " << temp << "******"<<endl;
	cout << "***** humidity is ***** "<<hum << "*****"<<endl;
	cout << "*****pressure is ****** " <<pressure << "*****"<<endl;

}

