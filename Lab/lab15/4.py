def number_length(num):
    count = 0
    for i in num:
        count += 1
    return count


def main():
    num = input("Enter a number: ")
    result = number_length(num)
    print(result)


if __name__ == "__main__":
    main()
