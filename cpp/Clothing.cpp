/*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */  
#include <iostream>//deklarasi header file
#include <string>//deklarasi header file
#include "Product.cpp"

using namespace std;

class Clothing: public Product{//deklarasi kelas clothing yang memiliki semua atribut kelas Product
	private:
	string size;
	string material;
	string gender;

	public:

	Clothing(){//konstruktor
		this->size ="";
		this->material = "";
		this->gender = "";
	}

	Clothing(string size, string material, string gender){//konastruktor
		this->size = size;
		this->material = material;
		this->gender = gender;
	}

	//getter and setter
	string getSize(){
		return this->size;
	}

	void setSize(string size){
		this->size = size;
	}

	string getMaterial(){
		return this->material;
	}

	void setMaterial(string material){
		this->material = material;
	}

	string getGender(){
		return this->gender;
	}

	void setGender(string gender){
		this->gender = gender;
	}
};
