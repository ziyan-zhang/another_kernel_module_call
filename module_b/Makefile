obj-m := B_func.o
KERNELDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

KBUILD_EXTRA_SYMBOLS += /home/zy/lab/another_kernel_module_call/module_a/Module.symvers 
# export KBUILD_EXTRA_SYMBOLS

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
clean:
	rm -f *.o *.ko *.mod.c *.order *.symvers .*.cmd *.mod .*.o.d
