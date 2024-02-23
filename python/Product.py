# /*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
#  * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
#  */  

#deklarasi kelas product
class Product:
    
    __idProduct = ""
    __name = ""
    __brand = ""
    
    def __init__(self, idProduct = "", name = "", brand = "", price = ""):
        self.__idProduct = idProduct
        self.__name = name
        self.__brand = brand
        self.__price = price

    def getIdProduct(self):
        return self.__idProduct

    def setIdProduct(self, idProduct):
        self.__idProduct = idProduct

    def getName(self):
        return self.__name

    def setName(self, name):
        self.__name = name

    def getBrand(self):
        return self.__brand

    def setBrand(self, brand):
        self.__brand = brand

    def getPrice(self):
        return self.__price

    def setPrice(self, price):
        self.__price = price
