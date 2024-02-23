# /*Saya Amelia zalfa Julianti dengan NIM 2203999 mengerjakan Tugas LP2 Mata Kuliah DPBO untuk keberkahanNya maka
#  * saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
#  */  
#kang teh maaf masih ada yang salah kayaknya jadi kodenya ga jalan :"

from Shirt import Shirt

def main():
    # variable and object declarations
    n = 0
    idp = 5
    num = 6
    jname = 7
    jbrand = 8
    jprice = 8
    jsize = 7
    jmat = 11
    jgen = 9
    jcolor = 8
    jsleeve = 9

    llist = []  # list to hold Shirt objects

    print("Masukkan jumlah data (lebih dari 2) : ")
    n = int(input())  # input jumlah data yang akan diinput

    for i in range(n):
        temp = Shirt()
        print('\n' + "INPUT DATA PRODUK", i + 1)
        idProduct = input("Masukkan ID Produk: ")
        if len(idProduct) + 3 > idp:
            idp = len(idProduct) + 3

        name = input("Masukkan Nama Produk: ")
        if len(name) + 3 > jname:
            jname = len(name) + 3

        brand = input("Masukkan Brand Produk: ")
        if len(brand) + 3 > jbrand:
            jbrand = len(brand) + 3

        price = input("Masukkan Harga Produk: ")
        if len(price) + 3 > jprice:
            jprice = len(price) + 3

        size = input("Masukkan Size Produk: ")
        if len(size) + 3 > jsize:
            jsize = len(size) + 3

        material = input("Masukkan Material Produk: ")
        if len(material) + 3 > jmat:
            jmat = len(material) + 3

        gender = input("Masukkan Gender: ")
        if len(gender) + 3 > jgen:
            jgen = len(gender) + 3

        color = input("Masukkan Warna Produk: ")
        if len(color) + 3 > jcolor:
            jcolor = len(color) + 3

        sleeve = input("Masukkan Jenis Sleeve: ")
        if len(sleeve) + 3 > jsleeve:
            jsleeve = len(sleeve) + 3

        temp.setIdProduct(idProduct)
        temp.setName(name)
        temp.setBrand(brand)
        temp.setPrice(price)
        temp.setSize(size)
        temp.setMaterial(material)
        temp.setGender(gender)
        temp.setColor(color)
        temp.setSleeve(sleeve)

        llist.append(temp)

    print("Data Produk")

    # print header
    for _ in range(num):
        print("-", end="")
    for _ in range(idp):
        print("-", end="")
    for _ in range(jname):
        print("-", end="")
    for _ in range(jbrand):
        print("-", end="")
    for _ in range(jprice):
        print("-", end="")
    for _ in range(jsize):
        print("-", end="")
    for _ in range(jmat):
        print("-", end="")
    for _ in range(jgen):
        print("-", end="")
    for _ in range(jcolor):
        print("-", end="")
    for _ in range(jsleeve):
        print("-", end="")
    print()

    # print data list produk
    for i, shirt in enumerate(llist, 1):
        print("|", i, end="  |")
        print(shirt.getIdProduct(), end="")
        j = len(shirt.getIdProduct()) + 3
        print(" " * (idp - j), end=" |")
        print(shirt.getName(), end="")
        j = len(shirt.getName()) + 3
        print(" " * (jname - j), end=" |")
        print(shirt.getBrand(), end="")
        j = len(shirt.getBrand()) + 3
        print(" " * (jbrand - j), end=" |")
        print(shirt.getPrice(), end="")
        j = len(shirt.getPrice()) + 3
        print(" " * (jprice - j), end=" |")
        print(shirt.getSize(), end="")
        j = len(shirt.getSize()) + 3
        print(" " * (jsize - j), end=" |")
        print(shirt.getMaterial(), end="")
        j = len(shirt.getMaterial()) + 3
        print(" " * (jmat - j), end=" |")
        print(shirt.getGender(), end="")
        j = len(shirt.getGender()) + 3
        print(" " * (jgen - j), end=" |")
        print(shirt.getColor(), end="")
        j = len(shirt.getColor()) + 3
        print(" " * (jcolor - j), end=" |")
        print(shirt.getSleeve(), end="")
        j = len(shirt.getSleeve()) + 3
        print(" " * (jsleeve - j), end=" |")
        print()

    # print header
    for _ in range(num):
        print("-", end="")
    for _ in range(idp):
        print("-", end="")
    for _ in range(jname):
        print("-", end="")
    for _ in range(jbrand):
        print("-", end="")
    for _ in range(jprice):
        print("-", end="")
    for _ in range(jsize):
        print("-", end="")
    for _ in range(jmat):
        print("-", end="")
    for _ in range(jgen):
        print("-", end="")
    for _ in range(jcolor):
        print("-", end="")
    for _ in range(jsleeve):
        print("-", end="")
    print()

