def solution(priorities, location):
    answer = 0
    ch = []
    temp= {}
    find = chr(location+65)
    cnt = 0
    test = 0

    for i in range(len(priorities)):
        ch.append(chr(i+65))
    
    zip_obj = zip(ch, priorities)
    dic = dict(zip_obj)
    # print(dict(dic))

    print(find)

    for i in range(len(priorities)):
        a = chr(i+65)
        cnt += 1
        if dic[a] == max(dic.values()):
            dic.pop(a,dic[a])
            test = cnt
            cnt = 0
        else:
            temp[a] = dic[a]
            dic.pop(a,dic[a])
            dic[a] = temp[a]
    
    print(dic, cnt, max(dic.values()), test)
    


    return answer


pri = [2, 1, 3, 2]
loc = 2

solution(pri, loc)