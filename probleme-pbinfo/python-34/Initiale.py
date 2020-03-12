prop = input()
lungime_prop = len(prop)


prop = prop[0].upper() + prop[1:-1] + prop[-1].upper()

for i in range(1, lungime_prop - 1):
    if prop[i - 1] == " " or prop [i + 1] == " ":
        prop = prop[0:i] + prop[i].upper() + prop[i + 1:]
        
print(prop)