def like_or_dislike(button_inputs):
    i = int(0)
    current_state = " "
    while (i < button_inputs):
        choice = input("Enter Choice: ")
        if choice == "Like" and choice != current_state:
            current_state = choice
        elif choice == "Dislike" and choice != current_state:
            current_state = choice
        elif choice == current_state:
            current_state = "Nothing"
        i += 1
    return current_state


def main():
    button_inputs = int(input("Enter number: "))
    result = like_or_dislike(button_inputs)
    print(result)


if __name__ == "__main__":
    main()
