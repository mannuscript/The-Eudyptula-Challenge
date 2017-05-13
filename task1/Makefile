obj-m := hello.o

getDir: SHELL := /bin/bash
getDir:
	dirVar="abc";
	echo $(dirVar)
	@if [ -z "$(dir)" ]; then\
		dirVar="/lib/modules/$(shell uname -r)/build";\
		echo Picking default value;\
		echo $(dirVar);\
	else\
		echo Picking from env variable;\
		dirVar=$dir;\
	fi
	echo $(dirVar);

all:
	make -C $(shell $dirVar) M=`pwd`
