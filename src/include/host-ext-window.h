/***********************************************************************
**
**  REBOL [R3] Language Interpreter and Run-time Environment
**  Copyright 2012 REBOL Technologies
**  REBOL is a trademark of REBOL Technologies
**  Licensed under the Apache License, Version 2.0
**  This is a code-generated file.
**
************************************************************************
**
**  Title: REBOL Window
**  Build: A0
**  Date:  14-Jan-2021
**  File:  host-ext-window
**
**  AUTO-GENERATED FILE - Do not modify. (From: make-host-ext.reb)
**
***********************************************************************/

enum window_commands {
	CMD_WINDOW_INIT_WORDS,
	CMD_WINDOW_INIT_TOP_WINDOW,
	CMD_WINDOW_CURSOR,
	CMD_WINDOW_SHOW,
	CMD_WINDOW_GUI_METRIC,
	CMD_WINDOW_SHOW_SOFT_KEYBOARD,
	CMD_WINDOW_VIEW,
	CMD_WINDOW_UNVIEW,
	CMD_WINDOW_HANDLE_EVENTS,
	CMD_WINDOW_UNHANDLE_EVENTS,
	CMD_WINDOW_HANDLED_EVENTSQ,
	CMD_WINDOW_DO_EVENTS,
	CMD_WINDOW_INIT_VIEW_SYSTEM,
};

enum window_words {
	W_WINDOW_0,
	W_WINDOW_BUTTON,
	W_WINDOW_CHECK,
	W_WINDOW_RADIO,
	W_WINDOW_FIELD,
	W_WINDOW_AREA,
	W_WINDOW_TEXT,
	W_WINDOW_TEXT_LIST,
	W_WINDOW_PROGRESS,
	W_WINDOW_SLIDER,
	W_WINDOW_DATE_TIME,
	W_WINDOW_GROUP_BOX,
	W_WINDOW_OPENGL,
	W_WINDOW_BASE,
	W_WINDOW_BORDER_FIXED,
	W_WINDOW_BORDER_SIZE,
	W_WINDOW_SCREEN_SIZE,
	W_WINDOW_VIRTUAL_SCREEN_SIZE,
	W_WINDOW_LOG_SIZE,
	W_WINDOW_PHYS_SIZE,
	W_WINDOW_SCREEN_DPI,
	W_WINDOW_SCREENS,
	W_WINDOW_SCREEN_ORIGIN,
	W_WINDOW_TITLE_SIZE,
	W_WINDOW_WINDOW_MIN_SIZE,
	W_WINDOW_WORK_ORIGIN,
	W_WINDOW_WORK_SIZE,
	W_WINDOW_RESTORE,
	W_WINDOW_MINIMIZE,
	W_WINDOW_MAXIMIZE,
	W_WINDOW_ACTIVATE,
};

