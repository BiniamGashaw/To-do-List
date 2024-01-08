todoList: driver.o 
	g++ driver.o -o todoList

driver.o: driver.cpp linkedlist.h node.h
	g++ -c driver.cpp

clean:
	rm *.o todoList