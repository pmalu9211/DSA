from multiprocessing import cpu_count
import time
#multiprossing is used to perform heavy task 
def a():
    a = 0
    while a < 100:
        print(a)
        a = a + 1

def d():
    a = 0
    while a < 100:
        print(a)
        a = a + 1

def c():
    a = 0
    while a < 100:
        print(a)
        a = a + 1

def b():
    a = 0
    while a < 100:
        print("a",a)
        a = a + 1

import multiprocessing 




def main():

    f = multiprocessing.Process(target=a,args=())

    k = multiprocessing.Process(target = d,args = ())

    h = multiprocessing.Process(target=c,args=())


    g = multiprocessing.Process(target=b,args=())

    g.start()
    f.start()
    k.start()
    h.start()

    g.join()
    f.join()
    k.join()
    h.join()

    print("finished in ", time.perf_counter())





print(cpu_count())

if __name__ == "__main__":
    main()
