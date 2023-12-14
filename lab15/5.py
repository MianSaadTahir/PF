def total_overs(balls):
    overs = balls//6
    bowled = balls % 6/10
    return overs+bowled


def main():
    balls = int(input("Enter number of balls: "))
    result = total_overs(balls)
    print(result)


if __name__ == "__main__":
    main()
