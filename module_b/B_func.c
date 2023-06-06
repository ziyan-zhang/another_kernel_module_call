/*
 * @Author: zy nscc ubuntu22.04 1920548152@qq.com
 * @Date: 2023-06-06 16:50:40
 * @LastEditors: zy nscc ubuntu22.04 1920548152@qq.com
 * @LastEditTime: 2023-06-06 17:01:39
 * @FilePath: /another_kernel_module_call/module_b/B_func.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/jiffies.h>
 
extern void A_print_jiffies(void);
 
static int __init B_init(void)
{
        printk("B_func module init!\n");
        A_print_jiffies();
        return 0;
}
 
static void __exit B_exit(void)
{
        printk("B_func module exit!\n");
        return;
}
 
module_init(B_init);
module_exit(B_exit);
 
MODULE_AUTHOR("XuHongzhi@MacroSAN");
MODULE_DESCRIPTION("Module B!");
MODULE_VERSION("0.1");
MODULE_LICENSE("GPL");