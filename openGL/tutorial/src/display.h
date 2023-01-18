#ifndef DISPLAY_H
#define DISPLAY_H

class Display
{
  public:
    Display();
    virtual ~Display(); // overridden by derived class
    Display(const Display& other);
    Display& operator=(const Display& other);
  protected:
  private:
};

#endif // DISPLAY_H
