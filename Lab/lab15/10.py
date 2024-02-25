import os.path


def main():
    if (os.path.exists("names.txt")):
        f = open("names.txt", 'r')
        Names = f.read()
        f.close()
        print(Names)
    else:
        print("File does not exist")


if __name__ == "__main__":
    main()
