bsts: driver.o 
	g++ driver.o -o bsts

driver.o: driver.cpp linkedbtree.h
	g++ -c driver.cpp

clean:
	rm *.o bsts*
