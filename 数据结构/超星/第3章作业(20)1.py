infix=input().split()
print()
optrs=('+','-','*','/','(',')')
opLevel={'+':0,'-':0,'*':1,'/':1,'(':2,')':2}
opStack=[]
suffix=[]
t=0
for i in infix:
    if i in optrs:
        if i==')':
            while opStack[-1]!='(':
                suffix.append(opStack.pop())
            opStack.pop()
        else:
            while opStack and opStack[-1]!='(' and opLevel[opStack[-1]]>=opLevel[i]:
                suffix.append(opStack.pop())
            opStack.append(i)
    else:
        suffix.append(int(i))
    print('suffix expression:\t',suffix)
    print('operator stack:\t\t',opStack)
    t+=1
    print('\033[1;37;40minfix to process:\t',infix[t:],'\033[0m')
while opStack:
    suffix.append(opStack.pop())
    print('suffix expression:\t',suffix)
    print('operator stack:\t\t',opStack)
print('\033[0;32;40msuffix expression:\t', suffix,'\033[0m')
print()

def calc(a,b,o):
    if o=='+':
        return a+b
    if o=='-':
        return a-b
    if o=='*':
        return a*b
    if o=='/':
        return a/b
numStack=[]
for i in suffix:
    if i in optrs:
        b=numStack.pop()
        a=numStack.pop()
        numStack.append(calc(a,b,i))
    else:
        numStack.append(i)
    print('stack:\t',numStack)
print('\033[0;32;40mans=',numStack[0],'\033[0m')