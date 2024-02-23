<!-- /*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */   -->
<?php
class Product{//deklarasi kelas
	private $idProduct = '';
	private $name = '';
	private $brand = '';
	private $price = '';

	public function __construct($idProduct = '', $name = '', $brand = '', $price = ''){//konstruktor
		$this->idProduct = $idProduct;
		$this->name = $name;
		$this->brand = $brand;
		$this->price = $price;
	}

	//getter and setter 
	//get id
	public function getId(){
		return $this->idProduct;
	}
	//set ID
	public function setIdProduct($idProduct){
		$this->idProduct = $idProduct;
	}
	
	public function getName(){
		return $this->name;
	}

	public function setName($name){
		$this->name = $name;
	}

	public function getBrand(){
		return $this->brand;
	}

	public function setBrand($brand){
		$this->brand = $brand;
	}

	public function getPrice(){
		return $this->price;
	}

	public function setPrice($price){
		$this->price = $price;
	}
}

?>
