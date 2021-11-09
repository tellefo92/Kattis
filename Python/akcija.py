n = int(input())
book_prices = [int(input()) for _ in range(n)]
book_prices.sort(reverse=True)
cost = 0
for i in range(n):
	if (i+1)%3 != 0:
		cost += book_prices[i]
print(cost)