ifneq ($(KERNELRELEASE),)
	obj-m := {{cookiecutter.module_name}}.o
else
	KERNELDIR ?=/lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)

BUILDARGS :=

ifneq ($(CROSS_COMPILE),)
	BUILDARGS := $(BUILDARGS) CROSS_COMPILE=$(CROSS_COMPILE)
endif
ifneq ($(ARCH),)
	BUILDARGS := $(BUILDARGS) ARCH=$(ARCH)
endif

default: {{cookiecutter.module_name}}.c
	$(MAKE) -C $(KERNELDIR)  M=$(PWD) $(BUILDARGS) modules

clean:
	rm {{cookiecutter.module_name}}.ko \
		modules.order \
		Module.symvers {{cookiecutter.module_name}}.o \
		{{cookiecutter.module_name}}.mod \
		{{cookiecutter.module_name}}.mod.c \
		{{cookiecutter.module_name}}.mod.o

endif
