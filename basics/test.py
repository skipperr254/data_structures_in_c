x = 10;

def function1():
    function2()
    print(x)

def function2():
    print(x)
    x = 4
    # print(x)

function1()
