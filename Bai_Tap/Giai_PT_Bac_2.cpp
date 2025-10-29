#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){
    cout << "============GIAI PT BAC 2============" << endl;
    float a, b, c, denta, x, x1, x2;
    cout << "Nhap 3 so a, b, c" << endl;
    cin >> a >> b>> c;
    if (a == 0) {
    	cout << "PT Vo nghiem";
    	return 0;
	}
    //cout << "Bạn vừa nhập:" << endl;
    //cout << a << endl << b << endl << c << endl;
    denta = b*b - 4*a*c;
    
    if (denta == 0) {
    	cout << "PT co nghiem kep" << endl;
    	x = -b/(2*a);
    	cout << "X = " << x;
	} else if (denta > 0) {
		cout << "PT co 2 nghiem phan biet:" << endl;
		x1 = (-b + sqrt(denta))/(2*a);
		x2 = (-b - sqrt(denta))/(2*a);
		cout << "x1 = " << x1 << " va " << "x2 = " << x2;
	} else {
		cout << "PT Vo nghiem";
	}
	
    return 0;
}
