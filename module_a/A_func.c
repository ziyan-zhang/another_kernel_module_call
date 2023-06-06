/*
 * @Author: zy nscc ubuntu22.04 1920548152@qq.com
 * @Date: 2023-06-06 16:49:53
 * @LastEditors: zy nscc ubuntu22.04 1920548152@qq.com
 * @LastEditTime: 2023-06-06 16:49:57
 * @FilePath: /another_kernel_module_call/module_a/A_func.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/jiffies.h>
 
// Print jiffies
void A_print_jiffies(void)
{
        printk("jiffies is : %llu\n", (u64)jiffies);
        return;
}
EXPORT_SYMBOL(A_print_jiffies);
 
static int __init A_init(void)
{
        printk("A_func module init!\n");
        return 0;
}
 
static void __exit A_exit(void)
{
        printk("A_func module exit!\n");
        return;
}
 
module_init(A_init);
module_exit(A_exit);
 
MODULE_AUTHOR("XuHongzhi@MacroSAN");
MODULE_DESCRIPTION("Module A");
MODULE_VERSION("0.1");
MODULE_LICENSE("GPL");