import jieba as jb
from wordcloud import WordCloud
import pickle
# 打开并读取“西游记. txt”
txt = open(r"E:\学习代码\python实验五\西游记.txt", "rb"). read()
# 构建排除词库
excludes = {"一个", "那里", "怎么", "我们", "不知", "两个", "甚么", "只见", "不是", "原来", "不敢", "闻言", "如何"}
# 使用jieba分词
words= jb.lcut(txt)
#pureWord = " ".join(words)
# 对划分的单词计数
counts = {}
for word in words:
    if len(word) == 1:
        continue
    elif word == "行者" or word == "大圣" or word == "老孙":
        rword = "悟空"
    elif word == "师父" or word == "三藏" or word == "长老":
        rword = "唐僧"
    elif word == "悟净" or word == "沙和尚":
        rword = "沙僧"
    else:
        rword = word
    counts[rword] = counts.get(rword, 0) + 1
#删除无意义的词语
for word in excludes:
    del counts[word]
#按词语出现的次数排序
items = list(counts.items())
items.sort(key=lambda x:x[1],reverse=True)
for i in range(1):
    word,count=items[i]
    for key,value in items[:5]:
        liebiao = items[:5]
        text="".join(map(str, liebiao))
#text = " ".join(word)
word = WordCloud(background_color="white",
                    width=800,
                   height=800,
                   font_path='simhei.ttf',
                   ).generate(text)
word.to_file('词云.png')