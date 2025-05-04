/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/init.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/sys/sys_io.h>
#include <zephyr/devicetree.h>

static int pinmux_nrfmicro_init(void) {
#if (CONFIG_BOARD_NRFMICRO_13 || CONFIG_BOARD_NRFMICRO_13_52833)
    const struct device *p0 = DEVICE_DT_GET(DT_NODELABEL(gpio0));
#endif
    return 0;
}

SYS_INIT(pinmux_nrfmicro_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);
