import re

propozitie = ""
subiecte = []
predicate = []
complemente = []

expr_s = r"S#[A-z]+"
expr_p = r"P#[A-z]+"
expr_c = r"C#[A-z]+"

 
with open("s_p_c_2.in", "r") as file_in:
    propozitie = file_in.readline()
  
subiecte = re.findall(expr_s, propozitie)
subiecte = [x[2:] for x in subiecte]

predicate = re.findall(expr_p, propozitie)
predicate = [x[2:] for x in predicate]

complemente = re.findall(expr_c, propozitie) 
complemente = [x[2:] for x in complemente]

subiecte = sorted(subiecte)
predicate = sorted(predicate)
complemente = sorted(complemente)


with open("s_p_c_2.out", "w") as file_out:
    for s in subiecte:
        for p in predicate:
            for c in complemente:
                file_out.write("{0} {1} {2}\n".format(s, p, c))