a=['pop','no','zip','zotz','tzec','xul','yoxkin','mol','chen','yax','zac','ceh','mac','kankin','muan','pax','koyab','cumhu']
i=0
for x in a:
    print('if(!strcmp(b,\"{:s}\"))\td={:d}*20;'.format(x,i))
    i+=1

b=['imix','ik','akbal','kan','chicchan','cimi','manik','lamat','muluk','ok','chuen','eb','ben','ix','mem','cib','caban','eznab','canac','ahau']
i=0
for x in b:
    print('case {:d}:\tprintf("{:s}");break;'.format(i,x))
    i+=1