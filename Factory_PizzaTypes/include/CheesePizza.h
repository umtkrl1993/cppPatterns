#ifndef CHEESE_PIZZA_H
#define CHEESE_PIZZA_H
#include"Pizza.h"
class CheesePizza:public Pizza{
public:
    virtual void bake();
    virtual void prepare();
    virtual void cut();



};

#endif
