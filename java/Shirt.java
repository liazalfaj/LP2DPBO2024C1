/*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */
class Shirt extends Clothing{
	private String color;
	private String sleeve;

	public Shirt(){
		this.color = "";
		this.sleeve = "";
	}

	public Shirt(String color, String sleeve){
		this.color = color;
		this.sleeve = sleeve;
	}

	/*getter and setter */
	public String getColor(){
		return this.color;
	}

	public void setColor(String color){
		this.color = color;
	}

	public String getSleeve(){
		return this.sleeve;
	}

	public void setSleeve(String sleeve){
		this.sleeve = sleeve;
	}
}
