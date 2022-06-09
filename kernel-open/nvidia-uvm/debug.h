#ifndef NVIDIA_UVM_DEBUG_H
#define NVIDIA_UVM_DEBUG_H

#ifdef SAIT_DEBUG
#define sait_dbg(fmt, ...) \
	printk(KERN_INFO pr_fmt(fmt), ##__VA_ARGS__)
#else
#define sait_dbg(fmt, ...) \
	no_printk(KERN_DEBUG pr_fmt(fmt), ##__VA_ARGS__)
#endif

#endif /* NVIDIA_UVM_DEBUG_H */
