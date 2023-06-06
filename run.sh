###
 # @Author: zy nscc ubuntu22.04 1920548152@qq.com
 # @Date: 2023-06-06 19:45:35
 # @LastEditors: zy nscc ubuntu22.04 1920548152@qq.com
 # @LastEditTime: 2023-06-06 21:03:24
 # @FilePath: /another_kernel_module_call/run.sh
 # @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
### 

sudo rmmod A_func
sudo rmmod B_func

cd module_a/
make clean
make all

cd ../module_b/
make  clean
make all

cd ../
sudo insmod module_a/A_func.ko
sudo insmod module_b/B_func.ko

sudo rmmod B_func
sudo rmmod A_func
