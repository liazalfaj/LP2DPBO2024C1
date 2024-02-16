/*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */
import java.util.Scanner;
import java.util.ArrayList;

public class Main{
	public static void main(String[] args){
		int i, n = 0;
		String idProduct;
		String name;
		String brand;
		String price;
		String size;
		String material;
		String gender;
		String color;
		String sleeve;
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


		


		ArrayList<Shirt> list = new ArrayList<Shirt>();

		Scanner sc = new Scanner(System.in);

		//masukkan jumlah data
		System.out.println("Masukkan jumlah data yang akan diinput (lebih dari 2) :");
		try{
			n = sc.nextInt();
		}
		catch(Exception e){
			System.out.println("The input is not an integer!");
		}

		//memasukkan 4 buah objek kelas cucu
		for(i = 0; i < n; i++){
			System.out.println("INPUT DATA PRODUK " + Integer.toString(i+1));
			System.out.println("Masukkan ID Produk:");//memasukkan id produk
			idProduct = sc.next();
			if((idProduct.length() + 3) > idp){
				idp = (idProduct.length() + 3);
			}
			System.out.println("Masukkan Nama Produk:");//memasukkan nama produk
			name = sc.next();
			if((name.length() + 3) > jname){
				jname = (name.length() + 3);
			}
			System.out.println("Masukkan Brand Produk:");//memasukkan brand produk
			brand = sc.next();
			if((brand.length() + 3) > jbrand){
				jbrand = (brand.length() + 3);
			}
			System.out.println("Masukkan Harga Produk:");//memasukkan harga produk
			price = sc.next();
			if((price.length() + 3) > jprice){
				jprice = (price.length() + 3);
			}
			System.out.println("Masukkan Size Produk:");//memasukkan size produk
			size = sc.next();
			if((size.length() + 3) > jsize){
				jsize = (size.length() + 3);
			}
			System.out.println("Masukkan Material Produk:");//memasukkan material produk
			material = sc.next();
			if((material.length() + 3) > jmat){
				jmat = (material.length() + 3);
			}
			System.out.println("Masukkan Gender:");//memasukkan gender 
			gender = sc.next();
			if((gender.length() + 3) > jgen){
				jgen = (gender.length() + 3);
			}
			System.out.println("Masukkan Warna Produk:");//memasukkan warna produk
			color = sc.next();
			if((color.length() + 3) > jcolor){
				jcolor = (color.length() + 3);
			}
			System.out.println("Masukkan Jenis Sleeve:");//memasukkan jenis sleeve produk
			sleeve = sc.next();
			if((sleeve.length() + 3) > jsleeve){
				jsleeve = (sleeve.length() + 3);
			}

			Shirt temp = new Shirt();
			temp.setIdProduct(idProduct); temp.setName(name); temp.setBrand(brand); temp.setPrice(price); temp.setSize(size); 
			temp.setMaterial(material); temp.setGender(gender); temp.setColor(color); temp.setColor(color); temp.setSleeve(sleeve);
			list.add(temp);
		}

		//print keluaran data produk
		System.out.println("Data Produk");
		//buat tabel dan keluaran
		for(i = 0; i < num; i++){
			System.out.print("-");
		}

		for(i = 0; i < idp; i++){
			System.out.print("-");
		}
		for(i = 0; i < jname; i++){
			System.out.print("-");
		}
		for(i = 0; i < jbrand; i++){
			System.out.print("-");
		}
		for(i = 0; i < jprice; i++){
			System.out.print("-");
		}
		for(i = 0; i < jsize; i++){
			System.out.print("-");
		}
		for(i = 0; i < jmat; i++){
			System.out.print("-");
		}
		for(i = 0; i < jgen; i++){
			System.out.print("-");
		}
		for(i = 0; i < jcolor; i++){
			System.out.print("-");
		}
		for(i = 0; i < jsleeve; i++){
			System.out.print("-");
		}
		System.out.print("\n");
		//buat header
		System.out.print("| No |");
		System.out.print(" ID");
		for(i = 0; i < idp - 4; i++){
			System.out.print(" ");
		}
		System.out.print("| Name"); 
		for(i = 0; i < jname - 6 ; i++){
			System.out.print(" ");
		}
		System.out.print("| Brand");
		for(i = 0; i < jbrand - 7; i++){
			System.out.print(" ");
		}
		System.out.print("| Price");
		for(i = 0; i < jprice - 7; i++){
			System.out.print(" ");
		}
		System.out.print("| Size");
		for(i = 0; i < jsize - 6; i++){
			System.out.print(" ");
		}
		System.out.print("| Material");
		for(i = 0; i < jmat - 10; i++){
			System.out.print(" ");
		}
		System.out.print("| Gender");
		for(i = 0; i < jgen - 8; i++){
			System.out.print(" ");
		}
		System.out.print("| Color");
		for(i = 0; i < jcolor - 7; i++){
			System.out.print(" ");
		}
		System.out.println("| Sleeve |");
		for(i = 0; i < num; i++){
			System.out.print("-");
		}

		for(i = 0; i < idp; i++){
			System.out.print("-");
		}
		for(i = 0; i < jname; i++){
			System.out.print("-");
		}
		for(i = 0; i < jbrand; i++){
			System.out.print("-");
		}
		for(i = 0; i < jprice; i++){
			System.out.print("-");
		}
		for(i = 0; i < jsize; i++){
			System.out.print("-");
		}
		for(i = 0; i < jmat; i++){
			System.out.print("-");
		}
		for(i = 0; i < jgen; i++){
			System.out.print("-");
		}
		for(i = 0; i < jcolor; i++){
			System.out.print("-");
		}
		for(i = 0; i < jsleeve; i++){
			System.out.print("-");
		}
		System.out.print("\n");
		
		//buat list data produk
		for(i = 0; i < list.size(); i++){
			int j = 0;
			System.out.print("| " +  Integer.toString(i+1));
			System.out.print("  | " + list.get(i).getIdProduct());
			j = list.get(i).getIdProduct().length() + 3;
			for(int a = 0; a < idp - j; a++){
				System.out.print(" ");
			}
			System.out.print(" | " +  list.get(i).getName());
			j = list.get(i).getName().length() + 3;
			for(int a = 0; a < jname- j; a++){
				System.out.print(" ");
			}
			System.out.print(" | " + list.get(i).getBrand());
			j = list.get(i).getBrand().length() + 3;
			for(int a = 0; a < jbrand - j; a++){
				System.out.print(" ");
			}
			System.out.print(" | " + list.get(i).getPrice());
			j = list.get(i).getPrice().length() + 3;
			for(int a = 0; a < jprice - j; a++){
				System.out.print(" ");
			}
			System.out.print(" | " + list.get(i).getSize());
			j = list.get(i).getSize().length() + 3;
			for(int a = 0; a < jsize - j; a++){
				System.out.print(" ");
			}
			System.out.print(" | " + list.get(i).getMaterial());
			j = list.get(i).getMaterial().length() + 3;
			for(int a = 0; a < jmat - j; a++){
				System.out.print(" ");
			}
			System.out.print(" | " + list.get(i).getGender());
			j = list.get(i).getGender().length() + 3;
			for(int a = 0; a < jgen - j; a++){
				System.out.print(" ");
			}
			System.out.print(" | " + list.get(i).getColor());
			j = list.get(i).getColor().length() + 3;
			for(int a = 0; a < jcolor - j; a++){
				System.out.print(" ");
			}
			System.out.print(" | " + list.get(i).getSleeve());
			j = list.get(i).getSleeve().length() + 3;
			for(int a = 0; a < jsleeve - j; a++){
				System.out.print(" ");
			}
			System.out.print(" | ");

			System.out.print("\n");

			//buat garis setelah list data produk keluar
			for(int b = 0; b < num; b++){
				System.out.print("-");
			}
	
			for(int b = 0; b < idp; b++){
				System.out.print("-");
			}
			for(int b = 0; b < jname; b++){
				System.out.print("-");
			}
			for(int b = 0; b < jbrand; b++){
				System.out.print("-");
			}
			for(int b = 0; b < jprice; b++){
				System.out.print("-");
			}
			for(int b = 0; b < jsize; b++){
				System.out.print("-");
			}
			for(int b = 0; b < jmat; b++){
				System.out.print("-");
			}
			for(int b = 0; b < jgen; b++){
				System.out.print("-");
			}
			for(int b = 0; b < jcolor; b++){
				System.out.print("-");
			}
			for(int b = 0; b < jsleeve; b++){
				System.out.print("-");
			}
			System.out.print("\n");
		}
		sc.close();
	}
}
