default: file.o
	gcc -o test file.o
file.o: file.c
	gcc -c file.c
run:
	./test
clean:
	rm -f *~ *.o *.exe *.out test file.txt
