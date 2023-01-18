#include "display.h"

Display::Display()
{
  //ctor
}

Display::~Display()
{
  //dtor
}

Display::Display(const Display& other)
{
  //copy ctor
}

Displays& Display::operator=(const Display& rhs)
{
  if (this == &rhs) return *this; // handle self assigment
  //assignment operator
  return *this;
}
