#ifndef _UAPI_LINUX_MSM_AUDIO_H
#define _UAPI_LINUX_MSM_AUDIO_H

#include <linux/types.h>
#include <linux/ioctl.h>

#define AUDIO_IOCTL_MAGIC 'a'
#define IOCTL_MAP_PHYS_ADDR _IOW(AUDIO_IOCTL_MAGIC, 252, unsigned int)
#define IOCTL_UNMAP_PHYS_ADDR _IOW(AUDIO_IOCTL_MAGIC, 253, unsigned int)
#define IOCTL_MAP_HYP_ASSIGN _IOW(AUDIO_IOCTL_MAGIC, 254, unsigned int)
#define IOCTL_UNMAP_HYP_ASSIGN _IOW(AUDIO_IOCTL_MAGIC, 255, unsigned int)

#endif
