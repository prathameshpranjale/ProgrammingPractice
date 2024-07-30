def minimal_total_distance(test_cases):
    results = []
    for x1, x2, x3 in test_cases:
        points = sorted([x1, x2, x3])
        median_point = points[1]
        min_distance = abs(median_point - points[0]) + abs(median_point - points[1]) + abs(median_point - points[2])
        results.append(min_distance)
    return results

# Read input
t = int(input().strip())
test_cases = [tuple(map(int, input().strip().split())) for _ in range(t)]

# Process each test case and output results
results = minimal_total_distance(test_cases)
for result in results:
    print(result)
