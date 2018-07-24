#include <iostream>
#include <boost/progress.hpp>


using namespace boost;
using namespace std;



int fib(int x) {
    if (x <= 1)
        return x;

    return fib(x-1)+fib(x-2);
}



int main(int argc, const char * argv[]) {


	int x ;
	cout << "Enter an index to find fibonacci number: ";
	cin >> x ;
    	cout <<"fib number = "<< fib(x) << endl;

	return 0;
}
