n = int(input())
for i in range(n):
    string = list(map(int, input().split()))
    print(len(string))
    string.clear()
