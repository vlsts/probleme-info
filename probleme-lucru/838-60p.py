n = 0
cam = 0

camere = []
coord = []

di = (-1, 0, 1, 0)
dj = (0, 1, 0, -1)

def check(c1, c2):
    if (c1 < 0 or c2 < 0): return False
    if (c1 >= n or c2 >= n): return False
    if (camere[c1][c2] == 1 or camere[c1][c2] == -1): return False
    return True
    

def fill(c1, c2):
    if (check(c1, c2)):
        camere[c1][c2] = -1
        for i in range(4): fill(c1 + di[i], c2 + dj[i])
########################################################
with open("iesire.in") as file_in:
    l1 = str.split(file_in.readline()) # prima linie ca str si split
    l1 = [int(item) for item in l1] # aici e o chestie noua practic ...
    # transformi tot ce e in lista dupa regula din paranteze
    n = l1[0]
    cam = l1[1]
    for i in range (n):
        l1 = str.split(file_in.readline())
        l1 = [int(item) for item in l1]
        camere.append(l1)
    for i in range (cam):
        l1 = str.split(file_in.readline())
        l1 = [int(item) for item in l1]
        coord.append((l1[0], l1[1]))
####################################################
for i in range(n):
    fill(0, i)
    fill(i, 0)
    fill(i, n - 1)
    fill(n - 1, i)
   
with open("iesire.out", "w") as file_out:
    for camera in coord:
        if (camere[camera[0] - 1][camera[1] - 1] == -1): file_out.write("da\n")
        else: file_out.write("nu\n")
