/*############################################################################
  # Copyright (C) 2020 Intel Corporation
  #
  # SPDX-License-Identifier: MIT
  ############################################################################*/

#include "api/test_bitstreams.h"

unsigned int test_bitstream_96x64_8bit_hevc::pkt_pos[] = {
    0, 917, 934, 966, 983, 1028, 1045, 1082
};
unsigned int test_bitstream_96x64_8bit_hevc::npkt = 8;

unsigned char test_bitstream_96x64_8bit_hevc::data[] = {
    0x00, 0x00, 0x00, 0x01, 0x40, 0x01, 0x0c, 0x06, 0xff, 0xff, 0x01, 0x40, 0x00, 0x00, 0x03, 0x00,
    0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x1e, 0x00, 0x00, 0x04, 0x02, 0x10, 0x30, 0x00,
    0x00, 0x03, 0x00, 0x10, 0x00, 0x00, 0x03, 0x01, 0x95, 0x00, 0x00, 0x00, 0x01, 0x42, 0x01, 0x06,
    0x01, 0x40, 0x00, 0x00, 0x03, 0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x1e, 0x00,
    0x00, 0xa0, 0x30, 0x81, 0x05, 0x8d, 0x04, 0x02, 0x19, 0x24, 0x6c, 0xac, 0x80, 0x00, 0x00, 0x00,
    0x01, 0x44, 0x01, 0xc0, 0x71, 0xc0, 0xd9, 0x20, 0x00, 0x00, 0x00, 0x01, 0x26, 0x01, 0xaf, 0x18,
    0x73, 0xdc, 0xbf, 0x93, 0x43, 0x3e, 0x06, 0x51, 0xcf, 0xf0, 0xbd, 0x27, 0xed, 0x09, 0x77, 0x11,
    0x3f, 0x1d, 0x51, 0x18, 0xdd, 0x1c, 0x76, 0xa8, 0xfd, 0x1f, 0xf6, 0x3d, 0x86, 0x4d, 0xc2, 0x6d,
    0x8f, 0x9b, 0xbd, 0x56, 0x94, 0x7d, 0x87, 0xfd, 0x78, 0x8f, 0xf7, 0x55, 0xef, 0xaa, 0x6c, 0xac,
    0x43, 0x81, 0x89, 0xff, 0xc2, 0xf9, 0xf9, 0xf7, 0xad, 0xfb, 0xeb, 0x6b, 0x2a, 0x5f, 0xcd, 0x39,
    0x38, 0x63, 0xe2, 0x9a, 0x88, 0xaf, 0x98, 0xe1, 0xad, 0xbf, 0xb7, 0xd4, 0x14, 0x04, 0x1e, 0x7c,
    0x3d, 0x05, 0x54, 0xcf, 0x0b, 0x4c, 0x04, 0x9f, 0xb5, 0x94, 0x2f, 0xcf, 0xb6, 0x17, 0xa5, 0xff,
    0xb4, 0x77, 0x35, 0xf6, 0x53, 0x35, 0xde, 0xc6, 0xac, 0x2f, 0x0d, 0x26, 0x36, 0x84, 0x76, 0xea,
    0xd4, 0xdc, 0x7b, 0x96, 0x0b, 0x2f, 0x8f, 0x8d, 0x82, 0xdd, 0x51, 0xd0, 0x47, 0xbd, 0xeb, 0x54,
    0x5d, 0x59, 0xf7, 0x4d, 0x19, 0x8d, 0xbe, 0xfe, 0xe2, 0x4a, 0x21, 0xff, 0xea, 0x81, 0xc6, 0x66,
    0xd3, 0xe8, 0x99, 0xad, 0x68, 0x5b, 0xff, 0x66, 0xa6, 0x71, 0x79, 0x22, 0x90, 0xdd, 0x8e, 0xa0,
    0x21, 0x1a, 0xac, 0xc6, 0x06, 0x5f, 0x69, 0x9f, 0x2c, 0x3e, 0xed, 0xf2, 0x99, 0x7f, 0x6c, 0x19,
    0x2e, 0x90, 0x7f, 0x28, 0xcb, 0xfd, 0x3f, 0x05, 0x60, 0x34, 0x2b, 0xf8, 0xb7, 0x2c, 0xb2, 0x68,
    0xfe, 0x94, 0xe9, 0x61, 0x46, 0x1f, 0xed, 0x59, 0xec, 0x13, 0x1e, 0x28, 0x94, 0x79, 0xb2, 0xb2,
    0x35, 0xb7, 0x53, 0xf3, 0xc3, 0x3f, 0x4c, 0xe7, 0x6b, 0x93, 0xf7, 0x1e, 0xba, 0x71, 0x44, 0xd6,
    0x82, 0xb6, 0xba, 0x96, 0xb6, 0xbf, 0x4f, 0xfe, 0x80, 0xaa, 0x2d, 0x1e, 0x0d, 0x09, 0x56, 0x7e,
    0x6d, 0x30, 0x98, 0xc5, 0xd8, 0x14, 0xfd, 0x4d, 0xed, 0xe3, 0x0a, 0x4b, 0x35, 0x86, 0x5f, 0x35,
    0xde, 0x9f, 0x15, 0xda, 0xde, 0x72, 0x7c, 0xdd, 0x05, 0xa9, 0xeb, 0x9e, 0xef, 0xe3, 0xb2, 0xd7,
    0xa7, 0xf8, 0xaa, 0x3e, 0x82, 0x77, 0x28, 0x14, 0x85, 0x5c, 0xf0, 0x66, 0x5d, 0x6c, 0x3d, 0x9a,
    0xcd, 0x09, 0xba, 0x49, 0xa7, 0xaf, 0xcc, 0x66, 0x9e, 0x73, 0x06, 0xf2, 0x2e, 0x5d, 0x61, 0x98,
    0xe7, 0x39, 0x28, 0x1c, 0xb9, 0xcb, 0xf6, 0x08, 0x13, 0x3d, 0x7c, 0x2e, 0xe1, 0xb8, 0xc1, 0xdd,
    0xc0, 0xfd, 0x21, 0xa5, 0x5a, 0xa8, 0x81, 0xf0, 0x70, 0x5b, 0x78, 0x8e, 0xef, 0xbe, 0xb4, 0xcb,
    0x60, 0x18, 0x1d, 0x5c, 0x73, 0x5a, 0xe0, 0xe6, 0xd3, 0xc0, 0x50, 0x27, 0x3f, 0x0e, 0xc9, 0xa8,
    0xd2, 0x39, 0x91, 0x61, 0x3b, 0x29, 0xca, 0x91, 0x8e, 0x9f, 0xaf, 0xef, 0x7f, 0x43, 0x13, 0x93,
    0x0b, 0xe6, 0xac, 0xb1, 0x25, 0x47, 0x70, 0x4b, 0x20, 0x3a, 0x09, 0x27, 0x94, 0xb2, 0xa4, 0x39,
    0x68, 0x67, 0x58, 0x2c, 0x11, 0x21, 0x7f, 0x30, 0xa7, 0x10, 0x2a, 0x88, 0x83, 0xb5, 0x6f, 0x74,
    0x87, 0xc7, 0xd3, 0x31, 0x1a, 0xc2, 0x9a, 0xc4, 0x64, 0x0d, 0x76, 0x80, 0xd8, 0xf9, 0xd7, 0xba,
    0x20, 0x00, 0xf5, 0x6e, 0x30, 0x1a, 0xa3, 0x69, 0x26, 0x59, 0xce, 0x7d, 0x27, 0x15, 0x94, 0x74,
    0x62, 0xe4, 0xa9, 0xc4, 0x39, 0x27, 0xac, 0x99, 0xc7, 0x70, 0x64, 0xb2, 0xe6, 0xde, 0x1c, 0x3d,
    0x6c, 0xda, 0x0d, 0x4f, 0x4e, 0x06, 0x66, 0xfa, 0x65, 0xc4, 0xf2, 0x2c, 0x70, 0x03, 0x6c, 0x31,
    0x46, 0x23, 0xcc, 0xa8, 0xf9, 0xbb, 0x13, 0xac, 0x1e, 0xc2, 0xe3, 0x1d, 0x9d, 0xea, 0x9a, 0xb6,
    0x29, 0x09, 0xb6, 0x7a, 0x2a, 0xcb, 0xfe, 0x7f, 0xa2, 0xb6, 0x43, 0xc7, 0xc8, 0x61, 0x57, 0xd0,
    0xc4, 0xec, 0xea, 0xae, 0xf1, 0x82, 0xb1, 0xe2, 0x9a, 0x90, 0x09, 0xed, 0xda, 0x40, 0xa9, 0x60,
    0xd2, 0xbb, 0x07, 0x54, 0x44, 0xaf, 0x07, 0xb7, 0xa4, 0xc2, 0x59, 0x4d, 0xd6, 0x56, 0x84, 0xbd,
    0x6a, 0xe5, 0xdb, 0x7f, 0x6e, 0x82, 0x88, 0x7d, 0x9f, 0x14, 0x4a, 0x4e, 0x1c, 0xa5, 0x24, 0x4d,
    0xdd, 0x89, 0x1e, 0xd5, 0x7a, 0x11, 0xd8, 0xc1, 0x58, 0xbd, 0x06, 0x28, 0xe3, 0x72, 0x91, 0xb7,
    0x92, 0x2c, 0x76, 0xb1, 0x12, 0xf0, 0x3a, 0x20, 0x40, 0xb4, 0x2b, 0xed, 0xa7, 0xb0, 0x1f, 0xe5,
    0x12, 0xbf, 0x07, 0x57, 0xc2, 0x31, 0x99, 0x28, 0x59, 0x79, 0xb7, 0x22, 0x7a, 0x00, 0xac, 0xd3,
    0x8b, 0xf1, 0xa2, 0x76, 0x63, 0x90, 0x50, 0xe0, 0xc2, 0xe9, 0x88, 0x0d, 0x2b, 0x01, 0xbf, 0x57,
    0x71, 0x4c, 0xa6, 0x7a, 0x8b, 0xce, 0x59, 0xd8, 0x98, 0xa2, 0xde, 0x6a, 0x13, 0xa9, 0x7b, 0x88,
    0x8e, 0x36, 0x6f, 0x42, 0x01, 0x7c, 0x6e, 0x45, 0xa5, 0x13, 0xee, 0xa2, 0x9b, 0x3e, 0x57, 0xf5,
    0x32, 0x1e, 0x04, 0x8e, 0x1e, 0x07, 0x21, 0x8b, 0x3d, 0x7a, 0x74, 0x7e, 0x42, 0x05, 0xe4, 0x53,
    0xb1, 0x97, 0xbd, 0xa4, 0x1c, 0xd1, 0xe6, 0x10, 0x7a, 0x04, 0xf9, 0xe9, 0xd9, 0x1f, 0x7b, 0xb2,
    0x1d, 0x1b, 0x0b, 0x86, 0x4b, 0x55, 0xa6, 0x31, 0xd2, 0xa5, 0xf4, 0x46, 0x37, 0x0f, 0xb9, 0x99,
    0xe2, 0xcc, 0x5a, 0x63, 0xb6, 0x53, 0xef, 0xea, 0x33, 0x9b, 0xa5, 0x3a, 0x7f, 0xe1, 0xe4, 0x64,
    0x91, 0x05, 0xc2, 0x50, 0x28, 0x49, 0xd7, 0x45, 0x98, 0x12, 0x18, 0x8a, 0x89, 0x6b, 0x5a, 0x74,
    0xe5, 0xca, 0xd2, 0xb8, 0x3a, 0xf7, 0xc1, 0x94, 0xe4, 0x9b, 0x6a, 0xd2, 0x85, 0xcb, 0xcb, 0xf3,
    0xe1, 0x12, 0x66, 0x4c, 0x1a, 0x70, 0xbc, 0xef, 0x39, 0x88, 0x8e, 0xed, 0x33, 0xb6, 0x37, 0x52,
    0x6b, 0xe5, 0x23, 0x01, 0xcc, 0xdc, 0x1c, 0x81, 0x63, 0x04, 0xf5, 0x2d, 0x2f, 0x68, 0x08, 0x8e,
    0x1a, 0xa5, 0xcb, 0xf8, 0x79, 0x15, 0x2a, 0xc6, 0xe3, 0xb3, 0xf3, 0x02, 0x9d, 0x88, 0xac, 0x8b,
    0x4a, 0x72, 0x73, 0xb3, 0xa0, 0xb9, 0xbb, 0xdf, 0xb0, 0x84, 0x06, 0x2e, 0xf3, 0x75, 0xf5, 0x0c,
    0x85, 0x94, 0x64, 0xdd, 0x08, 0xd2, 0xc8, 0x29, 0x07, 0x3a, 0x77, 0x83, 0xa3, 0x43, 0x59, 0x01,
    0x5b, 0x25, 0x1b, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0xd0, 0x00, 0x09, 0x7e, 0x85, 0x88,
    0x4b, 0x80, 0xfa, 0xb7, 0x70, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0xd0, 0x00, 0x11, 0x57, 0xa1,
    0x62, 0x12, 0xe0, 0xfe, 0x6c, 0x1b, 0xe1, 0x01, 0xb2, 0x7e, 0x01, 0xfc, 0xd1, 0x81, 0x52, 0x9a,
    0x46, 0x00, 0x5d, 0xc1, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0xd0, 0x00, 0x19, 0xf4, 0xe8,
    0x58, 0x84, 0xb8, 0xfa, 0xb7, 0x70, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0xd0, 0x00, 0x21, 0x49,
    0xe8, 0x4b, 0xb8, 0xb7, 0x3f, 0x8b, 0x42, 0xe5, 0x8c, 0x5b, 0x36, 0x80, 0x4e, 0x53, 0x92, 0xd5,
    0x98, 0x3f, 0x91, 0xd6, 0x0e, 0x29, 0xa8, 0xa1, 0x2a, 0x33, 0xc3, 0xb0, 0xfd, 0xcd, 0x2d, 0x21,
    0xe5, 0x39, 0x60, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0xd0, 0x00, 0x29, 0xf2, 0x3a, 0x16, 0x21,
    0x2e, 0xfa, 0xb7, 0x70, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0xd0, 0x00, 0x31, 0xd4, 0x8e, 0x85,
    0x88, 0x4b, 0x80, 0xfe, 0x6c, 0x1a, 0x99, 0x3a, 0xa4, 0xaf, 0x14, 0x95, 0xe8, 0x79, 0x8b, 0xb4,
    0x4d, 0xf2, 0x5d, 0x1f, 0x4d, 0xc6, 0xda, 0xef, 0xe2, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0xd0,
    0x00, 0x39, 0xf3, 0x3a, 0x16, 0x21, 0x2e, 0xfa, 0xb7, 0x70, 0x00, 0x00, 0x00, 0x01, 0x48, 0x01
};

unsigned int test_bitstream_96x64_8bit_hevc::len = 1104;
