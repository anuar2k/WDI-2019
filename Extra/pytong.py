mapa = {"key1":"val1", "key2": "val2", "key3": "val3"}
cnt = 0

for key in mapa.keys():
    print("Klucz: ", key, " Wartosc: ", mapa[key])
    print(cnt)
    cnt = cnt + 1
mapa["funkcja"] = print

mapa["funkcja"]("to jest refleksja!!!")