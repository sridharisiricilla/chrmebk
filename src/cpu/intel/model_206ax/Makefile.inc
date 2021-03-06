ramstage-y += model_206ax_init.c
subdirs-y += ../../x86/name
subdirs-y += ../smm/gen1
subdirs-y += ../common

subdirs-y += ../../x86/tsc
subdirs-y += ../../x86/mtrr
subdirs-y += ../../x86/lapic
subdirs-y += ../../x86/cache
subdirs-y += ../../x86/smm
subdirs-y += ../microcode
subdirs-y += ../turbo

ramstage-y += acpi.c

ramstage-y += common.c
romstage-y += common.c
smm-y += common.c

ramstage-y += tsc_freq.c
romstage-y += tsc_freq.c
postcar-y += tsc_freq.c
smm-y += tsc_freq.c

smm-y += finalize.c

cpu_microcode_bins += $(wildcard 3rdparty/intel-microcode/intel-ucode/06-2a-*)
cpu_microcode_bins += $(wildcard 3rdparty/intel-microcode/intel-ucode/06-3a-*)

cpu_incs-y += $(src)/cpu/intel/car/non-evict/cache_as_ram.S
postcar-y += ../car/non-evict/exit_car.S

romstage-y += ../car/romstage.c
