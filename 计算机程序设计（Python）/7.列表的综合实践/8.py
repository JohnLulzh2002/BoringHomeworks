import matplotlib.pyplot as plt
import numpy as np
X = [0,0.5, 1, 1.5, 2,2.5, 3, 4,4.5,5]
Y = [0,18,20,39.5,60,50,68,77,100,110]
########## Begin ##########
X=np.array(X)
Y=np.array(Y)
k,b=np.polyfit(X,Y,1)
plt.plot(X,Y,'bo')
YHat=k*X+b
plt.plot(X,YHat,'r-')
plt.show()
########## End ##########
print('y = %.3fx + %.3f' % (k,b))
plt.savefig( 'src/step8/student/pic.png' )
plt.close()