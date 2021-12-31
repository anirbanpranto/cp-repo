t = int(input())
op = ['+', '-', '//', '*']
ans = {}
for a in op:
    for b in op:
        for c in op:
            v_s = "4{:s}4{:s}4{:s}4".format(a, b, c)
            v_a = "4 " + a + " 4 " + b + " 4 " + c + " 4"
            val = eval(v_s)
            ans[val] = v_a.replace('//','/') + " = " + str(val)

for i in range(t):
    n = int(input())
    if n<-60 or n>256 or n not in ans:
        print("no solution")
    else:
        print(ans[n])
