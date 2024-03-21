#include <iostream>
using namespace std;
void main() {
	float c, C, dt, t, num, anal;
	cout << "f(t) = clog(Ct)" << endl;
	cout << "c, C = ? " << endl;
	cin >> c >> C;
	cout << "t, dt = ? " << endl;
	cin >> t >> dt;
	//differentiation
	anal = c / t;
	num = c * (log(C * (t + dt)) - log(C * t)) / dt;
	cout << "num = " << num << " anal = " << anal << endl;
	cout << "error = " << abs((num - anal) / anal * 100) << "%\n";
	//integration
	float a, b;
	int N;
	cout << "a, b, N = ? " << endl;
	cin >> a >> b >> N;
	anal = c * b * (log(C * b) - 1) - c * a * (log(C * a) - 1);
	dt = (b - a) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += c * log(C * (a + dt * i)) * dt;
	}
	cout << "num = " << num << " anal = " << anal << endl;
	cout << "error = " << abs((num - anal) / anal * 100) << "%\n";
}
