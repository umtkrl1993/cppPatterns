#ifndef CLAM_PIZZA_H
#define CLAM_PIZZA_H
#include"Pizza.h"

class ClamPizza : public Pizza {
public:
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    

};



#endif