#ifdef INCLUDE_EXT_DATA
const unsigned char RX_window[] = {
	82, 69, 66, 79, 76, 32, 91, 83, 121, 115, 
	116, 101, 109, 58, 32, 123, 82, 69, 66, 79, 
	76, 32, 91, 82, 51, 93, 32, 76, 97, 110, 
	103, 117, 97, 103, 101, 32, 73, 110, 116, 101, 
	114, 112, 114, 101, 116, 101, 114, 32, 97, 110, 
	100, 32, 82, 117, 110, 45, 116, 105, 109, 101, 
	32, 69, 110, 118, 105, 114, 111, 110, 109, 101, 
	110, 116, 125, 32, 84, 105, 116, 108, 101, 58, 
	32, 34, 82, 69, 66, 79, 76, 32, 87, 105, 
	110, 100, 111, 119, 34, 32, 65, 117, 116, 104, 
	111, 114, 58, 32, 91, 34, 82, 105, 99, 104, 
	97, 114, 100, 32, 83, 109, 111, 108, 97, 107, 
	34, 32, 34, 67, 97, 114, 108, 32, 83, 97, 
	115, 115, 101, 110, 114, 97, 116, 104, 34, 32, 
	34, 79, 108, 100, 101, 115, 34, 93, 32, 82, 
	105, 103, 104, 116, 115, 58, 32, 123, 10, 94, 
	45, 94, 45, 67, 111, 112, 121, 114, 105, 103, 
	104, 116, 32, 50, 48, 49, 50, 32, 82, 69, 
	66, 79, 76, 32, 84, 101, 99, 104, 110, 111, 
	108, 111, 103, 105, 101, 115, 10, 94, 45, 94, 
	45, 82, 69, 66, 79, 76, 32, 105, 115, 32, 
	97, 32, 116, 114, 97, 100, 101, 109, 97, 114, 
	107, 32, 111, 102, 32, 82, 69, 66, 79, 76, 
	32, 84, 101, 99, 104, 110, 111, 108, 111, 103, 
	105, 101, 115, 10, 94, 45, 94, 45, 10, 94, 
	45, 94, 45, 65, 100, 100, 105, 116, 105, 111, 
	110, 97, 108, 32, 99, 111, 100, 101, 32, 109, 
	111, 100, 105, 102, 105, 99, 97, 116, 105, 111, 
	110, 115, 32, 97, 110, 100, 32, 105, 109, 112, 
	114, 111, 118, 101, 109, 101, 110, 116, 115, 32, 
	67, 111, 112, 121, 114, 105, 103, 104, 116, 32, 
	50, 48, 49, 50, 32, 83, 97, 112, 104, 105, 
	114, 105, 111, 110, 32, 65, 71, 10, 94, 45, 
	125, 32, 76, 105, 99, 101, 110, 115, 101, 58, 
	32, 123, 10, 94, 45, 94, 45, 76, 105, 99, 
	101, 110, 115, 101, 100, 32, 117, 110, 100, 101, 
	114, 32, 116, 104, 101, 32, 65, 112, 97, 99, 
	104, 101, 32, 76, 105, 99, 101, 110, 115, 101, 
	44, 32, 86, 101, 114, 115, 105, 111, 110, 32, 
	50, 46, 48, 46, 10, 94, 45, 94, 45, 83, 
	101, 101, 58, 32, 104, 116, 116, 112, 58, 47, 
	47, 119, 119, 119, 46, 97, 112, 97, 99, 104, 
	101, 46, 111, 114, 103, 47, 108, 105, 99, 101, 
	110, 115, 101, 115, 47, 76, 73, 67, 69, 78, 
	83, 69, 45, 50, 46, 48, 10, 94, 45, 125, 
	32, 78, 97, 109, 101, 58, 32, 119, 105, 110, 
	100, 111, 119, 32, 84, 121, 112, 101, 58, 32, 
	101, 120, 116, 101, 110, 115, 105, 111, 110, 32, 
	69, 120, 112, 111, 114, 116, 115, 58, 32, 91, 
	105, 110, 105, 116, 45, 119, 111, 114, 100, 115, 
	32, 105, 110, 105, 116, 45, 116, 111, 112, 45, 
	119, 105, 110, 100, 111, 119, 32, 99, 117, 114, 
	115, 111, 114, 32, 115, 104, 111, 119, 32, 103, 
	117, 105, 45, 109, 101, 116, 114, 105, 99, 32, 
	115, 104, 111, 119, 45, 115, 111, 102, 116, 45, 
	107, 101, 121, 98, 111, 97, 114, 100, 32, 118, 
	105, 101, 119, 32, 117, 110, 118, 105, 101, 119, 
	32, 104, 97, 110, 100, 108, 101, 45, 101, 118, 
	101, 110, 116, 115, 32, 117, 110, 104, 97, 110, 
	100, 108, 101, 45, 101, 118, 101, 110, 116, 115, 
	32, 104, 97, 110, 100, 108, 101, 100, 45, 101, 
	118, 101, 110, 116, 115, 63, 32, 100, 111, 45, 
	101, 118, 101, 110, 116, 115, 32, 105, 110, 105, 
	116, 45, 118, 105, 101, 119, 45, 115, 121, 115, 
	116, 101, 109, 93, 32, 78, 111, 116, 101, 58, 
	32, 34, 82, 117, 110, 32, 109, 97, 107, 101, 
	45, 104, 111, 115, 116, 45, 101, 120, 116, 46, 
	114, 32, 116, 111, 32, 99, 111, 110, 118, 101, 
	114, 116, 34, 93, 32, 119, 111, 114, 100, 115, 
	58, 32, 91, 98, 117, 116, 116, 111, 110, 32, 
	99, 104, 101, 99, 107, 32, 114, 97, 100, 105, 
	111, 32, 102, 105, 101, 108, 100, 32, 97, 114, 
	101, 97, 32, 116, 101, 120, 116, 32, 116, 101, 
	120, 116, 45, 108, 105, 115, 116, 32, 112, 114, 
	111, 103, 114, 101, 115, 115, 32, 115, 108, 105, 
	100, 101, 114, 32, 100, 97, 116, 101, 45, 116, 
	105, 109, 101, 32, 103, 114, 111, 117, 112, 45, 
	98, 111, 120, 32, 111, 112, 101, 110, 103, 108, 
	32, 98, 97, 115, 101, 32, 98, 111, 114, 100, 
	101, 114, 45, 102, 105, 120, 101, 100, 32, 98, 
	111, 114, 100, 101, 114, 45, 115, 105, 122, 101, 
	32, 115, 99, 114, 101, 101, 110, 45, 115, 105, 
	122, 101, 32, 118, 105, 114, 116, 117, 97, 108, 
	45, 115, 99, 114, 101, 101, 110, 45, 115, 105, 
	122, 101, 32, 108, 111, 103, 45, 115, 105, 122, 
	101, 32, 112, 104, 121, 115, 45, 115, 105, 122, 
	101, 32, 115, 99, 114, 101, 101, 110, 45, 100, 
	112, 105, 32, 115, 99, 114, 101, 101, 110, 115, 
	32, 115, 99, 114, 101, 101, 110, 45, 111, 114, 
	105, 103, 105, 110, 32, 116, 105, 116, 108, 101, 
	45, 115, 105, 122, 101, 32, 119, 105, 110, 100, 
	111, 119, 45, 109, 105, 110, 45, 115, 105, 122, 
	101, 32, 119, 111, 114, 107, 45, 111, 114, 105, 
	103, 105, 110, 32, 119, 111, 114, 107, 45, 115, 
	105, 122, 101, 32, 114, 101, 115, 116, 111, 114, 
	101, 32, 109, 105, 110, 105, 109, 105, 122, 101, 
	32, 109, 97, 120, 105, 109, 105, 122, 101, 32, 
	97, 99, 116, 105, 118, 97, 116, 101, 93, 32, 
	105, 110, 105, 116, 45, 119, 111, 114, 100, 115, 
	58, 32, 99, 111, 109, 109, 97, 110, 100, 32, 
	91, 119, 111, 114, 100, 115, 32, 91, 98, 108, 
	111, 99, 107, 33, 93, 93, 32, 105, 110, 105, 
	116, 45, 119, 111, 114, 100, 115, 32, 119, 111, 
	114, 100, 115, 32, 105, 110, 105, 116, 45, 116, 
	111, 112, 45, 119, 105, 110, 100, 111, 119, 58, 
	32, 99, 111, 109, 109, 97, 110, 100, 32, 91, 
	34, 73, 110, 105, 116, 105, 97, 108, 105, 122, 
	101, 32, 119, 105, 110, 100, 111, 119, 32, 115, 
	117, 98, 115, 121, 115, 116, 101, 109, 46, 34, 
	32, 103, 111, 98, 32, 91, 103, 111, 98, 33, 
	93, 32, 34, 84, 104, 101, 32, 115, 99, 114, 
	101, 101, 110, 32, 103, 111, 98, 32, 40, 114, 
	111, 111, 116, 32, 103, 111, 98, 41, 34, 93, 
	32, 99, 117, 114, 115, 111, 114, 58, 32, 99, 
	111, 109, 109, 97, 110, 100, 32, 91, 34, 67, 
	104, 97, 110, 103, 101, 115, 32, 116, 104, 101, 
	32, 109, 111, 117, 115, 101, 32, 99, 117, 114, 
	115, 111, 114, 32, 105, 109, 97, 103, 101, 46, 
	34, 32, 105, 109, 97, 103, 101, 32, 91, 105, 
	110, 116, 101, 103, 101, 114, 33, 32, 105, 109, 
	97, 103, 101, 33, 32, 110, 111, 110, 101, 33, 
	93, 93, 32, 115, 104, 111, 119, 58, 32, 99, 
	111, 109, 109, 97, 110, 100, 32, 91, 123, 68, 
	105, 115, 112, 108, 97, 121, 32, 111, 114, 32, 
	117, 112, 100, 97, 116, 101, 32, 97, 32, 103, 
	114, 97, 112, 104, 105, 99, 97, 108, 32, 111, 
	98, 106, 101, 99, 116, 32, 111, 114, 32, 98, 
	108, 111, 99, 107, 32, 111, 102, 32, 116, 104, 
	101, 109, 46, 125, 32, 103, 111, 98, 32, 91, 
	103, 111, 98, 33, 32, 110, 111, 110, 101, 33, 
	32, 98, 108, 111, 99, 107, 33, 93, 93, 32, 
	103, 117, 105, 45, 109, 101, 116, 114, 105, 99, 
	58, 32, 99, 111, 109, 109, 97, 110, 100, 32, 
	91, 34, 82, 101, 116, 117, 114, 110, 115, 32, 
	115, 112, 101, 99, 105, 102, 105, 99, 32, 103, 
	117, 105, 32, 114, 101, 108, 97, 116, 101, 100, 
	32, 109, 101, 116, 114, 105, 99, 32, 115, 101, 
	116, 116, 105, 110, 103, 46, 34, 32, 107, 101, 
	121, 119, 111, 114, 100, 32, 91, 119, 111, 114, 
	100, 33, 93, 32, 123, 65, 118, 97, 105, 108, 
	97, 98, 108, 101, 32, 107, 101, 121, 119, 111, 
	114, 100, 115, 58, 32, 83, 67, 82, 69, 69, 
	78, 83, 44, 32, 66, 79, 82, 68, 69, 82, 
	45, 70, 73, 88, 69, 68, 44, 32, 66, 79, 
	82, 68, 69, 82, 45, 83, 73, 90, 69, 44, 
	32, 83, 67, 82, 69, 69, 78, 45, 68, 80, 
	73, 44, 32, 76, 79, 71, 45, 83, 73, 90, 
	69, 44, 32, 80, 72, 89, 83, 45, 83, 73, 
	90, 69, 44, 32, 83, 67, 82, 69, 69, 78, 
	45, 83, 73, 90, 69, 44, 32, 86, 73, 82, 
	84, 85, 65, 76, 45, 83, 67, 82, 69, 69, 
	78, 45, 83, 73, 90, 69, 44, 32, 84, 73, 
	84, 76, 69, 45, 83, 73, 90, 69, 44, 32, 
	87, 73, 78, 68, 79, 87, 45, 77, 73, 78, 
	45, 83, 73, 90, 69, 44, 32, 87, 79, 82, 
	75, 45, 79, 82, 73, 71, 73, 78, 32, 97, 
	110, 100, 32, 87, 79, 82, 75, 45, 83, 73, 
	90, 69, 46, 125, 32, 47, 115, 101, 116, 32, 
	118, 97, 108, 32, 123, 86, 97, 108, 117, 101, 
	32, 117, 115, 101, 100, 32, 116, 111, 32, 115, 
	101, 116, 32, 115, 112, 101, 99, 105, 102, 105, 
	99, 32, 115, 101, 116, 116, 105, 110, 103, 40, 
	119, 111, 114, 107, 115, 32, 111, 110, 108, 121, 
	32, 111, 110, 32, 39, 119, 114, 105, 116, 97, 
	98, 108, 101, 39, 32, 107, 101, 121, 119, 111, 
	114, 100, 115, 41, 46, 125, 32, 47, 100, 105, 
	115, 112, 108, 97, 121, 32, 105, 100, 120, 32, 
	91, 105, 110, 116, 101, 103, 101, 114, 33, 93, 
	32, 34, 68, 105, 115, 112, 108, 97, 121, 32, 
	105, 110, 100, 101, 120, 44, 32, 115, 116, 97, 
	114, 116, 105, 110, 103, 32, 119, 105, 116, 104, 
	32, 48, 34, 93, 32, 115, 104, 111, 119, 45, 
	115, 111, 102, 116, 45, 107, 101, 121, 98, 111, 
	97, 114, 100, 58, 32, 99, 111, 109, 109, 97, 
	110, 100, 32, 91, 34, 68, 105, 115, 112, 108, 
	97, 121, 32, 111, 110, 45, 115, 99, 114, 101, 
	101, 110, 32, 107, 101, 121, 98, 111, 97, 114, 
	100, 32, 102, 111, 114, 32, 117, 115, 101, 114, 
	32, 105, 110, 112, 117, 116, 46, 34, 32, 47, 
	97, 116, 116, 97, 99, 104, 32, 103, 111, 98, 
	32, 91, 103, 111, 98, 33, 93, 32, 123, 71, 
	79, 66, 32, 119, 104, 105, 99, 104, 32, 115, 
	104, 111, 117, 108, 100, 32, 98, 101, 32, 118, 
	105, 115, 105, 98, 108, 101, 32, 100, 117, 114, 
	105, 110, 103, 32, 116, 104, 101, 32, 105, 110, 
	112, 117, 116, 32, 111, 112, 101, 114, 97, 116, 
	105, 111, 110, 125, 93, 32, 115, 121, 115, 116, 
	101, 109, 47, 115, 116, 97, 110, 100, 97, 114, 
	100, 47, 102, 111, 110, 116, 58, 32, 99, 111, 
	110, 115, 116, 114, 117, 99, 116, 32, 91, 110, 
	97, 109, 101, 58, 32, 34, 97, 114, 105, 97, 
	108, 34, 32, 115, 116, 121, 108, 101, 58, 32, 
	110, 111, 110, 101, 32, 115, 105, 122, 101, 58, 
	32, 49, 50, 32, 99, 111, 108, 111, 114, 58, 
	32, 48, 46, 48, 46, 48, 32, 111, 102, 102, 
	115, 101, 116, 58, 32, 50, 120, 50, 32, 115, 
	112, 97, 99, 101, 58, 32, 48, 120, 48, 32, 
	115, 104, 97, 100, 111, 119, 58, 32, 110, 111, 
	110, 101, 93, 32, 115, 121, 115, 116, 101, 109, 
	47, 115, 116, 97, 110, 100, 97, 114, 100, 47, 
	112, 97, 114, 97, 58, 32, 99, 111, 110, 115, 
	116, 114, 117, 99, 116, 32, 91, 111, 114, 105, 
	103, 105, 110, 58, 32, 50, 120, 50, 32, 109, 
	97, 114, 103, 105, 110, 58, 32, 50, 120, 50, 
	32, 105, 110, 100, 101, 110, 116, 58, 32, 48, 
	120, 48, 32, 116, 97, 98, 115, 58, 32, 52, 
	48, 32, 119, 114, 97, 112, 63, 58, 32, 116, 
	114, 117, 101, 32, 115, 99, 114, 111, 108, 108, 
	58, 32, 48, 120, 48, 32, 97, 108, 105, 103, 
	110, 58, 32, 39, 108, 101, 102, 116, 32, 118, 
	97, 108, 105, 103, 110, 58, 32, 39, 116, 111, 
	112, 93, 32, 118, 105, 101, 119, 58, 32, 102, 
	117, 110, 99, 32, 91, 34, 68, 105, 115, 112, 
	108, 97, 121, 115, 32, 97, 32, 119, 105, 110, 
	100, 111, 119, 32, 118, 105, 101, 119, 46, 34, 
	32, 119, 105, 110, 100, 111, 119, 32, 91, 103, 
	111, 98, 33, 32, 98, 108, 111, 99, 107, 33, 
	32, 111, 98, 106, 101, 99, 116, 33, 32, 105, 
	109, 97, 103, 101, 33, 93, 32, 34, 87, 105, 
	110, 100, 111, 119, 32, 103, 111, 98, 44, 32, 
	86, 73, 68, 32, 102, 97, 99, 101, 44, 32, 
	111, 114, 32, 86, 73, 68, 32, 108, 97, 121, 
	111, 117, 116, 32, 98, 108, 111, 99, 107, 34, 
	32, 47, 111, 112, 116, 105, 111, 110, 115, 32, 
	111, 112, 116, 115, 32, 91, 98, 108, 111, 99, 
	107, 33, 93, 32, 34, 87, 105, 110, 100, 111, 
	119, 32, 111, 112, 116, 105, 111, 110, 115, 32, 
	115, 112, 101, 99, 32, 98, 108, 111, 99, 107, 
	34, 32, 47, 110, 111, 45, 119, 97, 105, 116, 
	32, 123, 82, 101, 116, 117, 114, 110, 32, 105, 
	109, 109, 101, 100, 105, 97, 116, 101, 108, 121, 
	46, 32, 68, 111, 32, 110, 111, 116, 32, 119, 
	97, 105, 116, 32, 97, 110, 100, 32, 112, 114, 
	111, 99, 101, 115, 115, 32, 101, 118, 101, 110, 
	116, 115, 46, 125, 32, 47, 97, 115, 45, 105, 
	115, 32, 34, 76, 101, 97, 118, 101, 32, 119, 
	105, 110, 100, 111, 119, 32, 97, 115, 32, 105, 
	115, 46, 32, 68, 111, 32, 110, 111, 116, 32, 
	97, 100, 100, 32, 97, 32, 112, 97, 114, 101, 
	110, 116, 32, 103, 111, 98, 46, 34, 32, 47, 
	108, 111, 99, 97, 108, 32, 115, 99, 114, 101, 
	101, 110, 32, 116, 109, 112, 32, 120, 121, 32, 
	105, 109, 97, 103, 101, 93, 32, 91, 105, 102, 
	32, 97, 110, 121, 32, 91, 110, 111, 116, 32, 
	115, 99, 114, 101, 101, 110, 58, 32, 115, 121, 
	115, 116, 101, 109, 47, 118, 105, 101, 119, 47, 
	115, 99, 114, 101, 101, 110, 45, 103, 111, 98, 
	32, 119, 105, 110, 100, 111, 119, 32, 61, 32, 
	115, 99, 114, 101, 101, 110, 93, 32, 91, 114, 
	101, 116, 117, 114, 110, 32, 110, 111, 110, 101, 
	93, 32, 111, 112, 116, 115, 58, 32, 109, 97, 
	107, 101, 32, 109, 97, 112, 33, 32, 97, 110, 
	121, 32, 91, 114, 101, 100, 117, 99, 101, 47, 
	110, 111, 45, 115, 101, 116, 32, 111, 112, 116, 
	115, 32, 91, 93, 93, 32, 99, 97, 115, 101, 
	47, 97, 108, 108, 32, 91, 110, 111, 45, 119, 
	97, 105, 116, 32, 91, 111, 112, 116, 115, 47, 
	110, 111, 45, 119, 97, 105, 116, 58, 32, 116, 
	114, 117, 101, 93, 32, 97, 115, 45, 105, 115, 
	32, 91, 111, 112, 116, 115, 47, 97, 115, 45, 
	105, 115, 58, 32, 116, 114, 117, 101, 93, 93, 
	32, 105, 102, 32, 105, 109, 97, 103, 101, 63, 
	32, 119, 105, 110, 100, 111, 119, 32, 91, 105, 
	109, 97, 103, 101, 58, 32, 119, 105, 110, 100, 
	111, 119, 32, 119, 105, 110, 100, 111, 119, 58, 
	32, 109, 97, 107, 101, 32, 103, 111, 98, 33, 
	32, 91, 115, 105, 122, 101, 58, 32, 105, 109, 
	97, 103, 101, 47, 115, 105, 122, 101, 32, 105, 
	109, 97, 103, 101, 58, 32, 105, 109, 97, 103, 
	101, 93, 32, 111, 112, 116, 115, 47, 102, 108, 
	97, 103, 115, 58, 32, 91, 114, 101, 115, 105, 
	122, 101, 93, 32, 111, 112, 116, 115, 47, 111, 
	102, 102, 115, 101, 116, 58, 32, 39, 99, 101, 
	110, 116, 101, 114, 93, 32, 105, 102, 32, 103, 
	111, 98, 63, 32, 119, 105, 110, 100, 111, 119, 
	32, 91, 117, 110, 108, 101, 115, 115, 32, 111, 
	112, 116, 115, 47, 97, 115, 45, 105, 115, 32, 
	91, 116, 109, 112, 58, 32, 119, 105, 110, 100, 
	111, 119, 32, 116, 109, 112, 47, 111, 102, 102, 
	115, 101, 116, 58, 32, 48, 120, 48, 32, 119, 
	105, 110, 100, 111, 119, 58, 32, 109, 97, 107, 
	101, 32, 103, 111, 98, 33, 32, 91, 115, 105, 
	122, 101, 58, 32, 116, 109, 112, 47, 115, 105, 
	122, 101, 93, 32, 119, 105, 110, 100, 111, 119, 
	47, 111, 102, 102, 115, 101, 116, 58, 32, 115, 
	121, 115, 116, 101, 109, 47, 118, 105, 101, 119, 
	47, 109, 101, 116, 114, 105, 99, 115, 47, 116, 
	105, 116, 108, 101, 45, 115, 105, 122, 101, 32, 
	97, 112, 112, 101, 110, 100, 32, 119, 105, 110, 
	100, 111, 119, 32, 116, 109, 112, 93, 32, 105, 
	102, 32, 97, 110, 121, 32, 91, 111, 112, 116, 
	115, 47, 99, 111, 108, 111, 114, 32, 111, 112, 
	116, 115, 47, 100, 114, 97, 119, 93, 32, 91, 
	105, 110, 115, 101, 114, 116, 32, 119, 105, 110, 
	100, 111, 119, 32, 109, 97, 107, 101, 32, 103, 
	111, 98, 33, 32, 97, 112, 112, 101, 110, 100, 
	32, 99, 111, 112, 121, 32, 91, 115, 105, 122, 
	101, 58, 32, 119, 105, 110, 100, 111, 119, 47, 
	115, 105, 122, 101, 32, 111, 102, 102, 115, 101, 
	116, 58, 32, 48, 120, 48, 93, 32, 112, 105, 
	99, 107, 32, 91, 91, 100, 114, 97, 119, 58, 
	32, 111, 112, 116, 115, 47, 100, 114, 97, 119, 
	93, 32, 91, 99, 111, 108, 111, 114, 58, 32, 
	111, 112, 116, 115, 47, 99, 111, 108, 111, 114, 
	93, 93, 32, 98, 108, 111, 99, 107, 63, 32, 
	111, 112, 116, 115, 47, 100, 114, 97, 119, 93, 
	32, 105, 102, 32, 97, 108, 108, 32, 91, 101, 
	109, 112, 116, 121, 63, 32, 115, 121, 115, 116, 
	101, 109, 47, 118, 105, 101, 119, 47, 101, 118, 
	101, 110, 116, 45, 112, 111, 114, 116, 47, 108, 
	111, 99, 97, 108, 115, 47, 104, 97, 110, 100, 
	108, 101, 114, 115, 32, 110, 111, 116, 32, 111, 
	112, 116, 115, 47, 104, 97, 110, 100, 108, 101, 
	114, 93, 32, 91, 104, 97, 110, 100, 108, 101, 
	45, 101, 118, 101, 110, 116, 115, 32, 91, 110, 
	97, 109, 101, 58, 32, 39, 118, 105, 101, 119, 
	45, 100, 101, 102, 97, 117, 108, 116, 32, 112, 
	114, 105, 111, 114, 105, 116, 121, 58, 32, 53, 
	48, 32, 104, 97, 110, 100, 108, 101, 114, 58, 
	32, 102, 117, 110, 99, 32, 91, 101, 118, 101, 
	110, 116, 93, 32, 91, 105, 102, 32, 115, 119, 
	105, 116, 99, 104, 32, 101, 118, 101, 110, 116, 
	47, 116, 121, 112, 101, 32, 91, 99, 108, 111, 
	115, 101, 32, 91, 116, 114, 117, 101, 93, 32, 
	107, 101, 121, 32, 91, 101, 118, 101, 110, 116, 
	47, 107, 101, 121, 32, 61, 32, 101, 115, 99, 
	97, 112, 101, 93, 93, 32, 91, 117, 110, 104, 
	97, 110, 100, 108, 101, 45, 101, 118, 101, 110, 
	116, 115, 32, 115, 101, 108, 102, 32, 117, 110, 
	118, 105, 101, 119, 32, 101, 118, 101, 110, 116, 
	47, 119, 105, 110, 100, 111, 119, 93, 32, 110, 
	111, 110, 101, 93, 93, 93, 93, 32, 105, 102, 
	32, 98, 108, 111, 99, 107, 63, 32, 119, 105, 
	110, 100, 111, 119, 32, 91, 119, 105, 110, 100, 
	111, 119, 58, 32, 108, 97, 121, 111, 117, 116, 
	47, 98, 97, 99, 107, 103, 114, 111, 117, 110, 
	100, 32, 119, 105, 110, 100, 111, 119, 32, 97, 
	110, 121, 32, 91, 111, 112, 116, 115, 47, 100, 
	114, 97, 119, 32, 111, 112, 116, 115, 47, 99, 
	111, 108, 111, 114, 93, 93, 32, 105, 102, 32, 
	111, 98, 106, 101, 99, 116, 63, 32, 119, 105, 
	110, 100, 111, 119, 32, 91, 119, 105, 110, 100, 
	111, 119, 58, 32, 97, 112, 112, 101, 110, 100, 
	32, 109, 97, 107, 101, 32, 103, 111, 98, 33, 
	32, 91, 100, 97, 116, 97, 58, 32, 119, 105, 
	110, 100, 111, 119, 32, 115, 105, 122, 101, 58, 
	32, 119, 105, 110, 100, 111, 119, 47, 115, 105, 
	122, 101, 93, 32, 119, 105, 110, 100, 111, 119, 
	47, 103, 111, 98, 32, 119, 105, 110, 100, 111, 
	119, 47, 102, 108, 97, 103, 115, 58, 32, 91, 
	114, 101, 115, 105, 122, 101, 93, 93, 32, 119, 
	105, 110, 100, 111, 119, 47, 116, 101, 120, 116, 
	58, 32, 97, 110, 121, 32, 91, 111, 112, 116, 
	115, 47, 116, 105, 116, 108, 101, 32, 119, 105, 
	110, 100, 111, 119, 47, 116, 101, 120, 116, 32, 
	34, 82, 69, 66, 79, 76, 58, 32, 117, 110, 
	116, 105, 116, 108, 101, 100, 34, 93, 32, 105, 
	102, 32, 111, 112, 116, 115, 47, 111, 102, 102, 
	115, 101, 116, 32, 91, 105, 102, 32, 119, 111, 
	114, 100, 63, 32, 111, 112, 116, 115, 47, 111, 
	102, 102, 115, 101, 116, 32, 91, 111, 112, 116, 
	115, 47, 111, 102, 102, 115, 101, 116, 58, 32, 
	101, 105, 116, 104, 101, 114, 32, 111, 112, 116, 
	115, 47, 111, 102, 102, 115, 101, 116, 32, 61, 
	32, 39, 99, 101, 110, 116, 101, 114, 32, 91, 
	115, 99, 114, 101, 101, 110, 47, 115, 105, 122, 
	101, 32, 45, 32, 119, 105, 110, 100, 111, 119, 
	47, 115, 105, 122, 101, 32, 47, 32, 50, 93, 
	32, 91, 49, 48, 48, 120, 49, 48, 48, 93, 
	93, 32, 119, 105, 110, 100, 111, 119, 47, 111, 
	102, 102, 115, 101, 116, 58, 32, 111, 112, 116, 
	115, 47, 111, 102, 102, 115, 101, 116, 93, 32, 
	105, 102, 32, 111, 112, 116, 115, 47, 111, 119, 
	110, 101, 114, 32, 91, 119, 105, 110, 100, 111, 
	119, 47, 111, 119, 110, 101, 114, 58, 32, 111, 
	112, 116, 115, 47, 111, 119, 110, 101, 114, 93, 
	32, 105, 102, 32, 111, 112, 116, 115, 47, 102, 
	108, 97, 103, 115, 32, 91, 119, 105, 110, 100, 
	111, 119, 47, 102, 108, 97, 103, 115, 58, 32, 
	111, 112, 116, 115, 47, 102, 108, 97, 103, 115, 
	93, 32, 105, 102, 32, 111, 112, 116, 115, 47, 
	104, 97, 110, 100, 108, 101, 114, 32, 91, 104, 
	97, 110, 100, 108, 101, 45, 101, 118, 101, 110, 
	116, 115, 32, 111, 112, 116, 115, 47, 104, 97, 
	110, 100, 108, 101, 114, 93, 32, 117, 110, 108, 
	101, 115, 115, 32, 119, 105, 110, 100, 111, 119, 
	32, 61, 32, 115, 99, 114, 101, 101, 110, 32, 
	91, 97, 112, 112, 101, 110, 100, 32, 115, 99, 
	114, 101, 101, 110, 32, 119, 105, 110, 100, 111, 
	119, 93, 32, 115, 104, 111, 119, 32, 119, 105, 
	110, 100, 111, 119, 32, 105, 102, 32, 97, 108, 
	108, 32, 91, 110, 111, 116, 32, 111, 112, 116, 
	115, 47, 110, 111, 45, 119, 97, 105, 116, 32, 
	49, 32, 61, 32, 108, 101, 110, 103, 116, 104, 
	63, 32, 115, 99, 114, 101, 101, 110, 93, 32, 
	91, 100, 111, 45, 101, 118, 101, 110, 116, 115, 
	93, 32, 119, 105, 110, 100, 111, 119, 93, 32, 
	117, 110, 118, 105, 101, 119, 58, 32, 102, 117, 
	110, 99, 32, 91, 34, 67, 108, 111, 115, 101, 
	115, 32, 97, 32, 119, 105, 110, 100, 111, 119, 
	32, 118, 105, 101, 119, 46, 34, 32, 119, 105, 
	110, 100, 111, 119, 32, 91, 111, 98, 106, 101, 
	99, 116, 33, 32, 103, 111, 98, 33, 32, 119, 
	111, 114, 100, 33, 32, 110, 111, 110, 101, 33, 
	93, 32, 34, 87, 105, 110, 100, 111, 119, 32, 
	102, 97, 99, 101, 32, 111, 114, 32, 71, 79, 
	66, 46, 32, 39, 97, 108, 108, 32, 102, 111, 
	114, 32, 97, 108, 108, 46, 32, 110, 111, 110, 
	101, 32, 102, 111, 114, 32, 108, 97, 115, 116, 
	34, 32, 47, 108, 111, 99, 97, 108, 32, 115, 
	99, 114, 101, 101, 110, 93, 32, 91, 115, 99, 
	114, 101, 101, 110, 58, 32, 115, 121, 115, 116, 
	101, 109, 47, 118, 105, 101, 119, 47, 115, 99, 
	114, 101, 101, 110, 45, 103, 111, 98, 32, 99, 
	97, 115, 101, 32, 91, 111, 98, 106, 101, 99, 
	116, 63, 32, 119, 105, 110, 100, 111, 119, 32, 
	91, 119, 105, 110, 100, 111, 119, 58, 32, 119, 
	105, 110, 100, 111, 119, 47, 103, 111, 98, 47, 
	112, 97, 114, 101, 110, 116, 93, 32, 119, 105, 
	110, 100, 111, 119, 32, 61, 32, 39, 97, 108, 
	108, 32, 91, 115, 104, 111, 119, 32, 99, 108, 
	101, 97, 114, 32, 115, 99, 114, 101, 101, 110, 
	32, 101, 120, 105, 116, 93, 32, 110, 111, 116, 
	32, 119, 105, 110, 100, 111, 119, 32, 91, 119, 
	105, 110, 100, 111, 119, 58, 32, 108, 97, 115, 
	116, 32, 115, 99, 114, 101, 101, 110, 93, 93, 
	32, 114, 101, 109, 111, 118, 101, 32, 102, 105, 
	110, 100, 32, 115, 99, 114, 101, 101, 110, 32, 
	119, 105, 110, 100, 111, 119, 32, 115, 104, 111, 
	119, 32, 119, 105, 110, 100, 111, 119, 93, 32, 
	98, 97, 115, 101, 45, 104, 97, 110, 100, 108, 
	101, 114, 58, 32, 99, 111, 110, 115, 116, 114, 
	117, 99, 116, 32, 91, 110, 97, 109, 101, 58, 
	32, 39, 110, 111, 45, 110, 97, 109, 101, 32, 
	112, 114, 105, 111, 114, 105, 116, 121, 58, 32, 
	48, 93, 32, 104, 97, 110, 100, 108, 101, 45, 
	101, 118, 101, 110, 116, 115, 58, 32, 102, 117, 
	110, 99, 32, 91, 34, 65, 100, 100, 115, 32, 
	97, 32, 104, 97, 110, 100, 108, 101, 114, 32, 
	116, 111, 32, 116, 104, 101, 32, 118, 105, 101, 
	119, 32, 101, 118, 101, 110, 116, 32, 115, 121, 
	115, 116, 101, 109, 46, 34, 32, 104, 97, 110, 
	100, 108, 101, 114, 32, 91, 98, 108, 111, 99, 
	107, 33, 93, 32, 47, 108, 111, 99, 97, 108, 
	32, 115, 121, 115, 45, 104, 97, 110, 100, 93, 
	32, 91, 104, 97, 110, 100, 108, 101, 114, 58, 
	32, 109, 97, 107, 101, 32, 98, 97, 115, 101, 
	45, 104, 97, 110, 100, 108, 101, 114, 32, 104, 
	97, 110, 100, 108, 101, 114, 32, 115, 121, 115, 
	45, 104, 97, 110, 100, 58, 32, 115, 121, 115, 
	116, 101, 109, 47, 118, 105, 101, 119, 47, 101, 
	118, 101, 110, 116, 45, 112, 111, 114, 116, 47, 
	108, 111, 99, 97, 108, 115, 47, 104, 97, 110, 
	100, 108, 101, 114, 115, 32, 102, 111, 114, 97, 
	108, 108, 32, 115, 121, 115, 45, 104, 97, 110, 
	100, 32, 91, 105, 102, 32, 104, 97, 110, 100, 
	108, 101, 114, 47, 110, 97, 109, 101, 32, 61, 
	32, 115, 121, 115, 45, 104, 97, 110, 100, 47, 
	49, 47, 110, 97, 109, 101, 32, 91, 99, 104, 
	97, 110, 103, 101, 32, 115, 121, 115, 45, 104, 
	97, 110, 100, 32, 104, 97, 110, 100, 108, 101, 
	114, 32, 114, 101, 116, 117, 114, 110, 32, 104, 
	97, 110, 100, 108, 101, 114, 93, 93, 32, 117, 
	110, 108, 101, 115, 115, 32, 102, 111, 114, 101, 
	97, 99, 104, 32, 91, 104, 101, 114, 101, 58, 
	32, 104, 97, 110, 100, 93, 32, 115, 121, 115, 
	45, 104, 97, 110, 100, 32, 91, 105, 102, 32, 
	104, 97, 110, 100, 108, 101, 114, 47, 112, 114, 
	105, 111, 114, 105, 116, 121, 32, 62, 32, 104, 
	97, 110, 100, 47, 112, 114, 105, 111, 114, 105, 
	116, 121, 32, 91, 105, 110, 115, 101, 114, 116, 
	32, 104, 101, 114, 101, 32, 104, 97, 110, 100, 
	108, 101, 114, 32, 98, 114, 101, 97, 107, 47, 
	114, 101, 116, 117, 114, 110, 32, 116, 114, 117, 
	101, 93, 93, 32, 91, 97, 112, 112, 101, 110, 
	100, 32, 115, 121, 115, 45, 104, 97, 110, 100, 
	32, 104, 97, 110, 100, 108, 101, 114, 93, 32, 
	104, 97, 110, 100, 108, 101, 114, 93, 32, 117, 
	110, 104, 97, 110, 100, 108, 101, 45, 101, 118, 
	101, 110, 116, 115, 58, 32, 102, 117, 110, 99, 
	32, 91, 34, 82, 101, 109, 111, 118, 101, 115, 
	32, 97, 32, 104, 97, 110, 100, 108, 101, 114, 
	32, 102, 114, 111, 109, 32, 116, 104, 101, 32, 
	118, 105, 101, 119, 32, 101, 118, 101, 110, 116, 
	32, 115, 121, 115, 116, 101, 109, 46, 34, 32, 
	104, 97, 110, 100, 108, 101, 114, 32, 91, 111, 
	98, 106, 101, 99, 116, 33, 93, 93, 32, 91, 
	114, 101, 109, 111, 118, 101, 32, 102, 105, 110, 
	100, 32, 115, 121, 115, 116, 101, 109, 47, 118, 
	105, 101, 119, 47, 101, 118, 101, 110, 116, 45, 
	112, 111, 114, 116, 47, 108, 111, 99, 97, 108, 
	115, 47, 104, 97, 110, 100, 108, 101, 114, 115, 
	32, 104, 97, 110, 100, 108, 101, 114, 32, 101, 
	120, 105, 116, 93, 32, 104, 97, 110, 100, 108, 
	101, 100, 45, 101, 118, 101, 110, 116, 115, 63, 
	58, 32, 102, 117, 110, 99, 32, 91, 123, 82, 
	101, 116, 117, 114, 110, 115, 32, 101, 118, 101, 
	110, 116, 32, 104, 97, 110, 100, 108, 101, 114, 
	32, 111, 98, 106, 101, 99, 116, 32, 109, 97, 
	116, 99, 104, 105, 110, 103, 32, 97, 32, 103, 
	105, 118, 101, 110, 32, 110, 97, 109, 101, 46, 
	125, 32, 110, 97, 109, 101, 93, 32, 91, 102, 
	111, 114, 101, 97, 99, 104, 32, 104, 97, 110, 
	100, 32, 115, 121, 115, 116, 101, 109, 47, 118, 
	105, 101, 119, 47, 101, 118, 101, 110, 116, 45, 
	112, 111, 114, 116, 47, 108, 111, 99, 97, 108, 
	115, 47, 104, 97, 110, 100, 108, 101, 114, 115, 
	32, 91, 105, 102, 32, 104, 97, 110, 100, 47, 
	110, 97, 109, 101, 32, 61, 32, 110, 97, 109, 
	101, 32, 91, 114, 101, 116, 117, 114, 110, 32, 
	104, 97, 110, 100, 93, 93, 32, 110, 111, 110, 
	101, 93, 32, 100, 111, 45, 101, 118, 101, 110, 
	116, 115, 58, 32, 102, 117, 110, 99, 32, 91, 
	123, 87, 97, 105, 116, 115, 32, 102, 111, 114, 
	32, 119, 105, 110, 100, 111, 119, 32, 101, 118, 
	101, 110, 116, 115, 46, 32, 82, 101, 116, 117, 
	114, 110, 115, 32, 119, 104, 101, 110, 32, 97, 
	108, 108, 32, 119, 105, 110, 100, 111, 119, 115, 
	32, 97, 114, 101, 32, 99, 108, 111, 115, 101, 
	100, 46, 125, 93, 32, 91, 119, 97, 105, 116, 
	32, 115, 121, 115, 116, 101, 109, 47, 118, 105, 
	101, 119, 47, 101, 118, 101, 110, 116, 45, 112, 
	111, 114, 116, 93, 32, 105, 110, 105, 116, 45, 
	118, 105, 101, 119, 45, 115, 121, 115, 116, 101, 
	109, 58, 32, 102, 117, 110, 99, 32, 91, 34, 
	73, 110, 105, 116, 105, 97, 108, 105, 122, 101, 
	32, 116, 104, 101, 32, 86, 105, 101, 119, 32, 
	115, 117, 98, 115, 121, 115, 116, 101, 109, 46, 
	34, 32, 47, 108, 111, 99, 97, 108, 32, 101, 
	112, 93, 32, 91, 105, 110, 105, 116, 45, 116, 
	111, 112, 45, 119, 105, 110, 100, 111, 119, 32, 
	115, 121, 115, 116, 101, 109, 47, 118, 105, 101, 
	119, 47, 115, 99, 114, 101, 101, 110, 45, 103, 
	111, 98, 58, 32, 109, 97, 107, 101, 32, 103, 
	111, 98, 33, 32, 91, 116, 101, 120, 116, 58, 
	32, 34, 84, 111, 112, 32, 71, 111, 98, 34, 
	93, 32, 102, 111, 114, 101, 97, 99, 104, 32, 
	119, 32, 119, 111, 114, 100, 115, 45, 111, 102, 
	32, 115, 121, 115, 116, 101, 109, 47, 118, 105, 
	101, 119, 47, 109, 101, 116, 114, 105, 99, 115, 
	32, 91, 115, 101, 116, 32, 105, 110, 32, 115, 
	121, 115, 116, 101, 109, 47, 118, 105, 101, 119, 
	47, 109, 101, 116, 114, 105, 99, 115, 32, 119, 
	32, 103, 117, 105, 45, 109, 101, 116, 114, 105, 
	99, 32, 119, 93, 32, 105, 102, 32, 115, 121, 
	115, 116, 101, 109, 47, 118, 105, 101, 119, 47, 
	101, 118, 101, 110, 116, 45, 112, 111, 114, 116, 
	32, 91, 101, 120, 105, 116, 93, 32, 101, 112, 
	58, 32, 111, 112, 101, 110, 32, 91, 115, 99, 
	104, 101, 109, 101, 58, 32, 39, 101, 118, 101, 
	110, 116, 93, 32, 115, 121, 115, 116, 101, 109, 
	47, 118, 105, 101, 119, 47, 101, 118, 101, 110, 
	116, 45, 112, 111, 114, 116, 58, 32, 101, 112, 
	32, 101, 112, 47, 108, 111, 99, 97, 108, 115, 
	58, 32, 111, 98, 106, 101, 99, 116, 32, 91, 
	104, 97, 110, 100, 108, 101, 114, 115, 58, 32, 
	99, 111, 112, 121, 32, 91, 93, 93, 32, 101, 
	112, 47, 97, 119, 97, 107, 101, 58, 32, 102, 
	117, 110, 99, 32, 91, 101, 118, 101, 110, 116, 
	32, 47, 108, 111, 99, 97, 108, 32, 104, 93, 
	32, 91, 104, 58, 32, 101, 118, 101, 110, 116, 
	47, 112, 111, 114, 116, 47, 108, 111, 99, 97, 
	108, 115, 47, 104, 97, 110, 100, 108, 101, 114, 
	115, 32, 119, 104, 105, 108, 101, 32, 91, 97, 
	108, 108, 32, 91, 101, 118, 101, 110, 116, 32, 
	110, 111, 116, 32, 116, 97, 105, 108, 63, 32, 
	104, 93, 93, 32, 91, 101, 118, 101, 110, 116, 
	58, 32, 104, 47, 49, 47, 104, 97, 110, 100, 
	108, 101, 114, 32, 101, 118, 101, 110, 116, 32, 
	104, 58, 32, 110, 101, 120, 116, 32, 104, 93, 
	32, 116, 97, 105, 108, 63, 32, 115, 121, 115, 
	116, 101, 109, 47, 118, 105, 101, 119, 47, 115, 
	99, 114, 101, 101, 110, 45, 103, 111, 98, 93, 
	93, 32, 105, 110, 105, 116, 45, 118, 105, 101, 
	119, 45, 115, 121, 115, 116, 101, 109, 10, 0, 
	
};

#endif
