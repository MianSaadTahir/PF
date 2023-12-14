def main():
    height = int(input("Enter height: "))
    width = int(input("Enter width: "))
    character = input("Enter a character: ")
    printShape(height, width, character)


def printShape(height, width, character):
    for i in range(0, height, 1):
        row = " "
        for j in range(0, width, 1):
            row = row+character
        print(row)


if __name__ == "__main__":
    main()
