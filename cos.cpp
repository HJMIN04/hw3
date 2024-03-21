#include <iostream>
using namespace std;
void main() {
	float c, C, dt, t, num, anal;
	cout << "f(t) = Ccos(ct)" << endl;
	//differentiation
	cout << " c C ? = ";
	cin >> c >> C;
	cout << " t dt ? = ";
	cin >> t >> dt;
	anal = -C * c * sin(c * t);
	num = C * (cos(c * (t + dt)) - cos(c * t)) / dt;
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << abs((num - anal) / anal * 100) << "%\n";

	// integration 
	float a, b;
	int N;
	cout << " a b N =  ";
	cin >> a >> b >> N;
	anal = C * (sin(c * b) - sin(c * a)) / c;
	dt = (b - a) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += C * cos(c * (a + dt * i)) * dt;
	}
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << abs((num - anal) / anal * 100) << "%\n";
}
