#include <iostream>

using namespace std;

class Shape{
  public:
    int w,h;
    Shape();
    Shape(int ws, int hs);
    int area();
    void prt();

    int getX(){
      return x;
    }
    void setX(int x){
      this->x = x;
    }
    int getY(){
      return y;
    }
    void setY(int y){
      this->y = y;
    }
  protected:
    int x,y;
};

Shape::Shape() : x(0),y(0),w(0),h(0){}
Shape::Shape(int ws, int hs) : x(0),y(0),w(ws),h(hs){}
int Shape::area(){
  return w*h;
}
void Shape::prt(){
  cout << "S:(" << x << "," << y << ") " << w << "x" << h << endl;
}

class Rettangolo : public Shape {
  public:
    Rettangolo() : Shape(0,0) {}
    Rettangolo(int w, int h) : Shape(w,h) {}
    void prt();
};

void Rettangolo::prt(){
  cout << "R:(" << x << "," << y << ") " << w << "x" << h << endl;
}

class Quadrato : public Rettangolo {
  public:
    Quadrato() : Rettangolo(0,0) {}
    Quadrato(int l) : Rettangolo(l,l) {}
    void prt();
};
void Quadrato::prt(){
  cout << "Q:(" << x << "," << y << ") " << w << "x" << h << endl;
}

class Cubo : public Quadrato {
  public:
    Cubo() : Quadrato(0){};
    Cubo(int l) : Quadrato(l){};
    int volume();
    void prt();
};

void Cubo::prt(){
  cout << "C:(" << x << "," << y << ") " << w << "x" << w << "x" << w <<  endl;
}

int Cubo::volume(){
  return w*w*w;
}

int main()
{
  cout << "OOP - gerarchie" << endl;

  Shape s1;
  s1.prt();
  Shape s2(10,20);
  s2.prt();
  cout << "s area: " << s2.area() << endl;

  Rettangolo r;
  r.prt();
  Rettangolo r2(23,34);
  r2.prt();
  cout << "r area: " << r2.area() << endl;

  Quadrato q(20);
  q.prt();

  Cubo c(14);
  c.prt();
  cout << "vol: " << c.volume() << endl;

  c.setX(10);
  c.setY(12);
  c.prt();

  return 0;
}
