/*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */
class Clothing extends Product{
	private String size;
	private String material;
	private String gender;

	public Clothing(){
		this.size = "";
		this.material = "";
		this.gender = "";
	}

	public Clothing(String size, String material, String gender){
		this.size = size;
		this.material = material;
		this.gender = gender;
	}

	/*getter and setter */
	public String getSize(){
		return this.size;
	}

	public void setSize(String size){
		this.size = size;
	}

	public String getMaterial(){
		return this.material;
	}

	public void setMaterial(String material){
		this.material = material;
	}

	public String getGender(){
		return this.gender;
	}

	public void setGender(String gender){
		this.gender = gender;
	}
}
