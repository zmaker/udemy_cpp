#ifndef RECT_H_INCLUDED
#define RECT_H_INCLUDED

class Rettangolo {
  public:
    int x,y;
    int w,h;

    Rettangolo();
    Rettangolo(int larg, int alt);
    ~Rettangolo();
    int getArea();

  private:
    int area;

};

#endif // RECT_H_INCLUDED
