<!-- /*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */    -->
<?php
require_once('Product.php');//pewarisan dari kelas product
class Clothing extends Product{
	private $size = '';
	private $material = '';
	private $gender = '';

	public function __construct($size = '', $material = '', $gender = ''){//konstruktor
		$this->size = $size;
		$this->material = $material;
		$this->gender = $gender;
	}

	//getter and setter
	public function getSize(){
		return $this->size;
	}

	public function setSize($size){
		$this->size = $size;
	}

	public function getMaterial(){
		return $this->material;
	}

	public function setMaterial($material){
		$this->material = $material;
	}

	public function getGender(){
		return $this->gender;
	}

	public function setGender($gender){
		$this->gender = $gender;
	}
}
?>
