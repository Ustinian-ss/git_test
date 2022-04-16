def number_self_power_y(m=100, n=1000):
  if type(m) is int and type(n) is int and 0 <= m < n:
    my_range = (x for x in range(m, n))
    for num in my_range:
      sum = 0
      p = len(str(num)) # 幂
      a = [int(s) for s in str(num)] # 数
      for i in a:
        sum += i ** p # 和
      if num == sum:
        yield num
  elif type(m) is not int or type(n) is not int:
    raise Exception('参数类型错误')
  elif m < 0 or m > n:
    raise Exception('参数超出范围')
n = number_self_power_y(0, 10000000)
print([i for i in n])