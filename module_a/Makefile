obj-m := A_func.o
KERNELDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)
all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
clean:
	rm -f *.o *.ko *.mod.c *.order *.symvers .*.cmd *.mod .*.o.d