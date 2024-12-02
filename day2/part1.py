# Source: https://usaco.guide/general/io

safe = 1000;

for i in range(1000):
	report = [int(_) for _ in input().split()]
	increasing = False
	if report[0] < report[1]:
		increasing = True
	
	diff = abs(report[0] - report[1])

	if diff == 0 or diff > 3:
		safe -= 1
		continue

	for i in range(2, len(report)):
		if increasing and report[i-1] > report[i]:
				safe -= 1
				break
		elif not increasing and report[i-1] < report[i]:
				safe -= 1
				break

		diff = abs(report[i-1] - report[i])

		if diff == 0 or diff > 3:
			safe -= 1
			break

print(safe)
