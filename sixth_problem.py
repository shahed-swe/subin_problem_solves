
n = int(input())
for i in range(n):
    string = input()
    a = int(string[0])
    b = int(string[len(string) - 1])
    sum = a + b
    print("Sum = {}".format(sum))
