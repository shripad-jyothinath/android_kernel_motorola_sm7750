#ifndef _UAPI_LINUX_QTI_SMMU_PROXY_H
#define _UAPI_LINUX_QTI_SMMU_PROXY_H

#include <linux/ioctl.h>
#include <linux/types.h>

struct csf_version {
    __u32 arch_ver;
    __u32 max_ver;
};

#define QTI_SMMU_PROXY_GET_VERSION_IOCTL _IOR('q', 1, struct csf_version)

#endif /* _UAPI_LINUX_QTI_SMMU_PROXY_H */
