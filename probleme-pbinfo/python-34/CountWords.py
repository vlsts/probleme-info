import re

propozitie = input()

expr = r"[A-Za-z]+"

cuvinte = re.findall(expr, propozitie)

frecv = {}

for cuvant in cuvinte:
    if cuvant in frecv: frecv[cuvant] += 1
    else: frecv[cuvant] = 1
    
cuv_sortate = sorted(frecv.keys())

for cuv in cuv_sortate:
    print("{0} {1}".format(cuv, frecv[cuv]))