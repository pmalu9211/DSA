# #thread can be considered as a string which 
# #one thread has to perform a task in series 
# #and multiple threads can perform their tasks parallely 

# import threading

# import time

# def study():
    
#     time.sleep(5)
#     print("I'm studying")
# def eat():
    
#     time.sleep(4)
#     print("im eating")
# def sleep():
    
#     time.sleep(3)
#     print("Im sleeping")

# x = threading.Thread(target=sleep, args=())
# x.start()

# y = threading.Thread(target=study,args=())
# y.start()

# z = threading.Thread(target=eat, args=() )
# z.start()

# x.join()
# y.join()
# z.join()
# #all of the threads get together in the main thread as they are joined in that thread
# print("hello")
# time.sleep(1)
# print(threading.active_count())
# print(threading.enumerate())
# print(time.perf_counter())

#daemon thred are the threaad that are not that important and can be killed after all the non daemon threads are executed

import threading
import time

def timer():
    count = 0
    while True:

        time.sleep(1)
        count = count + 1
        print("Timer is : ",count)

x = threading.Thread(target=timer,daemon=True)
x.start()
a = input("Hello : ")