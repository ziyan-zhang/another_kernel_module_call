cmd_/home/zy/lab/another_kernel_module_call/module_b/modules.order := {   echo /home/zy/lab/another_kernel_module_call/module_b/B_func.ko; :; } | awk '!x[$$0]++' - > /home/zy/lab/another_kernel_module_call/module_b/modules.order
