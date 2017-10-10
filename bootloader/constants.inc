; General constants
BOOT_SIGNATURE equ 0xAA55
STACK_SEGMENT_ADDR equ 0x6E0
STACK_POINTER_ADDR equ 0x200

; Stage 1 related constants
STAGE_ONE_SECTOR_COUNT equ 1 ; Must be 1!!!
STAGE_ONE_SEGMENT_ADDR equ 0x7C0

; Stage 2 related constants
STAGE_TWO_SECTOR_COUNT equ 2
STAGE_TWO_SEGMENT_ADDR equ 0x1E0

; Kernel constants
KERNEL_PRELOAD_SEGMENT equ 0xF000
KERNEL_PRELOAD_SIZE equ 576