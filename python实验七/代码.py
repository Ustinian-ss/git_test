student_infos = []
# 打印功能提示
def print_menu():
    print("=" * 30)
    print(" 学生管理系统V1.0 ")
    print("1.添加学生信息")
    print("2.删除学生信息")
    print("3.修改学生信息")
    print("4.显示所有学生信息")
    print("5.保存数据")
    print("0.退出系统")
    print("=" * 30)
# 添加一个学生信息
def add_info():
    # 提示并获取学生的姓名
    new_name = input("请输入新学生的名字：")
    # 提示并获取学生的性别
    new_sex = input("请输入新学生的性别：(男/女)")
    # 提示并获取学生的手机号码
    new_phone = input("请输入新学生的手机号码：")
    new_infos = {}
    new_infos['name'] = new_name
    new_infos['sex'] = new_sex
    new_infos['phone'] = new_phone
    student_infos.append(new_infos)
# 删除一个学生信息
def del_info(student):
    del_number = int(input("请输入要删除的序号：")) - 1
    del student[del_number]
# 修改一个学生的信息
def modify_info():
    student_id = int(input("请输入要修改的学生的序号："))
    new_name = input("请输入新学生的名字：")
    new_sex = input("请输入新学生的性别：(男/女)")
    new_phone = input("请输入新学生的手机号码：")
    student_infos[student_id - 1]['name'] = new_name
    student_infos[student_id - 1]['sex'] = new_sex
    student_infos[student_id - 1]['phone'] = new_phone
# 定义一个用于显示所有学生信息的函数
def show_infos():
    print("=" * 30)
    print("学生的信息如下:")
    print("=" * 30)
    print("序号    姓名    性别   手机号码")
    i = 1
    for temp in student_infos:
        print("%d      %s      %s     %s" % (i, temp['name'], temp['sex'], temp['phone']))
        i += 1
# 保存当前所有的学生信息到文件中
#def save_to_file():
def save_to_file(self):
    file = open('E:\学习代码\python实验七\学生信息.txt').read  # w+表示如果文件不存在，则创建一个。存在则清空文件内容
    for key in self.map:
        for elm in self.map.get(key):
            file.write(elm + "  ")
            file.write("\n")
    file.close()  # 关闭文件
    print("保存成功！")

# 恢复数据
def recover_data():
    global student_infos
    file = open("backup.data")
    content = file.read()
    if content != "":
        student_infos = eval(content)
    file.close()
def main():
    recover_data('E:\学习代码\python实验七\学生信息.txt')          # 必须确保读取的文件中有数据
    while True:
        print_menu()        # 打印功能菜单
        key = input("请输入功能对应的数字:")  # 获得用户输入的序号
        if key == '1':     # 添加学生的信息
            add_info()
        elif key == '2':  # 删除学生的信息
            del_info(student_infos)
        elif key == '3':  # 修改学生的信息
            modify_info()
        elif key == '4':  # 查看所有学生的信息
            show_infos()
        elif key == '5':  # 保存学生信息到文件
            save_to_file('E:\学习代码\python实验七\学生信息.txt')
        elif key == '0':  # 退出系统
            quit_confirm = input("亲，真的要退出么？(Yes or No):")
            if quit_confirm == "Yes":
                break      # 结束循环
            else:
                print("输入有误，请重新输入")
main()