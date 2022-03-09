def f(i:str,p:str):
    if(not i)or(not p):
        return
    m=i.find(p[0])
    f(i[:m],p[1:m+1])
    f(i[m+1:],p[m+1:])
    print(p[0],end='')
f(input(),input())