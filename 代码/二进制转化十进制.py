num = input("请输入一个二进制：")
sum = 0
length = len(num)
for x in range(length):
    sum += int(num[length-1-x]) * pow(2, x)
print(sum)