#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

void fprintf_u32(FILE* file, const char* format_string, uint32_t value) {
    fprintf(file, format_string, value);
}

void fprintf_usize(FILE* file, const char* format_string, size_t value) {
    fprintf(file, format_string, value);
}

void fprintf_u8(FILE* file, const char* format_string, uint8_t value) {
    fprintf(file, format_string, value);
}

void fprintf_f64(FILE* file, const char* format_string, double value) {
    fprintf(file, format_string, value);
}
