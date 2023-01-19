#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>
class Display
{
  public:
    Display(int width, int height, const std::string& title);
    virtual ~Display(); // overridden by derived class
  protected:
  private:
    Display(const Display& other){}
    Display& operator=(const Display& other){}
};

#endif // DISPLAY_H
