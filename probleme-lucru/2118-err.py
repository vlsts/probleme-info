cuv = ""

with open("minlex.in", "r") as file_in:
    cuv = file_in.read()    

combinatii = {}
combinatii[cuv] = 0
for i in range(1, len(cuv)):
    cuv = cuv[1:] + cuv[0]
    combinatii[cuv] = i

lex = sorted(combinatii.keys())

with open("minlex.out", "w") as file_out:
    file_out.write(str(combinatii[lex[0]]))

file_in.close()
file_out.close()