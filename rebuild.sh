#!/bin/bash
make modules -j`nproc` NV_BUILD_TYPE=debug NV_VERBOSE=1
sudo rmmod nvidia_uvm
sudo insmod kernel-open/nvidia-uvm.ko
