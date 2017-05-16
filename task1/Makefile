obj-m := hello.o

getDir: SHELL := /bin/bash
getDir:
	@if [ -z "$(dir)" ]; then\
		echo Picking default value;\
		make -C /lib/modules/$(shell uname -r)/build M=`pwd`;\
	else\
		echo Picking from env variable;\
		make -C $(shell $dir) M=`pwd`;\
	fi

all:
	make -C $(shell $dirVar) M=`pwd`
