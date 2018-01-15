bf_test: bf.c bf_test.c
	gcc -o bf_test bf.c bf_test.c -I. -O3

clean: 
	rm -f *.o *.s *.i bf_test
