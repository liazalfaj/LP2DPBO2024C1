/*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */
class Product {
	private String idProduct;
	private String name;
	private String brand;
	private String price;

	//constructors
	public Product(){
		this.idProduct = "";
		this.name = "";
		this.brand = "";
		this.price = "" ;
	}

	public Product(String idProduct, String name, String brand, String price){
		this.idProduct = idProduct;
		this.name = name;
		this.brand = brand;
		this.price = price;
	}

	/*getter and setter*/
	public String getIdProduct(){
		return this.idProduct;
	}

	public void setIdProduct(String idProduct){
		this.idProduct = idProduct;
	}

	public String getName(){
		return this.name;
	}

	public void setName(String name){
		this.name = name;
	}

	public String getBrand(){
		return this.brand;
	}

	public void setBrand(String brand){
		this.brand = brand;
	}

	public String getPrice(){
		return this.price;
	}

	public void setPrice(String price){
		this.price = price;
	}
}
