void setup() {
      Serial.begin(115200);
      pinMode(25, OUTPUT);
      delay(5000);
      Serial.println("  .:!JYGBBBBBGPY!:    .~JPGBB#BBG5J7^.  ");
      Serial.println("  J&GPY5JJJJJY55GB5. ?BBP5YYJJJJY55G#G  ");
      Serial.println("  5@Y???JJJJ?????JBG5&Y?????JJJJ????##. ");
      Serial.println("  ^&B????JJY55YJ??J@@5??JY555YJ????5@?  ");
      Serial.println("   !&BJ??????J5GG5B@@#5PGPYJ??????5&Y   ");
      Serial.println("    ^P#PJ??????J#@@@@@@@5??????J5BB!    ");
      Serial.println("      ^5##G55PB&@@&&&&@@@#GP5PB#P~.     ");
      Serial.println("      7P##BBB#@&BGPPPPGB#@#BB#&&B?.     ");
      Serial.println("    .G&BPPPG#@@BPPPPPPPPG&@BGPPG#@#^    ");
      Serial.println("    Y@GPGB&@@&&&&#BBBB###&&&&#BPPB@B    ");
      Serial.println("   :#@##@@#BGGGGGB@@@@#GGPPPGB&&##@@~   ");
      Serial.println(" .Y##B@@&GPPPPPPPPG@@BPPPPPPPPG#@&B#&P^ ");
      Serial.println(".B&GPP#@BPPPPPPPPPG@@BPPPPPPPPPG@BPPG@&~");
      Serial.println("J@GPPP&@BPPPPPPPPG#@@&GPPPPPPPPG@#PPPB@G");
      Serial.println("?@GPPG@@&BGPPPPGB&@&&&&#BGPPPGB&@&GPP#@G");
      Serial.println(".P@GG&@@@@@&#&&&#GGPPGGB#@&&&@@@&&#GB@B^");
      Serial.println("  Y@@#GGB#&@@@&GPPPPPPPPPB@@@#BGPPB@@G. ");
      Serial.println("   B@GPPPPGB&@#PPPPPPPPPPG@&GPPPPPG@&^  ");
      Serial.println("   ~@#PPPPPPG&@BPPPPPPPPG#&GPPPPPPB@J   ");
      Serial.println("    7&#GPPPPP#@@&#BGGBB#@@BPPPPPG#@5    ");
      Serial.println("     :Y###BBB&@@@&&###&&@@&BGB###P~     ");
      Serial.println("       .^JG&@@&GPPPPPPPPG#@@@BY~.       ");
      Serial.println("           :!JB#BGGGGGGB&#Y7^           ");
      Serial.println("              .!YGB###B57.              ");
      delay(7000);
}



