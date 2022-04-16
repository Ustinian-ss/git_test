def hannio(n, A, B, C):
   if n == 1:
      print(A, '-->', C)
   else:
      hannio(n-1, A, C, B)
      print(A, '-->', C)
      hannio(n-1, B, A, C)
cishu = 0
def move(n,A,B,C):
   global cishu
   cishu += 1
   return cishu
   print("次数%d" % cihsu)
n = int(input("请输入盘子数"))
hannio(n, 'A', 'B', 'C')
move(n, 'A', 'B', 'C')
'''n = int(input("请输入盘子数"))
cishu = 2**n-1
hannio(n, 'A', 'B', 'C')
print("移动次数为%d次"% cishu)'''


'''def move(n, a, b, c):
   if n == 1:
      print(a, "--->", c)
   else:
      move(n - 1, a, c, b)
      print(a, "--->", c)
      move(n - 1, b, a, c)
def f(n):
   if n == 0:
      return 0
   else:
      return 2 * f(n - 1) + 1
n = int(input("请输入盘子数"))
move(n, "A", "B", "C")
print("总共完成汉诺塔游戏需要", f(n), "步")'''