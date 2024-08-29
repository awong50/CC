t = int(input())

for _ in range(t):
    s = input().strip()
    p = input().strip()
    x = 0
    s1, l1, s2, l2 = 0, 0, 0, 0
    for i in range(1, len(p)):
        p1 = p[:i]
        p2 = p[i:]
        if p1 in s:
            s1 = s.find(p1)
            l1 = len(p1)
        else:
            continue
        
        # Checking if p2 is found after p1
        if p2 in s[s1 + l1:]:
            l2 = len(p2)
            s2 = s.find(p2, s1 + l1)
            x += 1
            break
    
    if x == 1:
        print(str(s1) + " " + str(l1) + " " + str(s2) + " " + str(l2))
    else:
        print("IMPOSSIBLE")
