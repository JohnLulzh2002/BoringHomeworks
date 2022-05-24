import matplotlib.pyplot as plt

########## Begin ##########
X=[-1200,-1000,-800,-600,-400,-200,0,200,400,600,800,1000,1200]
Y=[-4.20,-4.06,-3.89,-3.70,-3.48,-3.20,-2.50,-3.20,-3.48,-3.70,-3.89,-4.06,-4.20]
########## End ##########

#以下代码用于打印结果
for i in range(len(X)):
    print('%5s\t%.2f' % (int(X[i]),Y[i]))
    
#以下代码用于保存图片
plt.plot(X,Y,'r-')
plt.grid('off')
plt.show()
plt.savefig( 'src/step7/student/pic.png' )
plt.close()