m=[list(input()) for i in range(8)]
x,y=0,0
dx=(0,1,0,-1)
dy=(1,0,-1,0)
def dfs(x,y):
    global m,dx,dy
    m[x][y]=' '
    if (x,y)==(7,7):
        for i in m:
            for j in range(8):
                if i[j]=='1':
                    i[j]='O'
            print(*i,sep='')
        exit()
    for i in range(4):
        x+=dx[i]
        y+=dy[i]
        if x in range(8) and y in range(8) and m[x][y]=='O':
            dfs(x,y)
            m[x][y]='1'
        x-=dx[i]
        y-=dy[i]
dfs(0,0)