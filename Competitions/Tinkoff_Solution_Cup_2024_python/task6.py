def get_compact(nums: list[int]) -> list[tuple[int, int]]:
    compact = []
    cnt = 1
    for i in range(1, len(nums)):
        if nums[i] == nums[i-1]:
            cnt += 1
        else:
            compact.append((nums[i-1], cnt))
            cnt = 1
    compact.append((nums[-1], cnt))
    return compact

def main():
    # nums = "1, 2, 2, 3, 4, 3, 3, 3"
    nums = list(map(int, input().split(', ')))
    print(', '.join(map(str, get_compact(nums))))

if __name__ == '__main__': 
    main()


    