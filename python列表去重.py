#这个是去博纳讯动公司面试时遇到对题
#要求给一个列表去重，不能使用集合或者字典
#感觉这题没啥意义，因为在什么情况下不能够在代码里使用集合或者字典呢
a = [1,2,1,1,3,4]
finish = 0
while not finish:
    for i,v in enumerate(a):
        for j, vv in enumerate(a[i+1:], i+1):
            if v == vv:
                a.pop(j)
                break
        else:
            continue
        break
    else:
        finish = 1

print a
