#include"PizzaAPI.h"

Pizza* PizzaAPI::orderPizza(std::string type){
	
	Pizza *pizza = NULL;
	pizza = SimplePizzaFactory::createPizza(type);	
	return pizza;
}




