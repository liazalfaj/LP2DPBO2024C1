# /*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
#  * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
#  */  

from Clothing import Clothing

#deklarasi kelas shirt mewarisi kelas clothing
class Shirt(Clothing):
    __color = ""
    __sleeve = ""
    
    def __init__(self, idProduct = "", name = "", brand = "", price = "", size = "", material = "", gender = "", color = "", sleeve = ""):
        super().__init__()
        self.color = color
        self.sleeve = sleeve
        
    
    #getter and setter

    def getColor(self):
        return self.color

    def setColor(self, color):
        self.color = color

    def getSleeve(self):
        return self.sleeve

    def setSleeve(self, sleeve):
        self.sleeve = sleeve
