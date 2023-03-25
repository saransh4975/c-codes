q=int(input("Enter the value q:")) #0
k=int(input("Enter the value k:")) #0

j =int(input("Enter the value j:")) #0
clk = int(input("Enter the value clock:"))

if clk == 1:
    if j == 1 and k == 1:
        print("toggly")
        q = not q
    elif j == 1 and k == 0:
        print("set")
        q = 1
    elif j == 0 and k == 1:
        print("reset")
        q = 0
    else:
        print("hold")

print(q)
