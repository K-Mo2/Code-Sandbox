
ops = ["5", "6", "+", "9", "D", "3", "C"]

def operations(ops):
    
    result = []
    Sum = 0

    for i in range(0, len(ops)):

        if ops[i] == "+":
            result.append((int(ops[i - 1]) + int(ops[i - 2])))

        if ops[i] == "D":
            result.append((int(ops[i - 1]) * 2))

        if ops[i] == "C":
            result.append(0)

    Sum = sum(result)

    return Sum

print(operations(ops))
