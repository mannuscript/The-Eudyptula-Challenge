obj-m := hello.o

getDir:
	@if [ -z $(dir) ]; then\
		echo Picking default value;\
		make -C /lib/modules/$(shell uname -r)/build M=`pwd`;\
		sudo insmod hello.ko;\
	else\
		echo Picking from env variable;\
		make -C $(dir) M=`pwd`;\
                sudo insmod hello.ko;\
	fi