void boot() {

  Serial.print('U-Boot 2023.02.-rc0 (Feb 27 2023 - 19:50:09) for ARDAVR5532');
  delay(1000);
  Serial.println("## Flattened Device Tree blob at 41f00000");
  delay(200);
  Serial.println("   Booting using the fdt blob at 0x41f00000");
  delay(200);
  Serial.println("   Loading Kernel Image ... OK");
  delay(200);
  Serial.println("OK");
  delay(200);
  Serial.println("   Using Device Tree in place at 41f00000, end 41f0a065");
  Serial.println("");
  delay(200);
  Serial.println("Starting kernel ...");
  Serial.println("");
  delay(200);
  Serial.println("[    0.000000] Booting Linux on physical CPU 0x0");
  Serial.println("[    0.000000] Linux version 3.10.52 (slabs@slabs-UX31E) (gcc version 4.8.3 20140401 (prerelease) (crosstool-NG linaro-1.13.1-4.8-2014.04 - Linaro GCC 4.8-2014.04) ) #1 SMP Tue May 19 18:03:16 IST 2015");
  Serial.println("[    0.000000] CPU: ARMv7 Processor [410fc0f4] revision 4 (ARMv7), cr=50c5387d");
  Serial.println("[    0.000000] CPU: PIPT / VIPT nonaliasing data cache, PIPT instruction cache");
  Serial.println("[    0.000000] Machine: RPI PICO (Flattened Device Tree), model: Insignal Arndale evaluation board based on RP2040");
  Serial.println("[    0.000000] NR_BANKS too low, ignoring high memory");
  Serial.println("[    0.000000] Memory policy: ECC disabled, Data cache writealloc");
  Serial.println("[    0.000000] CPU EXYNOS5250 (id 0x43520010)");
  Serial.println("[    0.000000] PERCPU: Embedded 9 pages/cpu @817a6000 s14464 r8192 d14208 u36864");
  Serial.println("[    0.000000] Built 1 zonelists in Zone order, mobility grouping on.  Total pages: 514576");
  Serial.println("[    0.000000] Kernel command line: console=tty0 console=ttySAC2,115200n8 drm_kms_helper.edid_firmware=edid-1920x1080.fw  root=UUID=a9b2def7-9fa1-423f-acb0-3725791a719b rootwait ro mac=02:0c:cc:99:a9:04");
  Serial.println("[    0.000000] PID hash table entries: 4096 (order: 2, 16384 bytes)");
  Serial.println("[    0.000000] Dentry cache hash table entries: 262144 (order: 8, 1048576 bytes)");
  Serial.println("[    0.000000] Inode-cache hash table entries: 131072 (order: 7, 524288 bytes)");
  Serial.println("[    0.000000] Memory: 48MB 216MB 1504MB 256MB = 2024MB total");
  Serial.println("[    0.000000] Memory: 2044164k/2060548k available, 28412k reserved, 262144K highmem");
  Serial.println("[    0.000000] Virtual kernel memory layout:");
  Serial.println("[    0.000000]     vector  : 0xffff0000 - 0xffff1000   (   4 kB)");
  Serial.println("[    0.000000]     fixmap  : 0xfff00000 - 0xfffe0000   ( 896 kB)");
  Serial.println("[    0.000000]     vmalloc : 0xf0000000 - 0xff000000   ( 240 MB)");
  Serial.println("[    0.000000]     lowmem  : 0x80000000 - 0xef800000   (1784 MB)");
  Serial.println("[    0.000000]     pkmap   : 0x7fe00000 - 0x80000000   (   2 MB)");
  Serial.println("[    0.000000]     modules : 0x7f800000 - 0x7fe00000   (   6 MB)");
  Serial.println("[    0.000000]       .text : 0x80008000 - 0x80646934   (6395 kB)");
  Serial.println("[    0.000000]       .init : 0x80647000 - 0x806a0880   ( 359 kB)");
  Serial.println("[    0.000000]       .data : 0x806a2000 - 0x8070f7e8   ( 438 kB)");
  Serial.println("[    0.000000]        .bss : 0x8070f7e8 - 0x807864a8   ( 476 kB)");
  Serial.println("[    0.000000] Hierarchical RCU implementation.");
  Serial.println("[    0.000000] NR_IRQS:549");
  Serial.println("[    0.000000] Exynos5250: clock setup completed, armclk=1000000000");
  Serial.println("[    0.000000] Architected cp15 timer(s) running at 24.00MHz (phys).");
  Serial.println("[    0.000000] Switching to timer-based delay loop");
  Serial.println("[    0.000000] sched_clock: ARM arch timer >56 bits at 24000kHz, resolution 41ns");
  Serial.println("[    0.000000] sched_clock: 32 bits at 200 Hz, resolution 5000000ns, wraps every 4294967291ms");
  Serial.println("[    0.000000] Console: colour dummy device 80x30");
  Serial.println("[    0.000000] console [tty0] enabled");
  delay(90);
  Serial.println("[    0.000942] Calibrating delay loop (skipped), value calculated using timer frequency.. 48.00 BogoMIPS (lpj=120000)");
  delay(200);
  Serial.println("[    0.000979] pid_max: default: 32768 minimum: 301");
  delay(200);
  Serial.println("[    0.001121] Security Framework initialized");
  delay(200);
  Serial.println("[    0.001151] AppArmor: AppArmor initialized");
  delay(200);
  Serial.println("[    0.001214] Mount-cache hash table entries: 512");
  delay(200);
  Serial.println("[    0.012821] CPU: Testing write buffer coherency: ok");
  delay(200);
  Serial.println("[    0.012867] ftrace: allocating 22872 entries in 45 pages");
  delay(200);
  Serial.println("[    0.033185] CPU0: thread -1, cpu 0, socket 0, mpidr 80000000");
  delay(200);
  Serial.println("[    0.033230] Setting up static identity map for 0x80435bc8 - 0x80435c14");
  delay(200);
  Serial.println("[    0.034283] CPU1: Booted secondary processor");
  delay(200);
  Serial.println("[    0.034311] CPU1: thread -1, cpu 1, socket 0, mpidr 80000001");
  delay(200);
  Serial.println("[    0.034425] Brought up 2 CPUs");
  delay(200);
  Serial.println("[    0.034453] SMP: Total of 2 processors activated (96.00 BogoMIPS).");
  delay(200);
  Serial.println("[    0.034463] CPU: All CPU(s) started in HYP mode.");
  delay(200);
  Serial.println("[    0.034473] CPU: Virtualization extensions available.");
  delay(200);
  Serial.println("[    0.035043] devtmpfs: initialized");
  delay(200);
  Serial.println("[    0.046107] xor: measuring software checksum speed");
  delay(200);
  Serial.println("[    0.092073]    arm4regs  :  1764.800 MB/sec");
  delay(200);
  Serial.println("[    0.141312]    8regs     :  1743.200 MB/sec");
  delay(200);
  Serial.println("[    0.190550]    32regs    :  1424.000 MB/sec");
  delay(200);
  Serial.println("[    0.190562] xor: using function: arm4regs (1764.800 MB/sec)");
  delay(200);
  Serial.println("[    0.190575] pinctrl core: initialized pinctrl subsystem");
  delay(200);
  Serial.println("[    0.191073] regulator-dummy: no parameters");
  delay(200);
  Serial.println("[    0.191358] NET: Registered protocol family 16");
  delay(200);
  Serial.println("[    0.191527] DMA: preallocated 256 KiB pool for atomic coherent allocations");
  delay(200);
  Serial.println("[    0.200727] of_clk_src_onecell_get: invalid clock index 346");
  delay(200);
  Serial.println("[    0.200743] ERROR: could not get clock /amba/mdma@10800000:apb_pclk(0)");
  delay(200);
  Serial.println("[    0.202644] hw-breakpoint: found 5 (+1 reserved) breakpoint and 4 watchpoint registers.");
  delay(200);
  Serial.println("[    0.202661] hw-breakpoint: maximum watchpoint size is 8 bytes.");
  delay(200);
  Serial.println("[    0.202701] S3C Power Management, Copyright 2004 Simtec Electronics");
  delay(200);
  Serial.println("[    0.202799] EXYNOS5250 PMU Initialize");
  delay(200);
  Serial.println("[    0.202809] RP2040: Initializing architecture");
  delay(200);
  Serial.println("[    0.219045] bio: create slab <bio-0> at 0");
  delay(200);
  Serial.println("[    0.299114] raid6: int32x1    196 MB/s");
  delay(200);
  Serial.println("[    0.382734] raid6: int32x2    300 MB/s");
  delay(200);
  Serial.println("[    0.466509] raid6: int32x4    328 MB/s");
  delay(200);
  Serial.println("[    0.550169] raid6: int32x8    473 MB/s");
  delay(200);
  Serial.println("[    0.550179] raid6: using algorithm int32x8 (473 MB/s)");
  delay(200);
  Serial.println("[    0.550190] raid6: using intx1 recovery algorithm");
  delay(200);
  Serial.println("[    0.550602] VDD_33ON_2.8V: 2800 mV ");
  delay(200);
  Serial.println("[    0.550812] hdmi-en: no parameters");
  delay(200);
  Serial.println("[    0.551706] SCSI subsystem initialized");
  delay(200);
  Serial.println("[    0.552547] usbcore: registered new interface driver usbfs");
  delay(200);
  Serial.println("[    0.552660] usbcore: registered new interface driver hub");
  delay(200);
  Serial.println("[    0.552811] usbcore: registered new device driver usb");
  delay(200);
  Serial.println("[    0.553347] s3c-i2c 12c60000.i2c: slave address 0x66");
  delay(200);
  Serial.println("[    0.553364] s3c-i2c 12c60000.i2c: bus frequency set to 18 KHz");
  delay(200);
  Serial.println("[    0.553948] sec_pmic 0-0066: No interrupt specified, no interrupts");
  delay(200);
  Serial.println("[    0.599370] VDD_ALIVE_1.0V: 1100 mV ");
  delay(200);
  Serial.println("[    0.624016] VDD_28IO_DP_1.35V: 1200 mV ");
  delay(200);
  Serial.println("[    0.648664] VDD_COMMON1_1.8V: 1800 mV ");
  delay(200);
  Serial.println("[    0.668382] VDD_IOPERI_1.8V: 1800 mV ");
  delay(200);
  Serial.println("[    0.693031] VDD_EXT_1.8V: 1800 mV ");
  delay(200);
  Serial.println("[    0.717668] VDD_MPLL_1.1V: 1100 mV ");
  delay(200);
  Serial.println("[    0.742312] VDD_XPLL_1.1V: 1100 mV ");
  delay(200);
  Serial.println("[    0.766963] VDD_COMMON2_1.0V: 1000 mV ");
  delay(200);
  Serial.println("[    0.786677] VDD_33ON_3.0V: 3000 mV ");
  delay(200);
  Serial.println("[    0.811322] VDD_COMMON3_1.8V: 1800 mV ");
  delay(200);
  Serial.println("[    0.835965] VDD_ABB2_1.8V: 1800 mV ");
  delay(200);
  Serial.println("[    0.860610] VDD_USB_3.0V: 3000 mV ");
  delay(200);
  Serial.println("[    0.885253] VDDQ_C2C_W_1.8V: 1800 mV ");
  delay(200);
  Serial.println("[    0.909899] VDD18_ABB0_3_1.8V: 1800 mV ");
  delay(200);
  Serial.println("[    0.934543] VDD10_COMMON4_1.0V: 1000 mV ");
  delay(200);
  Serial.println("[    0.959186] VDD18_HSIC_1.8V: 1800 mV ");
  delay(200);
  Serial.println("[    0.983828] VDDQ_MMC2_3_2.8V: 2800 mV ");
  delay(200);
  Serial.println("[    1.003546] VDD_33ON_2.8V: 2800 mV ");
  delay(200);
  Serial.println("[    1.008496] VDD_33ON_2.8V: Failed to create debugfs directory");
  delay(200);
  Serial.println("[    1.023266] EXT_33_OFF: 3300 mV ");
  delay(200);
  Serial.println("[    1.042980] EXT_28_OFF: 2800 mV ");
  delay(200);
  Serial.println("[    1.062696] PVDD_LDO25: 1200 mV ");
  delay(200);
  Serial.println("[    1.082412] EXT_18_OFF: 1800 mV ");
  delay(200);
  Serial.println("[    1.097197] vdd_mif: 950 <--> 1200 mV at 1000 mV ");
  delay(200);
  Serial.println("[    1.111984] vdd_arm: 925 <--> 1300 mV at 1100 mV ");
  delay(200);
  Serial.println("[    1.126792] vdd_int: 900 <--> 1200 mV at 1000 mV ");
  delay(200);
  Serial.println("[    1.151417] vdd_g3d: 1000 mV ");
  delay(200);
  Serial.println("[    1.166211] VDD_MEM_1.35V: 750 <--> 1350 mV at 1200 mV ");
  delay(200);
  Serial.println("[    1.176063] VDD_33_OFF_EXT1: 750 <--> 3000 mV at 2850 mV ");
  delay(200);
  Serial.println("[    1.181177] s3c-i2c 12c60000.i2c: i2c-0: S3C I2C adapter");
  delay(200);
  Serial.println("[    1.181262] s3c-i2c 12ce0000.i2c: slave address 0x00");
  delay(200);
  Serial.println("[    1.181278] s3c-i2c 12ce0000.i2c: bus frequency set to 65 KHz");
  delay(200);
  Serial.println("[    1.181446] s3c-i2c 12ce0000.i2c: i2c-8: S3C I2C adapter");
  delay(200);
  Serial.println("[    1.182546] NetLabel: Initializing");
  delay(200);
  Serial.println("[    1.182559] NetLabel:  domain hash size = 128");
  delay(200);
  Serial.println("[    1.182568] NetLabel:  protocols = UNLABELED CIPSOv4");
  delay(200);
  Serial.println("[    1.182628] NetLabel:  unlabeled traffic allowed by default");
  delay(200);
  Serial.println("[    1.182726] Switching to clocksource arch_sys_counter");
  delay(200);
  Serial.println("[    1.195892] AppArmor: AppArmor Filesystem Enabled");
  delay(200);
  Serial.println("[    1.207328] NET: Registered protocol family 2");
  delay(200);
  Serial.println("[    1.207766] TCP established hash table entries: 16384 (order: 5, 131072 bytes)");
  delay(200);
  Serial.println("[    1.208040] TCP bind hash table entries: 16384 (order: 6, 327680 bytes)");
  delay(200);
  Serial.println("[    1.208345] TCP: Hash tables configured (established 16384 bind 16384)");
  delay(200);
  Serial.println("[    1.208394] TCP: reno registered");
  delay(200);
  Serial.println("[    1.208411] UDP hash table entries: 1024 (order: 3, 49152 bytes)");
  delay(200);
  Serial.println("[    1.208477] UDP-Lite hash table entries: 1024 (order: 3, 49152 bytes)");
  delay(200);
  Serial.println("[    1.208695] NET: Registered protocol family 1");
  delay(200);
  Serial.println("[    1.208914] RPC: Registered named UNIX socket transport module.");
  delay(200);
  Serial.println("[    1.208928] RPC: Registered udp transport module.");
  delay(200);
  Serial.println("[    1.208938] RPC: Registered tcp transport module.");
  delay(200);
  Serial.println("[    1.208948] RPC: Registered tcp NFSv4.1 backchannel transport module.");
  delay(200);
  Serial.println("[    1.209091] Trying to unpack rootfs image as initramfs...");
  delay(200);
  Serial.println("[    1.321709] Freeing initrd memory: 2540K (82001000 - 8227c000)");
  delay(200);
  Serial.println("[    1.321908] hw perfevents: enabled with ARMv7_Cortex_A15 PMU driver, 7 counters available");
  delay(200);
  Serial.println("[    1.322913] audit: initializing netlink socket (disabled)");
  delay(200);
  Serial.println("[    1.322945] type=2000 audit(1.330:1): initialized");
  delay(200);
  Serial.println("[    1.324017] bounce pool size: 64 pages");
  delay(200);
  Serial.println("[    1.324171] VFS: Disk quotas dquot_6.5.2");
  Serial.println("[    1.324280] Dquot-cache hash table entries: 1024 (order 0, 4096 bytes)");
  Serial.println("[    1.324990] NFS: Registering the id_resolver key type");
  Serial.println("[    1.325025] Key type id_resolver registered");
  Serial.println("[    1.325036] Key type id_legacy registered");
  Serial.println("[    1.325068] jffs2: version 2.2. (NAND) (SUMMARY)  © 2001-2006 Red Hat, Inc.");
  Serial.println("[    1.325530] bio: create slab <bio-1> at 1");
  Serial.println("[    1.325838] Btrfs loaded");
  Serial.println("[    1.325858] msgmni has been set to 3485");
  Serial.println("[    1.326400] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 253)");
  Serial.println("[    1.326418] io scheduler noop registered");
  Serial.println("[    1.326429] io scheduler deadline registered");
  Serial.println("[    1.326461] io scheduler cfq registered (default)");
  Serial.println("[    1.335383] dma-pl330 121a0000.pdma: Loaded driver for PL330 DMAC-2364208");
  Serial.println("[    1.335403] dma-pl330 121a0000.pdma: 	DBUFF-32x4bytes Num_Chans-8 Num_Peri-32 Num_Events-32");
  Serial.println("[    1.339531] dma-pl330 121b0000.pdma: Loaded driver for PL330 DMAC-2364208");
  Serial.println("[    1.339551] dma-pl330 121b0000.pdma: 	DBUFF-32x4bytes Num_Chans-8 Num_Peri-32 Num_Events-32");
  Serial.println("[    1.340749] dma-pl330 11c10000.mdma: Loaded driver for PL330 DMAC-2364208");
  Serial.println("[    1.340766] dma-pl330 11c10000.mdma: 	DBUFF-64x8bytes Num_Chans-8 Num_Peri-1 Num_Events-32");
  Serial.println("[    1.414412] Serial: 8250/16550 driver, 4 ports, IRQ sharing disabled");
  Serial.println("[    1.415644] 12c00000.Serial: ttySAC0 at MMIO 0x12c00000 (irq = 83) is a S3C6400/10");
  Serial.println("[    1.415925] 12c10000.Serial: ttySAC1 at MMIO 0x12c10000 (irq = 84) is a S3C6400/10");
  Serial.println("[    1.416191] 12c20000.Serial: ttySAC2 at MMIO 0x12c20000 (irq = 85) is a S3C6400/10");
  Serial.println("[    2.268573] console [ttySAC2] enabled");
  Serial.println("[    2.272502] 12c30000.Serial: ttySAC3 at MMIO 0x12c30000 (irq = 86) is a S3C6400/10");
  Serial.println("[    2.280172] [drm] Initialized drm 1.1.0 20060810");
  Serial.println("[    2.291284] exynos-mixer 14450000.mixer: probe start");
  Serial.println("[    2.294738] exynos-mixer 14450000.mixer: failed to get clock 'mixer'");
  Serial.println("[    2.300958] [drm:mixer_probe] *ERROR* mixer_resources_init failed");
  Serial.println("[    2.306937] exynos-mixer 14450000.mixer: probe failed");
  Serial.println("[    2.313055] [drm] Supports vblank timestamp caching Rev 1 (10.10.2010).");
  Serial.println("[    2.318391] [drm] No driver support for vblank timestamp query.");
  Serial.println("[    2.324191] [drm:hdmi_subdrv_probe] *ERROR* mixer context not initialized.");
  Serial.println("[    2.331408] exynos-drm: probe of exynos-drm failed with error -22");
  Serial.println("[    2.343652] brd: module loaded");
  Serial.println("[    2.348775] loop: module loaded");
  Serial.println("[    2.351597] mtdoops: mtd device (mtddev=name/number) must be supplied");
  Serial.println("[    2.356757] tun: Universal TUN/TAP device driver, 1.6");
  Serial.println("[    2.361812] tun: (C) 1999-2004 Max Krasnyansky <maxk@qualcomm.com>");
  Serial.println("[    2.368208] usbcore: registered new interface driver asix");
  Serial.println("[    2.373168] usbcore: registered new interface driver ax88179_178a");
  Serial.println("[    2.379136] usbcore: registered new interface driver cdc_ether");
  Serial.println("[    2.384858] usbcore: registered new interface driver net1080");
  Serial.println("[    2.390418] usbcore: registered new interface driver cdc_subset");
  Serial.println("[    2.396216] usbcore: registered new interface driver zaurus");
  Serial.println("[    2.401715] usbcore: registered new interface driver cdc_ncm");
  Serial.println("[    2.407140] ehci_hcd: USB 2.0 'Enhanced' Host Controller (EHCI) Driver");
  Serial.println("[    2.413558] ehci-s5p: EHCI s5p driver");
  Serial.println("[    2.417191] unable to find transceiver of type USB2 PHY");
  Serial.println("[    2.422263] s5p-ehci 12110000.usb: no platform data or transceiver defined");
  Serial.println("[    2.429013] platform 12110000.usb: Driver s5p-ehci requests probe deferral");
  Serial.println("[    2.435861] ohci_hcd: USB 1.1 'Open' Host Controller (OHCI) Driver");
  Serial.println("[    2.442015] unable to find transceiver of type USB2 PHY");
  Serial.println("[    2.446959] rpi-ohci 12120000.usb: no platform data or transceiver defined");
  Serial.println("[    2.453954] platform 12120000.usb: Driver exynos-ohci requests probe deferral");
  Serial.println("[    2.461813] mousedev: PS/2 mouse device common for all mice");
  Serial.println("[    2.467738] Exynos: Kernel Thermal management registered");
  Serial.println("[    2.471985] device-mapper: ioctl: 4.24.0-ioctl (2013-01-15) initialised: dm-devel@redhat.com");
  Serial.println("[    2.480140] cpuidle: using governor ladder");
  Serial.println("[    2.484006] cpuidle: using governor menu");
  Serial.println("[    2.487892] Synopsys Designware Multimedia Card Interface Driver");
  Serial.println("[    2.494051] dwmmc_exynos 12200000.dwmmc0: Using internal DMA controller.");
  Serial.println("[    2.500258] dwmmc_exynos 12200000.dwmmc0: Version ID is 241a");
  Serial.println("[    2.505883] dwmmc_exynos 12200000.dwmmc0: DW MMC controller at irq 107, 32 bit host data width, 128 deep fifo");
  Serial.println("[    2.525938] mmc_host mmc0: Bus speed (slot 0) = 100000000Hz (slot req 400000Hz, actual 400000HZ div = 125)");
  Serial.println("[    2.545662] dwmmc_exynos 12200000.dwmmc0: 1 slots initialized");
  Serial.println("[    2.550048] dwmmc_exynos 12220000.dwmmc2: Using internal DMA controller.");
  Serial.println("[    2.556458] dwmmc_exynos 12220000.dwmmc2: Version ID is 241a");
  Serial.println("[    2.562084] dwmmc_exynos 12220000.dwmmc2: DW MMC controller at irq 109, 32 bit host data width, 128 deep fifo");
  Serial.println("[    2.584983] mmc_host mmc1: Bus speed (slot 0) = 100000000Hz (slot req 400000Hz, actual 400000HZ div = 125)");
  Serial.println("[    2.593067] mmc0: BKOPS_EN bit is not set");
  Serial.println("[    2.598174] mmc_host mmc0: Bus speed (slot 0) = 100000000Hz (slot req 52000000Hz, actual 50000000HZ div = 1)");
  Serial.println("[    2.606675] dwmmc_exynos 12220000.dwmmc2: 1 slots initialized");
  Serial.println("[    2.606882] mmc0: new high speed DDR MMC card at address 0001");
  Serial.println("[    2.607489] mmcblk0: mmc0:0001 M8G1WA 7.28 GiB ");
  Serial.println("[    2.607895] mmcblk0boot1: mmc0:0001 M8G1WA partition 2 2.00 MiB");
  Serial.println("[    2.608082] mmcblk0rpmb: mmc0:0001 M8G1WA partition 3 128 KiB");
  Serial.println("[    2.609067]  mmcblk0: p1 p2 p3 p4");
  Serial.println("[    2.612807]  mmcblk0boot1: unknown partition table");
  Serial.println("[    2.614093]  mmcblk0boot0: unknown partition table");
  Serial.println("[    2.652735] usbcore: registered new interface driver usbhid");
  Serial.println("[    2.657706] usbhid: USB HID core driver");
  Serial.println("[    2.661974] oprofile: using timer interrupt.");
  Serial.println("[    2.662721] mmc_host mmc1: Bus speed (slot 0) = 100000000Hz (slot req 50000000Hz, actual 50000000HZ div = 1)");
  Serial.println("[    2.662794] mmc1: new high speed SDHC card at address 1234");
  Serial.println("[    2.663356] mmcblk1: mmc1:1234 SA16G 14.4 GiB ");
  Serial.println("[    2.665062]  mmcblk1: p1 p2 p3");
  Serial.println("[    2.688228] TCP: cubic registered");
  Serial.println("[    2.691264] Initializing XFRM netlink socket");
  Serial.println("[    2.695511] NET: Registered protocol family 10");
  Serial.println("[    2.700277] sit: IPv6 over IPv4 tunneling driver");
  Serial.println("[    2.704938] NET: Registered protocol family 17");
  Serial.println("[    2.708710] NET: Registered protocol family 15");
  Serial.println("[    2.713152] Key type dns_resolver registered");
  Serial.println("[    2.717298] VFP support v0.3: implementor 41 architecture 4 part 30 variant f rev 0");
  Serial.println("[    2.724764] Registering SWP/SWPB emulation handler");
  Serial.println("[    2.729753] mfc-power-domain: Power-off latency exceeded, new value 260167 ns");
  Serial.println("[    2.736461] gsc-power-domain: Power-off latency exceeded, new value 6997875 ns");
  Serial.println("[    2.745301] EXT_28_OFF: disabling");
  Serial.println("[    2.753406] VDD_33ON_2.8V: disabling");
  Serial.println("[    2.761765] hdmi-en: disabling");
  Serial.println("[    2.763329] regulator-dummy: disabling");
  Serial.println("[    2.767266] s5p-ehci 12110000.usb: EHCI Host Controller");
  delay(200);
  Serial.println("[    2.772137] s5p-ehci 12110000.usb: new USB bus registered, assigned bus number 1");
  delay(200);
  Serial.println("[    2.779431] s5p-ehci 12110000.usb: irq 103, io mem 0x12110000");
  delay(200);
  Serial.println("[    2.791623] s5p-ehci 12110000.usb: USB 2.0 started, EHCI 1.00");
  delay(200);
  Serial.println("[    2.796363] hub 1-0:1.0: USB hub found");
  delay(200);
  Serial.println("[    2.799516] hub 1-0:1.0: 3 ports detected");
  delay(200);
  Serial.println("[    2.803737] samsung-usb2phy 12130000.usbphy: Already power on PHY");
  delay(200);
  Serial.println("[    2.809415] rpy-ohci 12120000.usb: EXYNOS OHCI Host Controller");
  delay(200);
  Serial.println("[    2.815399] rpy-ohci 12120000.usb: new USB bus registered, assigned bus number 2");
  delay(200);
  Serial.println("[    2.822934] rpy-ohci 12120000.usb: irq 103, io mem 0x12120000");
  delay(200);
  Serial.println("[    2.884634] hub 2-0:1.0: USB hub found");
  delay(200);
  Serial.println("[    2.886891] hub 2-0:1.0: 3 ports detected");
  delay(200);
  Serial.println("[    2.891713] input: gpio_keys.3 as /devices/gpio_keys.3/input/input0");
  delay(200);
  Serial.println("[    2.897295] drivers/rtc/hctosys.c: unable to open rtc device (rtc0)");
  delay(200);
  Serial.println("[    2.916118] Freeing unused kernel memory: 356K (80647000 - 806a0000)");
  delay(200);
  Serial.println("Loading, please wait...");
  delay(2000);
  Serial.println("[    4.944722] systemd-udevd[1208]: starting version 204");
  delay(500);
  Serial.println("Begin: Loading essential drivers ... done.");
  delay(500);
  Serial.println("Begin: Running /scripts/init-premount ... done.");
  delay(500);
  Serial.println("Begin: Mounting root file system ... Begin: Running /scripts/local-top ... done.");
  delay(500);
  Serial.println("Begin: Running /scripts/local-premount ... done.");
  delay(500);
  Serial.println("[    3.190963] EXT4-fs (mmcblk1p3): mounted filesystem with ordered data mode. Opts: (null)");
  delay(500);
  Serial.println("Begin: Running /scripts/local-bottom ... done.");
  delay(200);
  Serial.println("done.");
}

void loop() {
  boot();
  Serial.print("#~/");
  while(1) {
    digitalWrite(25, HIGH);
  }
}
