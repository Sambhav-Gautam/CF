def count_pairs_with_sum_and_product(arr, x, y):
    count_sum = 0
    count_product = 0
    n = len(arr)
    freq = {}
    
    for num in arr:
        freq[num] = freq.get(num, 0) + 1
    
    for num in arr:
        complement = x - num
        if complement in freq:
            count_sum += freq[complement]
            if complement == num:
                count_sum -= 1
        
        if y % num == 0:
            complement_product = y // num
            if complement_product in freq:
                count_product += freq[complement_product]
                if complement_product == num:
                    count_product -= 1
    
    return count_sum // 2 - count_product // 2

def solve_queries(test_cases):
    results = []
    for t in test_cases:
        n = t[0]
        arr = t[1]
        q = t[2]
        queries = t[3]
        
        result = []
        for query in queries:
            x, y = query
            result.append(count_pairs_with_sum_and_product(arr, x, y))
        
        results.append(result)
    return results

# Input
t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    q = int(input())
    queries = [tuple(map(int, input().split())) for _ in range(q)]
    test_cases.append((n, arr, q, queries))

# Solve queries
results = solve_queries(test_cases)

# Output
for result in results:
    print(*result)
