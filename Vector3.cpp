#include <iostream>
using namespace std;

class Cvector {
private:
	int* vect, vcount, vmax, vdelta;

	void resize();

public:
	Cvector(int delta = 10) {
		vect = nullptr;
		vcount = 0;
		vmax = 0;
		vdelta = delta;
	};

	void insert(int x);
};

void Cvector::insert(int x) {
	if (vcount == vmax) {
		resize();
	}
	vect[vcount++] = x;
}

void Cvector::resize() {
	int* tmp, i;
	tmp = new int[vmax + vdelta];
	for (i = 0; i < vmax; i++) {
		tmp[i] = vect[i];
	}
	delete[] vect;
	vect = tmp;

	vmax += vdelta;
}

int main() {
	Cvector v1;
	v1.insert(23);
	v1.insert(22);
	v1.insert(25);

}