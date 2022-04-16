#import string
def count_str(s):
    up = 0; low = 0; space = 0; digit = 0; others = 0
    for c in s:
        if c.isupper():
            up += 1
        elif c.islower():
            low += 1
        elif c.isspace():
            space += 1
        elif c.isdigit():
            digit += 1
        else:
            others += 1
    print('⼤写字母 = %d,⼩写字母 = %d,空格 = %d,数字 = %d,其他 = %d' % (up, low, space, digit, others))
if not count_str('str'):
    print("测试成功")
    if count_str('12abAB [$') == (2, 4, 1, 2):
        print('测试成功')
    else:
        print('测试失败')
#s = input('请输⼊⼀个字符串:\n')
#count_str(s)

