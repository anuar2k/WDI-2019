mapa = {"key1":"val1", "key2": "val2", "key3": "val3"}
cnt = 0

for key in mapa.keys():
    print("Klucz: ", key, " Wartosc: ", mapa[key])
    print(cnt)
    cnt = cnt + 1
mapa["funkcja"] = print

mapa["funkcja"]("to jest refleksja!!!")

g = lambda x, y: (2*x) ** (2*y)

def dupa(x, y):
    return (2*x) ** (2*y)

f = dupa
print(g(1, 1))
print(f(1, 1))

print((lambda x, y: x ** y)(2, 2))

class List:
    def __init__(self):
        self.next = None
        self.val = None

l1 = List()
l2 = List()
l3 = List()
l1.val = 1
l2.val = 2
l3.val = 3
l1.next = l2
l2.next = l3

def printList(l):
    while(l != None):
        print(l.val)
        l = l.next

printList(l1)