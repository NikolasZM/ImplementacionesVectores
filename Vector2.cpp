#include <iostream>
using namespace std;

struct Vector {
	int* vect, vcount, vmax, vdelta;

	Vector() {
		vect = nullptr;
		vcount = 0;
		vmax = 0;
		vdelta = 10;
	}
};

void resize(int*& vect, int& vmax) {
	const int delta = 10;

	int* tmp, i;
	tmp = new int[vmax + delta];
	for (i = 0; i < vmax; i++) {
		tmp[i] = vect[i];
	}
	delete[] vect;
	vect = tmp;

	vmax += delta;
}

void insert(int*& vect, int& vcount, int& vmax, int x) {
	if (vcount == vmax) {
		resize(vect, vmax);
	}
	vect[vcount++] = x;
}

int main() {

	Vector* v1 = new Vector;
	insert(v1->vect, v1->vcount, v1->vmax, 23);
	insert(v1->vect, v1->vcount, v1->vmax, 24);
	insert(v1->vect, v1->vcount, v1->vmax, 25);

}