def get_score(guess: str, correct: str) -> list[int]:
    mask = [-1] * 5

    for i in range(5):
        if guess[i] == correct[i]:
            mask[i] = 1
    
    for i in range(5):
        if mask[i] == 1:
            continue
        for j in range(5):
            if mask[j] == 1:
                continue    
            if guess[j] == correct[i]:
                mask[j] = 0
                break

    return mask

def main():
    # guess, correct = ДОЖДЬ, ДЗЮДО
    guess, correct = input().split(', ')
    print(', '.join(map(str, get_score(guess, correct))))

if __name__ == '__main__':
    main()