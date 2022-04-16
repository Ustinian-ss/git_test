num = int(input('请输入一个整数'))
for n in range(2, num):
    if num % n == 0:
        print("%d is a NOT prime number" % num)
        break
else:
    print("%d is a prime number", format(num))
