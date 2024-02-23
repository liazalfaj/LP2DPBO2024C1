/*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */  
#include <bits/stdc++.h>//library
#include "Shirt.cpp"//import kelas

using namespace std;//deklarasi penggunaan std

int main(){

	//deklarasi variabel dan objek
	int i, n = 0;
		string idProduct;
		string name;
		string brand;
		string price;
		string size;
		string material;
		string gender;
		string color;
		string sleeve;
		int idp = 5;
		int num = 6;
		int jname = 7;
		int jbrand = 8;
		int jprice = 8;
		int jsize = 7;
		int jmat = 11;
		int jgen = 9;
		int jcolor = 8;
		int jsleeve = 9;

		list<Shirt>llist;//membuat objek

		cout << "Masukkan jumlah data (lebih dari 2) : " << '\n';
		cin >> n;//input jumlah data yang akan diinput

		for(i = 0; i < n; i++){//iterasi masukan
			Shirt temp;
			cout << '\n'<<"INPUT DATA PRODUK " << i + 1 << '\n';
			cout << "Masukkan ID Produk: " << '\n';
			cin >> idProduct;
			//mencari string terpanjang untuk meneysuaikan spasi tabel
			if((idProduct.size() + 3) > idp){
				idp = (idProduct.size() + 3);
			}
			
			cout << "Masukkan Nama Produk: " << '\n';
			cin >> name;
			//mencari string terpanjang untuk meneysuaikan spasi tabel
			if((name.size() + 3) > jname){
				jname = (name.size() + 3);
			}

			cout << "Masukkan Brand Produk: " << '\n';
			cin >> brand;
			//mencari string terpanjang untuk meneysuaikan spasi tabel
			if((brand.size() + 3) > jbrand){
				jbrand = (brand.size() + 3);
			}

			cout << "Masukkan Harga Produk: " << '\n';
			cin >> price;
			//mencari string terpanjang untuk meneysuaikan spasi tabel
			if((price.size() + 3) > jprice){
				jprice = (price.size() + 3);
			}

			cout << "Masukkan Size Produk: " << '\n';
			cin >> size;
			//mencari string terpanjang untuk meneysuaikan spasi tabel
			if((size.size() + 3) > jsize){
				jsize = (size.size() + 3);
			}

			cout << "Masukkan Material Produk: " << '\n';
			cin >> material;
			//mencari string terpanjang untuk meneysuaikan spasi tabel
			if((material.size() + 3) > jmat){
				jmat = (material.size() + 3);
			}

			cout << "Masukkan Gender: " << '\n';
			cin >> gender;
			//mencari string terpanjang untuk meneysuaikan spasi tabel
			if((gender.size() + 3) > jgen){
				jgen = (gender.size() + 3);
			}

			cout << "Masukkan Warna Produk: " << '\n';
			cin >> color;
			//mencari string terpanjang untuk meneysuaikan spasi tabel
			if((color.size() + 3) > jcolor){
				jcolor = (color.size() + 3);
			}

			cout << "Masukkan Jenis Sleeve: " << '\n';
			cin >> sleeve;
			//mencari string terpanjang untuk meneysuaikan spasi tabel
			if((sleeve.size() + 3) > jsleeve){
				jsleeve = (sleeve.size() + 3);
			}

			temp.setIdProduct(idProduct);
			temp.setName(name);
			temp.setBrand(brand);
			temp.setprice(price);
			temp.setSize(size);
			temp.setMaterial(material);
			temp.setGender(gender);
			temp.setColor(color);
			temp.setSleeve(sleeve);

			llist.push_back(temp);
		}

	cout << "Data Produk" << '\n';

//membuat tabel dan keluaran dari data yang telah diinput
	for(i = 0; i < num; i++){
			cout << "-";
		}

		for(i = 0; i < idp; i++){
			cout << "-";
		}
		for(i = 0; i < jname; i++){
			cout << "-";
		}
		for(i = 0; i < jbrand; i++){
			cout << "-";
		}
		for(i = 0; i < jprice; i++){
			cout << "-";
		}
		for(i = 0; i < jsize; i++){
			cout << "-";
		}
		for(i = 0; i < jmat; i++){
			cout << "-";
		}
		for(i = 0; i < jgen; i++){
			cout << "-";
		}
		for(i = 0; i < jcolor; i++){
			cout << "-";
		}
		for(i = 0; i < jsleeve; i++){
			cout << "-";
		}
		cout << '\n';
		//buat header
		cout << "| No |";
		cout << " ID";
		for(i = 0; i < idp - 4; i++){
			cout << (" ");
		}
		cout << "| Name"; 
		for(i = 0; i < jname - 6 ; i++){
			cout << " ";
		}
		cout << "| Brand";
		for(i = 0; i < jbrand - 7; i++){
			cout << " ";
		}
		cout << "| Price";
		for(i = 0; i < jprice - 7; i++){
			cout << " ";
		}
		cout << "| Size";
		for(i = 0; i < jsize - 6; i++){
			cout << " ";
		}
		cout << "| Material";
		for(i = 0; i < jmat - 10; i++){
			cout << " ";
		}
		cout << "| Gender";
		for(i = 0; i < jgen - 8; i++){
			cout << " ";
		}
		cout << "| Color";
		for(i = 0; i < jcolor - 7; i++){
			cout << " ";
		}
		cout << "| Sleeve |" << '\n';
		for(i = 0; i < num; i++){
			cout << "-";
		}

		for(i = 0; i < idp; i++){
			cout << "-";
		}
		for(i = 0; i < jname; i++){
			cout << "-";
		}
		for(i = 0; i < jbrand; i++){
			cout << "-";
		}
		for(i = 0; i < jprice; i++){
			cout << "-";
		}
		for(i = 0; i < jsize; i++){
			cout << "-";
		}
		for(i = 0; i < jmat; i++){
			cout << "-";
		}
		for(i = 0; i < jgen; i++){
			cout << "-";
		}
		for(i = 0; i < jcolor; i++){
			cout << "-";
		}
		for(i = 0; i < jsleeve; i++){
			cout << "-";
		}
		cout << "\n";

		//data list produk
		i = 0;
		for(list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++){
			int j = 0;
			cout << "| " << i + 1;
			cout << "  | " << it->getIdProduct();
			j = it->getIdProduct().size() + 3;
			for(int a  = 0; a < idp - j; a++){
				cout << " ";
			}
			cout << " | "<< it->getName();
			j = it->getName().size() + 3;
			for(int a = 0; a < jname - j; a++){
				cout << " ";
			}
			cout << " | " << it->getBrand();
			j = it->getBrand().size() + 3;
			for(int a = 0; a < jbrand - j; a++){
				cout << " ";
			}
			cout << " | " << it->getPrice();
			j = it->getPrice().size() + 3;
			for(int a = 0; a < jprice - j; a++){
				cout << " ";
			}
			cout << " | " << it->getSize();
			j = it->getSize().size() + 3;
			for(int a = 0; a < jsize - j; a++){
				cout << " ";
			}
			cout << " | " << it->getMaterial();
			j = it->getMaterial().size() + 3;
			for(int a = 0; a < jmat - j; a++){
				cout << " ";
			}
			cout << " | " << it->getGender();
			j = it->getGender().size() + 3;
			for(int a = 0; a < jgen - j; a++){
				cout << " ";
			}
			cout << " | " << it->getColor();
			j = it->getColor().size() + 3;
			for(int a = 0; a < jcolor - j; a++){
				cout << " ";
			}
			cout << " | " << it->getSleeve();
			j = it->getSleeve().size() + 3;
			for(int a = 0; a < jsleeve - j; a++){
				cout << " ";
			}
			cout << " | " << '\n';
			//garis akhir
			for(int b = 0; b < num; b++){
				cout << "-";
			}
	
			for(int b = 0; b < idp; b++){
				cout << "-";
			}
			for(int b = 0; b < jname; b++){
				cout << "-";
			}
			for(int b = 0; b < jbrand; b++){
				cout << "-";
			}
			for(int b = 0; b < jprice; b++){
				cout << "-";
			}
			for(int b = 0; b < jsize; b++){
				cout << "-";
			}
			for(int b = 0; b < jmat; b++){
				cout << "-";
			}
			for(int b = 0; b < jgen; b++){
				cout << "-";
			}
			for(int b = 0; b < jcolor; b++){
				cout << "-";
			}
			for(int b = 0; b < jsleeve; b++){
				cout << "-";
			}
			cout << '\n';
			i++;
		}
}
