def hanshu(n):
    c = 1
    if n == 0 or n == 1:
        return 1
    else:
        for i in range(1, n+1):
            c *= i
        return c
n = int(input("请输入一个数"))
print("% d 的阶乘为 % d " % (n, hanshu(n)))