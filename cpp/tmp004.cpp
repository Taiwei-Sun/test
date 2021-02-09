#include <iostream>
using namespace std;

#define USE_typename

#ifdef USE_typename
class type_class {
	int ii;
	public:
		typedef char cc;
		cc ccc;
};
#endif

#ifdef USE_typename
template <typename T>
class mycontainer {
    typedef typename T::cc tt;
    tt element;
  public:
    mycontainer (T arg) {element=arg.ccc;}
    mycontainer (tt arg) {element=arg;}
    tt increase () {return ++element;}
    tt get_typename(){return element;}
};
#else
template <class T>
class mycontainer {
    typedef class T::cc tt;//here error
    tt element;
  public:
    mycontainer (T arg) {element=arg.ccc;}
    mycontainer (tt arg) {element=arg;}
    tt increase () {return ++element;}
    tt get_typename(){return element;}
};
#endif

int main () {
#ifdef USE_typename
	//type_class tc;
	//tc.ccc='k';
	mycontainer<type_class> mytc ('k');
	cout << mytc.get_typename() << endl;
	cout << mytc.increase() << endl;
#else
	//type_class tc;
	//tc.ccc='k';
	mycontainer<type_class> mytc ('k');
	cout << mytc.get_typename() << endl;
	cout << mytc.increase() << endl;
#endif
  return 0;
}
