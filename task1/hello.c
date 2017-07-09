#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

int hello_init(void)
{
	pr_debug("Hello World!");
	return 0;
}

void hello_exit(void)
{
	pr_debug("Goodbye world");
	return;
}

module_init(hello_init);
module_exit(hello_exit);
