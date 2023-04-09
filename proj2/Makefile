all : task1/task1 task2/task2 Lab5
.PHONY:all

task1/task1 : task1/main.cpp task1/result.i
	cc -o task1/task1 task1/main.cpp

task2/task2: task2/main.cpp task2/result.i task2/website.i
	cc -o task2/task2 task2/main.cpp

Lab5: task3/main.cpp task3/TASK3.cpp task3/TASK3.h
	cc -o Lab5 task3/main.cpp task3/TASK3.cpp

.PHONY:clean
clean : 
	rm task1/task1 task2/task2 Lab5
