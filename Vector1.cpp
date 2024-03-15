#include <iostream>
using namespace std;

int* vect = NULL;
int vcount{ 0 },vmax{ 0 };

void Resize() {
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

void insert(int x) {
	if (vcount == vmax) {
		Resize();
	}
	vect[vcount++] = x;
}

int main() {

	cout << vect << "\n";
	insert(21);
	insert(22);
	insert(23);
	cout << *vect << "\n";
	cout << (*vect)+1 << "\n";
		
}	

