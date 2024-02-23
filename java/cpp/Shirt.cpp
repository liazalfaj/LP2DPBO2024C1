/*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */  
#include <iostream>//deklarasi header file
#include <string>//deklarasi header file
#include "Clothing.cpp"


using namespace std;

class Shirt: public Clothing{//deklarasi kelas shirt yang memiliki semua atribut kelas clothing
	private:
	string color;
	string sleeve;

	public:
	Shirt(){//konstruktor
		this->color = "";
		this->sleeve = "";
	}

	Shirt(string color, string sleeve){//konstruktor
		this->color = color;
		this->sleeve = sleeve;
	}

	//getter and setter
	string getColor(){
		return this->color;
	}

	void setColor(string color){
		this->color = color;
	}

	string getSleeve(){
		return this->sleeve = sleeve;
	}

	void setSleeve(string sleeve){
		this->sleeve = sleeve;
	}
};
