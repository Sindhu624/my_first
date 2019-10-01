#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>


MODULE_LICENSE("GPL");

MODULE_AUTHOR("Deepanjali.BI");

MODULE_DESCRIPTION("New to kernel programming");

MODULE_VERSION("0.1");

static int __init hello_start(void)
{
	printk(KERN_INFO "Loading basic module Deepa......\n");
	printk(KERN_INFO "Hello team.....\n");
	return 0;
}

static void __exit hello_end (void)
{
	
	printk(KERN_INFO "Goodbye.. Deepa.!!!\n");
}

module_init(hello_start);
module_exit(hello_end);



