def func(a=128, b=2, *args):
    print(a + b)
    print("args:", args)
    print()

print('positional arguments')
func(1,2)
print('keyword arguments')
func(b=3,a=4)
print('default values')
func()
print('args')
func(5,6,7,8)