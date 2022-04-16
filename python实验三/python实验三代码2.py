e = int(input("请输入销售额"))
t = 0
if e <= 3000:
    print("没有提成\n2000")
elif 3000 < e <= 7000:
    t = 2000 * 1.1
elif 7000 < e <= 10000:
    t = 2000 * 1.15
else:
    t = 2000 * 1.2
print(t)
