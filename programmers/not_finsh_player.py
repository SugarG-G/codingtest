paricipant = ["mislav", "stanko", "mislav", "ana"] #["leo", "kiki", "eden"]
completion = ["stanko", "ana", "mislav"]

def solution(participant, completion):
    hashDict = {}
    sumHash = 0
    
    for part in participant:
        hashDict[hash(part)] = part
        sumHash += hash(part)
        print("hashDict :",hashDict)
        print("part : ",sumHash)
        print()
        
    print("\r")
    for comp in completion:
        sumHash -= hash(comp)
        print("comp : ",sumHash)
        
    return hashDict[sumHash]

print(solution(["mislav", "stanko", "mislav", "ana"],["stanko", "ana", "mislav"]))