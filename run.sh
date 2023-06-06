cd module_a/
make
cd ../module_b/
make 
cd ../
sudo insmod module_a/A_func.ko
sudo insmod module_b/B_func.ko

sudo rmmod B_func
sudo rmmod A_func
