import os.path


def main():
    number = int(input("How many names do you want to enter? "))
    Names = takeInput(number)
    storeNames(Names, number)


def takeInput(number):
    Names = []
    i = int(0)
    while (i < number):
        Names.append(input("Enter Name: "))
        i = i+1
    return Names


def storeNames(Names, number):
    f = open("names.txt", 'w')
    for i in range(0, number, 1):
        f.write(Names[i]+"\n")
    f.close()


if __name__ == "__main__":
    main()
