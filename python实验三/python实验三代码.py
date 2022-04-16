a = float(input("请输入一个体重kg"))
b = float(input("请输入一个身高m"))
BMI = a/b**b
if BMI < 18.5:
    print("体重过轻")
elif 18.5 < BMI < 25:
    print("正常")
elif 25 < BMI < 28:
    print("过重")
elif 28 < BMI < 32:
    print("肥胖")
else:
    print("严重肥胖")

