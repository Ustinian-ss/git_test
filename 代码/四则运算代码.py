x = int(input("请输入一个数"))
y = int(input("请输入一个数"))
z = str(input("请输入运算符"))
def jisuan(put_one, put_two):
    s = 0
    x = put_one; y = put_two
    if z == "*":
      s = x*y
      return s
    if z == "/":
      s = x/y
      return s
    if z == "+":
      s = x+y
      return s
    if z == "-":
      s = x-y
      return s
    print("计算结果是%d" % s)
print("计算结果是", jisuan(x,y))