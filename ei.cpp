#include <iostream>
using namespace std;

class functor{
  public:
    void operator()(int x){
      cout << x << "this is the number ei!" << endl;
    }
};

int main(){
  cout << "hello" << endl;
}
