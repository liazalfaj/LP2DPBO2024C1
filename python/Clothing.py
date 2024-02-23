# /*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
#  * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
#  */  
from Product import Product

# deklarasi kelas clothing mewarisi kelas product
class Clothing(Product):

    __size = ""
    __material =""
    __gender = ""
    
    def __init__(self, size = "", material = "", gender = ""):
        super().__init__()
        self.__size = size
        self.__material = material
        self.__gender = gender
        
    #getter and setter methods

    def getSize(self):
        return self.__size

    def setSize(self, size):
        self.__size = size

    def getMaterial(self):
        return self.__material

    def setMaterial(self, material):
        self.__material = material

    def getGender(self):
        return self.__gender

    def setGender(self, gender):
        self.__gender = gender
