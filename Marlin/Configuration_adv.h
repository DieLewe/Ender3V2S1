/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 */
#pragma once

#define CONFIGURATION_ADV_H_VERSION 02010300

// === PROBE OFFSET WIZARD ===
#define PROBE_OFFSET_WIZARD
#define PROBE_OFFSET_WIZARD_START_Z -2.0

// === BABYSTEPPING ===
#define BABYSTEPPING
#define BABYSTEP_WITHOUT_HOMING
#define BABYSTEP_ALWAYS_AVAILABLE
#define BABYSTEP_MULTIPLICATOR_Z 1
#define BABYSTEP_MULTIPLICATOR_XY 1

// === BABYSTEP ZPROBE OFFSET (for live z-offset adjustment) ===
#define BABYSTEP_ZPROBE_OFFSET
#define BABYSTEP_ZPROBE_GFX_OVERLAY

// === TEMPERATURE ===
#define THERMOCOUPLE_MAX_ERRORS 15

// === ENDSTOP HANDLING ===
#define ENDSTOP_ABORT_ON_HOME
#define ENDSTOP_INTERRUPTS_FEATURE

// === ADAPTIVE MOTION ===
#define ADAPTIVE_STEP_SMOOTHING

// === STEPPER DEACTIVATION ===
#define DEFAULT_STEPPER_DEACTIVE_TIME 120

// === BUFFER & PERFORMANCE ===
#define BLOCK_BUFFER_SIZE 16
#define MAX_CMD_SIZE 96
#define BUFSIZE 4

// === VERBOSE OUTPUT ===
#define VERBOSE_M114

// === DISABLED FEATURES (Memory Optimization) ===
//#define LIN_ADVANCE
//#define ARC_SUPPORT
//#define SDCARD_SORT_ALPHA
//#define FILAMENT_RUNOUT_SENSOR
//#define POWER_LOSS_RECOVERY
//#define ADVANCED_PAUSE_FEATURE
// Note: DWIN temperature graphs/advanced UI disabled by default in PROUI

#endif // CONFIGURATION_ADV_H
