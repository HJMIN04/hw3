#include <iostream>
using namespace std;
void main() {
	float c, C, dt, t, num, anal;
	cout << "f(t) = sin(ct+C)" << endl;
	// differentiation
	cout << " c C  ? = ";
	cin >> c >> C;
	cout << " t dt ? = ";
	cin >> t >> dt;
	anal = c * cos(c * t + C);
	num = (sin(c * (t + dt) + C) - sin(c * t + C)) / dt;
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << abs((num - anal) / anal * 100) << "%\n";

	// integration
	float a, b;
	int N;
	cout << " a b N = ";
	cin >> a >> b >> N;
	anal = -(cos(c * b + C) - cos(c * a + C)) / c;
	dt = (b - a) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += sin(c * (a + dt * i) + C) * dt;
	}
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << abs((num - anal) / anal * 100) << "%\n";
}
