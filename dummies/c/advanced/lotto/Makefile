# Makefile for lotto program

# Variable in makefile
src = main.c init.c select.c sort.c display.c
obj = init.o select.o sort.o display.o


# create dirs
create : 
	mkdir include/ lib/ src/
	@echo "directory created"


# clean lotto/
clean : 
	mv $(obj) libmylib.a ./lib/
	mv *.h ./include/
	mv $(src) ./src/
	@echo "program installed"


# build the lotto program
lotto : main.c lotto.h libmylib.a
	gcc main.c -L./ -lmylib -o lotto
	@echo "program build"


# create the objects files
init.o : init.c lotto.h
	gcc -c init.c

select.o : select.c lotto.h
	gcc -c select.c
	
sort.o : sort.c lotto.h
	gcc -c sort.c

display.o : display.c lotto.h
	gcc -c display.c

# create the library
libmylib.a : $(obj)
	ar -crs libmylib.a $(obj)
	@echo "library is ready"