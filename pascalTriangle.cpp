#include <iostream>
using namespace std;

int fact (int x);
int nCr (int n, int r);

int main()
{
	
	cout << "Enter a value: " << endl;
	int num;
	cin >> num;
	for (int n=0; n<=num; n++) {
	for (int r=0; r<=n; r++) {
	    int term = nCr(n, r);
	    cout << term << "\t";
	} cout << endl;
	}
	
	return 0;
}

int fact (int x) {
    if (x==0) return 1;
  //  if (x<0) return -1;
    int a=1;
    for (int i=1; i<=x; i++) {
        a = a*i;
    }
    return a;
}

int nCr (int n, int r) {
    int result=1;
    if (r==0 || r==n) return 1;
    int nfact = fact(n);
    int rfact = fact(r);
    int d = fact(n-r);
    result = nfact/(d*rfact);
    return result;
}
