#ifndef PIZZA_API_H
#define PIZZA_API_H
#include"SimplePizzaFactory.h"

class PizzaAPI{
public:
    static Pizza* orderPizza(std::string type);

};



#endif
