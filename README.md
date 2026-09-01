# Official Kernel Source for Motorola Edge 70 Fusion (`marvel` / `avenger`)

<p align="center">
  <img src="https://fdn2.gsmarena.com/vv/pics/motorola/motorola-edge-70-5g-1.jpg" alt="Motorola Edge 70 Fusion" width="340"/>
</p>

This repository contains the official Linux 6.1 (Android 16 GKI 2.0) kernel source code for the **Motorola Edge 70 Fusion** (Codename: `marvel` / `avenger`, Model: `XT2605` series).

---

## 📱 Hardware & Platform Specs

| Feature | Specification |
| :--- | :--- |
| **SoC** | Qualcomm Snapdragon 7s Gen 3 / SM7750 (`pineapple` MSM platform) |
| **Kernel Version** | Linux 6.1.134 (`Curry Ramen`) |
| **GKI Architecture** | Android 16 Generic Kernel Image (Header v4) |
| **Defconfig** | `arch/arm64/configs/vendor/ext_config/moto-pineapple-marvel.config` |
| **Compiler** | AOSP Clang 18+ / LLVM Toolchain |

---

## 🛠️ How to Compile

### 1. Set Up Environment
```bash
export ARCH=arm64
export SUBARCH=arm64
export CROSS_COMPILE=aarch64-linux-gnu-
export CROSS_COMPILE_ARM32=arm-linux-gnueabi-
export CC=clang
export CLANG_TRIPLE=aarch64-linux-gnu-
```

### 2. Configure the Kernel
```bash
make O=out ARCH=arm64 gki_defconfig
make O=out ARCH=arm64 vendor/ext_config/moto-pineapple-marvel.config
```

### 3. Build Kernel & Device Tree Blobs
```bash
make O=out ARCH=arm64 -j$(nproc --all) Image dtbs
```

---

**Maintainer:** Shripad (@shripad-jyothinath)