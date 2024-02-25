def main():
    number = int(input("Enter a number: "))
    result = oddish_or_evenish(number)
    print(result)


def oddish_or_evenish(number):
    sumOfDigits = 0
    while (number > 0):
        mod = number % 10
        number = number//10
        sumOfDigits += mod
    if (sumOfDigits % 2 == 0):
        return ("Evenish")
    else:
        return ("Oddish")


if __name__ == "__main__":
    main()
