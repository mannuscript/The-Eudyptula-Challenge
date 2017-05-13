#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

int hello_init(void)
{
	printk(KERN_DEBUG "Hello world");
	return 0;
}

void hello_exit(void)
{
	printk(KERN_DEBUG "Goodbye world");	
}

module_init(hello_init);
module_exit(hello_exit);