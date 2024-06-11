from itertools import permutations

def find_combinations(text: str) -> list[str]:
    combinations: set[str] = set()
    for k in range(1, len(text) + 1):
        combinations.update(set(map(''.join, permutations(text, k))))
    return sorted(combinations)

def main():
    # text = "abc"
    text = input()
    print(", ".join(find_combinations(text)))

if __name__ == '__main__':
    main()