/*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */  
#include <iostream>//deklarasi header file
#include <string>//deklarasi header file

using namespace std;//deklarasi penggunaan std

class Product{//deklarasi kelas produk
	//private attributes
	private:
	string idProduct;
	string name;
	string brand;
	string price;

	public:

	Product(){
		this->idProduct ="";
		this->name ="";
		this->brand ="";
		this->price = "";
	}

	Product(string idProduct, string name, string brand, string price){//konstruktor untuk menerima nilai semua atribut dan menginisialisasi objek produk
		this->idProduct = idProduct;
		this->name = name;
		this->brand = brand;
		this->price = price;
	}

	/*getter and setter*/
	string getIdProduct(){
		return this->idProduct;
	}

	void setIdProduct(string idProduct){
		this->idProduct = idProduct;
	}

	string getName(){
		return this->name;
	}

	void setName(string name){
		this->name = name;
	}

	string getBrand(){
		return this->brand;
	}

	void setBrand(string brand){
		this->brand = brand;
	}

	string getPrice(){
		return this->price;
	}

	void setprice(string price){
		this->price = price;
	}
};
