#ifndef SUBJECT_H
#define SUBJECT_H
#include "observer.h"
using namespace std ;
class Subject
{
public:
virtual void notify() = 0 ;
virtual void registerObserver(Observer*) = 0 ;
virtual void removeObserver(Observer*) = 0 ;
};


#endif
