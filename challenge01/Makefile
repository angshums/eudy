ifneq ($(KERNELRELEASE),)
	obj-m = eudyptula01.o

else 
	KERNELDIR ?= /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)

.PHONY:  build clean

build:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean
install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules install

endif


