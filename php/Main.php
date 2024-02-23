<!-- /*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
 * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
 */   -->
<?php
require('Shirt.php');

$shirt1 = new Shirt();//masukkan data shirt 1
$shirt1->setIdProduct('ID6754');
$shirt1->setName('Kahf');
$shirt1->setBrand('Gerry');
$shirt1->setPrice('129000');
$shirt1->setSize('M');
$shirt1->setMaterial('Cotton');
$shirt1->setGender('Man');
$shirt1->setColor('Blue');
$shirt1->setSleeve('Long');

$shirt2 = new Shirt();//memasukkan data shirt 2
$shirt2->setIdProduct('IG4567');
$shirt2->setName('Hills');
$shirt2->setBrand('Musk');
$shirt2->setPrice('320000');
$shirt2->setSize('S');
$shirt2->setMaterial('Cotton');
$shirt2->setGender('Woman');
$shirt2->setColor('Pink');
$shirt2->setSleeve('Long');

$shirt3 = new Shirt();
$shirt3->setIdProduct('GR5463');
$shirt3->setName('Pearls');
$shirt3->setBrand('Erickfe');
$shirt3->setPrice('250000');
$shirt3->setSize('M');
$shirt3->setMaterial('Cotton');
$shirt3->setGender('Woman');
$shirt3->setColor('White');
$shirt3->setSleeve('Long');

//membuat tabel dan menampilkan data
echo "DATA PRODUK";
echo "<br>";
echo "--------------------------------------------------------------------------------------";
echo "<br>";
echo "| No | ID     | Name  | Brand   | Price  | Size | Material | Gender | Color | Sleeve |";
echo "<br>";
echo "| 1  | " . $shirt1->getID() . " | ". $shirt1->getName(). "   | " . $shirt1->getBrand(). " | " . $shirt1->getPrice(). " | " . $shirt1->getSize(). "    | " . $shirt1->getMaterial(). "   | " . $shirt1->getGender(). "    | " . $shirt1->getColor(). "  | " . $shirt1->getSleeve(). "   |";
echo "<br>";
echo "--------------------------------------------------------------------------------------";
echo "<br>";
echo "| 2  | " . $shirt2->getID() . " | ". $shirt2->getName(). "   | " . $shirt2->getBrand(). " | " . $shirt2->getPrice(). " | " . $shirt2->getSize(). "    | " . $shirt2->getMaterial(). "   | " . $shirt2->getGender(). "    | " . $shirt2->getColor(). "  | " . $shirt2->getSleeve(). "   |";
echo "<br>";
echo "--------------------------------------------------------------------------------------";
echo "<br>";
echo "| 3  | " . $shirt3->getID() . " | ". $shirt3->getName(). "   | " . $shirt3->getBrand(). " | " . $shirt3->getPrice(). " | " . $shirt3->getSize(). "    | " . $shirt3->getMaterial(). "   | " . $shirt3->getGender(). "    | " . $shirt3->getColor(). "  | " . $shirt3->getSleeve(). "   |";
echo "<br>";
echo "--------------------------------------------------------------------------------------";
echo "<br>";

?>
