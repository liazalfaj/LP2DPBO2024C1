<!-- /*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */   -->
<?php
require_once('Clothing.php');

class Shirt extends Clothing{//pewarisan dari kelas clothing
	private $color = '';
	private $sleeve = '';

	public function __construct($color = '', $sleeve = ''){//konstruktor
		$this->color = $color;
		$this->sleeve = $sleeve;
	}

	//getter and setter

	public function getColor(){
		return $this->color;
	}

	public function setColor($color){
		$this->color = $color;
	}

	public function getSleeve(){
		return $this->sleeve;
	}

	public function setSleeve($sleeve){
		$this->sleeve = $sleeve;
	}

}
?>

