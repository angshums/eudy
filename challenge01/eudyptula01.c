#include <linux/module.h>
#include <linux/kernel.h>

/* Task 01 of Eudyptula Challenge */

/* initialize the LKM */
int init_module(void)
{
	printk(KERN_INFO "init_module...\n");
	return 0;
}

/* cleanup - undo whatever init_module did */
void cleanup_module(void)
{
	printk(KERN_INFO "cleanup_module...\n");
}

