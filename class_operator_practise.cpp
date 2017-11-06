#include <iostream>
#include <vector>
#include <string>
using namespace std;


class foo{
  public :
  
  foo(){}
  int x;
  
  foo operator+(foo a);
  void operator+(foo * a);
};

foo foo::operator+(foo a){
    foo tmp;
    tmp.x = x + a.x;
    return tmp;
}

void foo::operator+(foo * a){
    //foo tmp;
    //tmp.x = x + a.x;
    this->x = this->x+a->x;
    return;
}



int main(){
    
    foo m; m.x =10;
    foo n; n.x= 11;
    foo k = m+n;
    cout << k.x <<endl;
    
    foo * j = new foo;
    j->x = 12;
    foo *g = new foo;
    g->x = 14;
    
    j->operator+(g);
    cout << j->x << endl;
    
    
    cout<<"life is lonly";
    return 0;
}
