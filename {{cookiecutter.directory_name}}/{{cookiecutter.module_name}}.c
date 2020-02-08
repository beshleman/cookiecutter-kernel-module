#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

static int {{cookiecutter.module_name}}_init(void) {
    printk(KERN_ALERT "Hello, world\n");
    return 0;
}

static void {{cookiecutter.module_name}}_exit(void) {
    printk(KERN_ALERT "Goodbye, cruel world\n");
}

module_init({{cookiecutter.module_name}}_init);
module_exit({{cookiecutter.module_name}}_exit);
