#include <iostream>
using namespace std;

template <typename Type> 
class Cvector {
private:
	Type* vect;
	int vcount, vmax, vdelta;

	void resize();
public:
	Cvector(int delta = 10) {
		vect = nullptr;
		vcount = 0;
		vmax = 0;
		vdelta = delta;
	};

	void insert(Type x);
};

template <typename Type>
void Cvector<Type>::insert(Type x) {
	if (vcount == vmax) {
		resize();
	}
	vect[vcount++] = x;
}

template <typename Type>
void Cvector<Type>::resize() {
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
	Cvector<int> v1;

	v1.insert(34);
	v1.insert(44);
	v1.insert(54);
}