#include"SimplePizzaFactory.h"
#include"CheesePizza.h"
#include"ClamPizza.h"
#include<exception>
Pizza* SimplePizzaFactory::createPizza(std::string type) throw(exception){
	Pizza* pizza = NULL;

	if(type.compare("cheesepizza")){
		pizza = new CheesePizza(); 
	}
	else if(type.compare("clampizza")){
		pizza = new ClamPizza();
	}
	else{
		throw exception("invalid pizza type");
	}

	return pizza;
}
