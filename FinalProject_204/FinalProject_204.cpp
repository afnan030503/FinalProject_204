#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int b) {
		this->y = b;
	}
	int getY() {
		return y;
	}
	
	/*lengkapi disini*/
};
class lingkaran :public bidangDatar {
public:
	virtual void input() {
		int r;
		cout << "masukkan jari-jari = ";
		cin >> r;
		setX(r);
	}
	virtual float Luas(int a) {
		return 3.14 * a * a;
	}
	virtual float keliling(int a) {
		return 2 * 3.14 * a;
	}
};
class persegipanjang :public bidangDatar {
public:
	virtual void input() {
		int panjang;
		cout << "masukkan panjang = ";
		cin >> panjang;
		setY(panjang);
		int lebar;
		cout << "Masukkan lebar = ";
		cin >> lebar;
		setY(lebar);
	}
	virtual float Luas(int b) {
		return b * b;
	}
	virtual float Keliling(int b) {
		return 2 * b + 2 * b;
	}

};

int main() {
	bidangDatar* obyek;

	cout << "\n lingkaran dibuat" << endl;
	obyek = new lingkaran;
	obyek->input();
	cout << "Luas lingkaran = " << obyek->Luas(obyek->getX());
	cout << "\n Keliling lingkaran = " << obyek->Luas(obyek->getX());

	cout << "\n Persegi Panjang dibuat" << endl;
	obyek = new persegipanjang;
	obyek->input();
	cout << "\n luas persegipanjang = " << obyek->Luas(obyek->getY());
	cout << "\n Keliling persegipanjang = " << obyek->Keliling(obyek->getY());

	delete obyek;

	return 0;

}