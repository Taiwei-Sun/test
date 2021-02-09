// template specialization
#include <iostream>
using namespace std;

#define template_specialization

// class template:
template <class T>
class mycontainer {
    T element;
  public:
    mycontainer (T arg) {element=arg;}
    T increase () {return ++element;}
};

#ifdef template_specialization
// class template specialization:
template <>
class mycontainer <char> {
    char element;
  public:
    mycontainer (char arg) {element=arg;}
    char uppercase ()
    {
      if ((element>='a')&&(element<='z'))
      element+='A'-'a';
      return element;
    }
};
#endif

int main () {
  mycontainer<int> myint (7);
  mycontainer<char> mychar ('j');
  cout << myint.increase() << endl;
#ifdef template_specialization
  cout << mychar.uppercase() << endl;
#else
  cout << mychar.increase() << endl;
#endif
  return 0;
}
