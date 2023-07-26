def mathFunc(data):
    mean = 0
    for item in data:
        mean+=item
    return mean/len(data)

def setup():
    data = []
    while True:
        inp = input("input a value ").lower()
        if inp == "end":
            print("selection finished")
            break
        else:
            try:
                data.append(float(inp))
            except:
                print("invalid response")
    print("mean = " + str(mathFunc(data)))
    while (True):
        inp = input("do you wish to restart? ").lower()
        if inp == "yes":
            print("restarting...")
            setup()
            break
        elif inp == "no":
            print("finishing...")
            exit()
        else:
            print("invalid response")
print("welcome!\ntype 'end' to finish data setup")
setup()
