#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <hardware/pio.h>
#include "vga.h"

static uint8_t *fbpnt;

void draw(uint8_t *fb) {
    fbpnt = fb;
}