#include <iostream>
#include <boost/progress.hpp>


using namespace boost;
using namespace std;



int fib(int n)
{
    int a = 1, b = 1;
    for (int i = 3; i <= n; i++) {
        char c = a + b;
        a = b;
        b = c;
    }
    return b;
}


int main(int argc, const char * argv[]) {

	progress_timer t;    ////for time

	int x ;
	cout << "Enter an index to find fibonacci number: ";
	cin >> x ;
    	cout <<"\nfib number = "<< fib(x) << endl;

	return 0;
}
