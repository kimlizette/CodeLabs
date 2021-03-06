#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static char *minombre = "blah";

module_param(minombre, charp, 0000);
MODULE_PARM_DESC(minombre, "A character string");

static int module_init_function(void)
{
    //printk(KERN_INFO "Main? Hello!\n");
    printk(KERN_INFO "Main? Hello! %s\n", minombre);
    return 0;
}

static void module_exit_function(void)
{
    printk(KERN_INFO "Main? Bye! %s\n", minombre);
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Xe1Gyq");
MODULE_DESCRIPTION("My First Linux Kernel Module");

module_init(module_init_function);
module_exit(module_exit_function);
