#include <stdint.h>

#define sti() asm volatile("sti")

void cpuid(uint32_t id, uint32_t *eax, uint32_t *ebx, uint32_t *ecx, uint32_t *edx);