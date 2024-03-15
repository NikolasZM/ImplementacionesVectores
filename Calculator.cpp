#include <iostream>
using namespace std;

float suma(float a, float b) {
	return a + b;
}

float resta(float a, float b) {
	return a - b;
}

float mult(float a, float b) {
	return a * b;
}

float division(float a, float b) {
	if (b == 0) return 0.0;
	return a / b;
}

typedef float (*chooseOperation)(float, float);

chooseOperation options[4] = { &::suma, &::resta, &::mult, &::division };

float a, b, c;
int opt;



int main() {
	cin >> a >> b;
	cin >> opt;

	c = (*options[opt])(a, b);
	cout << c;
}
