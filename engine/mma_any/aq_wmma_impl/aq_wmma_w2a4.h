// Copyright (C) ABQ.2024 (xieyusheng.12@bytedance.com)
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//          http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once
#include "common/base.h"
#include "mma_any/aq_wmma_op.h"

#ifdef W2A4
////// W2A4 int
// cta<2,32,128> warp<8,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 128, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 128, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 128, 8, 32, 128, 8, 8, 128, 4);
// cta<2,64,128> warp<8,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 128, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 128, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 128, 8, 64, 128, 8, 8, 128, 4);
// cta<4,32,128> warp<16,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 16, 32, 128, 8, 8, 128, 4);
// cta<4,64,128> warp<16,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 16, 64, 128, 8, 8, 128, 4);
// cta<6,32,128> warp<24,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 128, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 128, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 128, 24, 32, 128, 8, 8, 128, 4);
// cta<6,64,128> warp<24,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 128, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 128, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 128, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,128> warp<32,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 32, 32, 128, 8, 8, 128, 4);
// cta<8,64,128> warp<32,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 32, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 32, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 32, 64, 128, 8, 8, 128, 4);
// cta<10,32,128> warp<40,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 128, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 128, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 128, 40, 32, 128, 8, 8, 128, 4);
// cta<10,64,128> warp<40,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 128, 40, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 128, 40, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 128, 40, 64, 128, 8, 8, 128, 4);
// cta<12,32,128> warp<48,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 48, 32, 128, 8, 8, 128, 4);
// cta<12,64,128> warp<48,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 48, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 48, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 48, 64, 128, 8, 8, 128, 4);
// cta<14,32,128> warp<56,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 128, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 128, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 128, 56, 32, 128, 8, 8, 128, 4);
// cta<14,64,128> warp<56,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 128, 56, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 128, 56, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 128, 56, 64, 128, 8, 8, 128, 4);
// cta<2,32,128> warp<8,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 128, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 128, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 128, 8, 16, 128, 8, 8, 128, 4);
// cta<2,64,128> warp<8,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 128, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 128, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 128, 8, 32, 128, 8, 8, 128, 4);
// cta<2,96,128> warp<8,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 128, 8, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 128, 8, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 128, 8, 48, 128, 8, 8, 128, 4);
// cta<2,128,128> warp<8,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 128, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 128, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 128, 8, 64, 128, 8, 8, 128, 4);
// cta<4,32,128> warp<16,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 16, 16, 128, 8, 8, 128, 4);
// cta<4,64,128> warp<16,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 16, 32, 128, 8, 8, 128, 4);
// cta<4,96,128> warp<16,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 128, 16, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 128, 16, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 128, 16, 48, 128, 8, 8, 128, 4);
// cta<4,128,128> warp<16,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 128, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 128, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 128, 16, 64, 128, 8, 8, 128, 4);
// cta<6,32,128> warp<24,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 128, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 128, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 128, 24, 16, 128, 8, 8, 128, 4);
// cta<6,64,128> warp<24,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 128, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 128, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 128, 24, 32, 128, 8, 8, 128, 4);
// cta<6,96,128> warp<24,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 128, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 128, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 128, 24, 48, 128, 8, 8, 128, 4);
// cta<6,128,128> warp<24,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 128, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 128, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 128, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,128> warp<32,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 32, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 32, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 32, 16, 128, 8, 8, 128, 4);
// cta<8,64,128> warp<32,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 32, 32, 128, 8, 8, 128, 4);
// cta<8,96,128> warp<32,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 128, 32, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 128, 32, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 128, 32, 48, 128, 8, 8, 128, 4);
// cta<8,128,128> warp<32,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 128, 32, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 128, 32, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 128, 32, 64, 128, 8, 8, 128, 4);
// cta<10,32,128> warp<40,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 128, 40, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 128, 40, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 128, 40, 16, 128, 8, 8, 128, 4);
// cta<10,64,128> warp<40,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 128, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 128, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 128, 40, 32, 128, 8, 8, 128, 4);
// cta<10,96,128> warp<40,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 128, 40, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 128, 40, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 128, 40, 48, 128, 8, 8, 128, 4);
// cta<10,128,128> warp<40,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 128, 40, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 128, 40, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 128, 40, 64, 128, 8, 8, 128, 4);
// cta<12,32,128> warp<48,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 48, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 48, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 48, 16, 128, 8, 8, 128, 4);
// cta<12,64,128> warp<48,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 48, 32, 128, 8, 8, 128, 4);
// cta<12,96,128> warp<48,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 128, 48, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 128, 48, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 128, 48, 48, 128, 8, 8, 128, 4);
// cta<12,128,128> warp<48,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 128, 48, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 128, 48, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 128, 48, 64, 128, 8, 8, 128, 4);
// cta<14,32,128> warp<56,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 128, 56, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 128, 56, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 128, 56, 16, 128, 8, 8, 128, 4);
// cta<14,64,128> warp<56,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 128, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 128, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 128, 56, 32, 128, 8, 8, 128, 4);
// cta<14,96,128> warp<56,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 128, 56, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 128, 56, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 128, 56, 48, 128, 8, 8, 128, 4);
// cta<14,128,128> warp<56,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 128, 56, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 128, 56, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 128, 56, 64, 128, 8, 8, 128, 4);
// cta<2,32,128> warp<8,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 128, 8, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 128, 8, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 128, 8, 8, 128, 8, 8, 128, 4);
// cta<2,64,128> warp<8,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 128, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 128, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 128, 8, 16, 128, 8, 8, 128, 4);
// cta<2,96,128> warp<8,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 128, 8, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 128, 8, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 128, 8, 24, 128, 8, 8, 128, 4);
// cta<2,128,128> warp<8,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 128, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 128, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 128, 8, 32, 128, 8, 8, 128, 4);
// cta<2,256,128> warp<8,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 256, 128, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 256, 128, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 256, 128, 8, 64, 128, 8, 8, 128, 4);
// cta<4,32,128> warp<16,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 16, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 16, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 16, 8, 128, 8, 8, 128, 4);
// cta<4,64,128> warp<16,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 16, 16, 128, 8, 8, 128, 4);
// cta<4,96,128> warp<16,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 128, 16, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 128, 16, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 128, 16, 24, 128, 8, 8, 128, 4);
// cta<4,128,128> warp<16,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 128, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 128, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 128, 16, 32, 128, 8, 8, 128, 4);
// cta<4,256,128> warp<16,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 256, 128, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 256, 128, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 256, 128, 16, 64, 128, 8, 8, 128, 4);
// cta<6,32,128> warp<24,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 128, 24, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 128, 24, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 128, 24, 8, 128, 8, 8, 128, 4);
// cta<6,64,128> warp<24,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 128, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 128, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 128, 24, 16, 128, 8, 8, 128, 4);
// cta<6,96,128> warp<24,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 128, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 128, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 128, 24, 24, 128, 8, 8, 128, 4);
// cta<6,128,128> warp<24,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 128, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 128, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 128, 24, 32, 128, 8, 8, 128, 4);
// cta<6,256,128> warp<24,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 256, 128, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 256, 128, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 256, 128, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,128> warp<32,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 32, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 32, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 32, 8, 128, 8, 8, 128, 4);
// cta<8,64,128> warp<32,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 32, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 32, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 32, 16, 128, 8, 8, 128, 4);
// cta<8,96,128> warp<32,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 128, 32, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 128, 32, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 128, 32, 24, 128, 8, 8, 128, 4);
// cta<8,128,128> warp<32,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 128, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 128, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 128, 32, 32, 128, 8, 8, 128, 4);
// cta<8,256,128> warp<32,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 256, 128, 32, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 256, 128, 32, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 256, 128, 32, 64, 128, 8, 8, 128, 4);
// cta<10,32,128> warp<40,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 128, 40, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 128, 40, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 128, 40, 8, 128, 8, 8, 128, 4);
// cta<10,64,128> warp<40,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 128, 40, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 128, 40, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 128, 40, 16, 128, 8, 8, 128, 4);
// cta<10,96,128> warp<40,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 128, 40, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 128, 40, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 128, 40, 24, 128, 8, 8, 128, 4);
// cta<10,128,128> warp<40,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 128, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 128, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 128, 40, 32, 128, 8, 8, 128, 4);
// cta<10,256,128> warp<40,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 256, 128, 40, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 256, 128, 40, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 256, 128, 40, 64, 128, 8, 8, 128, 4);
// cta<12,32,128> warp<48,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 48, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 48, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 48, 8, 128, 8, 8, 128, 4);
// cta<12,64,128> warp<48,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 48, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 48, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 48, 16, 128, 8, 8, 128, 4);
// cta<12,96,128> warp<48,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 128, 48, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 128, 48, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 128, 48, 24, 128, 8, 8, 128, 4);
// cta<12,128,128> warp<48,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 128, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 128, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 128, 48, 32, 128, 8, 8, 128, 4);
// cta<12,256,128> warp<48,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 256, 128, 48, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 256, 128, 48, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 256, 128, 48, 64, 128, 8, 8, 128, 4);
// cta<14,32,128> warp<56,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 128, 56, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 128, 56, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 128, 56, 8, 128, 8, 8, 128, 4);
// cta<14,64,128> warp<56,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 128, 56, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 128, 56, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 128, 56, 16, 128, 8, 8, 128, 4);
// cta<14,96,128> warp<56,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 128, 56, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 128, 56, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 128, 56, 24, 128, 8, 8, 128, 4);
// cta<14,128,128> warp<56,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 128, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 128, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 128, 56, 32, 128, 8, 8, 128, 4);
// cta<4,32,128> warp<8,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,128> warp<16,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,128> warp<24,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 24, 64, 128, 8, 8, 128, 4);
// cta<4,32,128> warp<8,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 8, 32, 128, 8, 8, 128, 4);
// cta<4,64,128> warp<8,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,128> warp<16,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 16, 32, 128, 8, 8, 128, 4);
// cta<8,64,128> warp<16,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,128> warp<24,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 24, 32, 128, 8, 8, 128, 4);
// cta<12,64,128> warp<24,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 24, 64, 128, 8, 8, 128, 4);
// cta<4,32,128> warp<8,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 128, 8, 16, 128, 8, 8, 128, 4);
// cta<4,64,128> warp<8,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 128, 8, 32, 128, 8, 8, 128, 4);
// cta<4,96,128> warp<8,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 128, 8, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 128, 8, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 128, 8, 48, 128, 8, 8, 128, 4);
// cta<4,128,128> warp<8,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 128, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 128, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 128, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,128> warp<16,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 16, 16, 128, 8, 8, 128, 4);
// cta<8,64,128> warp<16,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 16, 32, 128, 8, 8, 128, 4);
// cta<8,96,128> warp<16,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 128, 16, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 128, 16, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 128, 16, 48, 128, 8, 8, 128, 4);
// cta<8,128,128> warp<16,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 128, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 128, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 128, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,128> warp<24,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 128, 24, 16, 128, 8, 8, 128, 4);
// cta<12,64,128> warp<24,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 128, 24, 32, 128, 8, 8, 128, 4);
// cta<12,96,128> warp<24,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 128, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 128, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 128, 24, 48, 128, 8, 8, 128, 4);
// cta<12,128,128> warp<24,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 128, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 128, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 128, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,128> warp<8,64,128> mma<8,8,128>   WARPS[4x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,128> warp<8,32,128> mma<8,8,128>   WARPS[4x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 128, 8, 32, 128, 8, 8, 128, 4);
// cta<8,64,128> warp<8,64,128> mma<8,8,128>   WARPS[4x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 128, 8, 64, 128, 8, 8, 128, 4);
// cta<2,32,256> warp<8,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 256, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 256, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 256, 8, 32, 128, 8, 8, 128, 4);
// cta<2,64,256> warp<8,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 256, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 256, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 256, 8, 64, 128, 8, 8, 128, 4);
// cta<4,32,256> warp<16,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 16, 32, 128, 8, 8, 128, 4);
// cta<4,64,256> warp<16,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 16, 64, 128, 8, 8, 128, 4);
// cta<6,32,256> warp<24,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 256, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 256, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 256, 24, 32, 128, 8, 8, 128, 4);
// cta<6,64,256> warp<24,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 256, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 256, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 256, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,256> warp<32,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 32, 32, 128, 8, 8, 128, 4);
// cta<8,64,256> warp<32,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 32, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 32, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 32, 64, 128, 8, 8, 128, 4);
// cta<10,32,256> warp<40,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 256, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 256, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 256, 40, 32, 128, 8, 8, 128, 4);
// cta<10,64,256> warp<40,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 256, 40, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 256, 40, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 256, 40, 64, 128, 8, 8, 128, 4);
// cta<12,32,256> warp<48,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 48, 32, 128, 8, 8, 128, 4);
// cta<12,64,256> warp<48,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 48, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 48, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 48, 64, 128, 8, 8, 128, 4);
// cta<14,32,256> warp<56,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 256, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 256, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 256, 56, 32, 128, 8, 8, 128, 4);
// cta<14,64,256> warp<56,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 256, 56, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 256, 56, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 256, 56, 64, 128, 8, 8, 128, 4);
// cta<2,32,256> warp<8,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 256, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 256, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 256, 8, 16, 128, 8, 8, 128, 4);
// cta<2,64,256> warp<8,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 256, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 256, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 256, 8, 32, 128, 8, 8, 128, 4);
// cta<2,96,256> warp<8,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 256, 8, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 256, 8, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 256, 8, 48, 128, 8, 8, 128, 4);
// cta<2,128,256> warp<8,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 256, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 256, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 256, 8, 64, 128, 8, 8, 128, 4);
// cta<4,32,256> warp<16,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 16, 16, 128, 8, 8, 128, 4);
// cta<4,64,256> warp<16,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 16, 32, 128, 8, 8, 128, 4);
// cta<4,96,256> warp<16,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 256, 16, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 256, 16, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 256, 16, 48, 128, 8, 8, 128, 4);
// cta<4,128,256> warp<16,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 256, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 256, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 256, 16, 64, 128, 8, 8, 128, 4);
// cta<6,32,256> warp<24,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 256, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 256, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 256, 24, 16, 128, 8, 8, 128, 4);
// cta<6,64,256> warp<24,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 256, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 256, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 256, 24, 32, 128, 8, 8, 128, 4);
// cta<6,96,256> warp<24,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 256, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 256, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 256, 24, 48, 128, 8, 8, 128, 4);
// cta<6,128,256> warp<24,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 256, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 256, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 256, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,256> warp<32,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 32, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 32, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 32, 16, 128, 8, 8, 128, 4);
// cta<8,64,256> warp<32,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 32, 32, 128, 8, 8, 128, 4);
// cta<8,96,256> warp<32,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 256, 32, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 256, 32, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 256, 32, 48, 128, 8, 8, 128, 4);
// cta<8,128,256> warp<32,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 256, 32, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 256, 32, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 256, 32, 64, 128, 8, 8, 128, 4);
// cta<10,32,256> warp<40,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 256, 40, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 256, 40, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 256, 40, 16, 128, 8, 8, 128, 4);
// cta<10,64,256> warp<40,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 256, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 256, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 256, 40, 32, 128, 8, 8, 128, 4);
// cta<10,96,256> warp<40,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 256, 40, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 256, 40, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 256, 40, 48, 128, 8, 8, 128, 4);
// cta<10,128,256> warp<40,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 256, 40, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 256, 40, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 256, 40, 64, 128, 8, 8, 128, 4);
// cta<12,32,256> warp<48,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 48, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 48, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 48, 16, 128, 8, 8, 128, 4);
// cta<12,64,256> warp<48,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 48, 32, 128, 8, 8, 128, 4);
// cta<12,96,256> warp<48,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 256, 48, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 256, 48, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 256, 48, 48, 128, 8, 8, 128, 4);
// cta<12,128,256> warp<48,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 256, 48, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 256, 48, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 256, 48, 64, 128, 8, 8, 128, 4);
// cta<14,32,256> warp<56,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 256, 56, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 256, 56, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 256, 56, 16, 128, 8, 8, 128, 4);
// cta<14,64,256> warp<56,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 256, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 256, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 256, 56, 32, 128, 8, 8, 128, 4);
// cta<14,96,256> warp<56,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 256, 56, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 256, 56, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 256, 56, 48, 128, 8, 8, 128, 4);
// cta<14,128,256> warp<56,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 256, 56, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 256, 56, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 256, 56, 64, 128, 8, 8, 128, 4);
// cta<2,32,256> warp<8,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 256, 8, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 256, 8, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 256, 8, 8, 128, 8, 8, 128, 4);
// cta<2,64,256> warp<8,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 256, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 256, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 256, 8, 16, 128, 8, 8, 128, 4);
// cta<2,96,256> warp<8,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 256, 8, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 256, 8, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 256, 8, 24, 128, 8, 8, 128, 4);
// cta<2,128,256> warp<8,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 256, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 256, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 256, 8, 32, 128, 8, 8, 128, 4);
// cta<2,256,256> warp<8,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 256, 256, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 256, 256, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 256, 256, 8, 64, 128, 8, 8, 128, 4);
// cta<4,32,256> warp<16,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 16, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 16, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 16, 8, 128, 8, 8, 128, 4);
// cta<4,64,256> warp<16,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 16, 16, 128, 8, 8, 128, 4);
// cta<4,96,256> warp<16,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 256, 16, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 256, 16, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 256, 16, 24, 128, 8, 8, 128, 4);
// cta<4,128,256> warp<16,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 256, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 256, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 256, 16, 32, 128, 8, 8, 128, 4);
// cta<4,256,256> warp<16,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 256, 256, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 256, 256, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 256, 256, 16, 64, 128, 8, 8, 128, 4);
// cta<6,32,256> warp<24,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 256, 24, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 256, 24, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 256, 24, 8, 128, 8, 8, 128, 4);
// cta<6,64,256> warp<24,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 256, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 256, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 256, 24, 16, 128, 8, 8, 128, 4);
// cta<6,96,256> warp<24,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 256, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 256, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 256, 24, 24, 128, 8, 8, 128, 4);
// cta<6,128,256> warp<24,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 256, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 256, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 256, 24, 32, 128, 8, 8, 128, 4);
// cta<6,256,256> warp<24,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 256, 256, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 256, 256, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 256, 256, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,256> warp<32,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 32, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 32, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 32, 8, 128, 8, 8, 128, 4);
// cta<8,64,256> warp<32,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 32, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 32, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 32, 16, 128, 8, 8, 128, 4);
// cta<8,96,256> warp<32,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 256, 32, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 256, 32, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 256, 32, 24, 128, 8, 8, 128, 4);
// cta<8,128,256> warp<32,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 256, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 256, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 256, 32, 32, 128, 8, 8, 128, 4);
// cta<8,256,256> warp<32,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 256, 256, 32, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 256, 256, 32, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 256, 256, 32, 64, 128, 8, 8, 128, 4);
// cta<10,32,256> warp<40,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 256, 40, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 256, 40, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 256, 40, 8, 128, 8, 8, 128, 4);
// cta<10,64,256> warp<40,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 256, 40, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 256, 40, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 256, 40, 16, 128, 8, 8, 128, 4);
// cta<10,96,256> warp<40,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 256, 40, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 256, 40, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 256, 40, 24, 128, 8, 8, 128, 4);
// cta<10,128,256> warp<40,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 256, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 256, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 256, 40, 32, 128, 8, 8, 128, 4);
// cta<10,256,256> warp<40,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 256, 256, 40, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 256, 256, 40, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 256, 256, 40, 64, 128, 8, 8, 128, 4);
// cta<12,32,256> warp<48,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 48, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 48, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 48, 8, 128, 8, 8, 128, 4);
// cta<12,64,256> warp<48,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 48, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 48, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 48, 16, 128, 8, 8, 128, 4);
// cta<12,96,256> warp<48,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 256, 48, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 256, 48, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 256, 48, 24, 128, 8, 8, 128, 4);
// cta<12,128,256> warp<48,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 256, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 256, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 256, 48, 32, 128, 8, 8, 128, 4);
// cta<12,256,256> warp<48,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 256, 256, 48, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 256, 256, 48, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 256, 256, 48, 64, 128, 8, 8, 128, 4);
// cta<14,32,256> warp<56,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 256, 56, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 256, 56, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 256, 56, 8, 128, 8, 8, 128, 4);
// cta<14,64,256> warp<56,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 256, 56, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 256, 56, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 256, 56, 16, 128, 8, 8, 128, 4);
// cta<14,96,256> warp<56,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 256, 56, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 256, 56, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 256, 56, 24, 128, 8, 8, 128, 4);
// cta<14,128,256> warp<56,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 256, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 256, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 256, 56, 32, 128, 8, 8, 128, 4);
// cta<4,32,256> warp<8,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,256> warp<16,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,256> warp<24,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 24, 64, 128, 8, 8, 128, 4);
// cta<4,32,256> warp<8,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 8, 32, 128, 8, 8, 128, 4);
// cta<4,64,256> warp<8,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,256> warp<16,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 16, 32, 128, 8, 8, 128, 4);
// cta<8,64,256> warp<16,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,256> warp<24,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 24, 32, 128, 8, 8, 128, 4);
// cta<12,64,256> warp<24,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 24, 64, 128, 8, 8, 128, 4);
// cta<4,32,256> warp<8,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 256, 8, 16, 128, 8, 8, 128, 4);
// cta<4,64,256> warp<8,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 256, 8, 32, 128, 8, 8, 128, 4);
// cta<4,96,256> warp<8,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 256, 8, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 256, 8, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 256, 8, 48, 128, 8, 8, 128, 4);
// cta<4,128,256> warp<8,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 256, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 256, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 256, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,256> warp<16,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 16, 16, 128, 8, 8, 128, 4);
// cta<8,64,256> warp<16,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 16, 32, 128, 8, 8, 128, 4);
// cta<8,96,256> warp<16,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 256, 16, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 256, 16, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 256, 16, 48, 128, 8, 8, 128, 4);
// cta<8,128,256> warp<16,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 256, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 256, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 256, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,256> warp<24,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 256, 24, 16, 128, 8, 8, 128, 4);
// cta<12,64,256> warp<24,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 256, 24, 32, 128, 8, 8, 128, 4);
// cta<12,96,256> warp<24,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 256, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 256, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 256, 24, 48, 128, 8, 8, 128, 4);
// cta<12,128,256> warp<24,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 256, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 256, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 256, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,256> warp<8,64,128> mma<8,8,128>   WARPS[4x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,256> warp<8,32,128> mma<8,8,128>   WARPS[4x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 256, 8, 32, 128, 8, 8, 128, 4);
// cta<8,64,256> warp<8,64,128> mma<8,8,128>   WARPS[4x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 256, 8, 64, 128, 8, 8, 128, 4);
// cta<2,32,384> warp<8,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 384, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 384, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 384, 8, 32, 128, 8, 8, 128, 4);
// cta<2,64,384> warp<8,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 384, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 384, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 384, 8, 64, 128, 8, 8, 128, 4);
// cta<4,32,384> warp<16,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 16, 32, 128, 8, 8, 128, 4);
// cta<4,64,384> warp<16,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 16, 64, 128, 8, 8, 128, 4);
// cta<6,32,384> warp<24,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 384, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 384, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 384, 24, 32, 128, 8, 8, 128, 4);
// cta<6,64,384> warp<24,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 384, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 384, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 384, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,384> warp<32,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 32, 32, 128, 8, 8, 128, 4);
// cta<8,64,384> warp<32,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 32, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 32, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 32, 64, 128, 8, 8, 128, 4);
// cta<10,32,384> warp<40,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 384, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 384, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 384, 40, 32, 128, 8, 8, 128, 4);
// cta<10,64,384> warp<40,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 384, 40, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 384, 40, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 384, 40, 64, 128, 8, 8, 128, 4);
// cta<12,32,384> warp<48,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 48, 32, 128, 8, 8, 128, 4);
// cta<12,64,384> warp<48,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 48, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 48, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 48, 64, 128, 8, 8, 128, 4);
// cta<14,32,384> warp<56,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 384, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 384, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 384, 56, 32, 128, 8, 8, 128, 4);
// cta<14,64,384> warp<56,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 384, 56, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 384, 56, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 384, 56, 64, 128, 8, 8, 128, 4);
// cta<2,32,384> warp<8,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 384, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 384, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 384, 8, 16, 128, 8, 8, 128, 4);
// cta<2,64,384> warp<8,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 384, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 384, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 384, 8, 32, 128, 8, 8, 128, 4);
// cta<2,96,384> warp<8,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 384, 8, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 384, 8, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 384, 8, 48, 128, 8, 8, 128, 4);
// cta<2,128,384> warp<8,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 384, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 384, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 384, 8, 64, 128, 8, 8, 128, 4);
// cta<4,32,384> warp<16,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 16, 16, 128, 8, 8, 128, 4);
// cta<4,64,384> warp<16,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 16, 32, 128, 8, 8, 128, 4);
// cta<4,96,384> warp<16,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 384, 16, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 384, 16, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 384, 16, 48, 128, 8, 8, 128, 4);
// cta<4,128,384> warp<16,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 384, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 384, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 384, 16, 64, 128, 8, 8, 128, 4);
// cta<6,32,384> warp<24,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 384, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 384, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 384, 24, 16, 128, 8, 8, 128, 4);
// cta<6,64,384> warp<24,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 384, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 384, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 384, 24, 32, 128, 8, 8, 128, 4);
// cta<6,96,384> warp<24,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 384, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 384, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 384, 24, 48, 128, 8, 8, 128, 4);
// cta<6,128,384> warp<24,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 384, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 384, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 384, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,384> warp<32,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 32, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 32, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 32, 16, 128, 8, 8, 128, 4);
// cta<8,64,384> warp<32,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 32, 32, 128, 8, 8, 128, 4);
// cta<8,96,384> warp<32,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 384, 32, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 384, 32, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 384, 32, 48, 128, 8, 8, 128, 4);
// cta<8,128,384> warp<32,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 384, 32, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 384, 32, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 384, 32, 64, 128, 8, 8, 128, 4);
// cta<10,32,384> warp<40,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 384, 40, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 384, 40, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 384, 40, 16, 128, 8, 8, 128, 4);
// cta<10,64,384> warp<40,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 384, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 384, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 384, 40, 32, 128, 8, 8, 128, 4);
// cta<10,96,384> warp<40,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 384, 40, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 384, 40, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 384, 40, 48, 128, 8, 8, 128, 4);
// cta<10,128,384> warp<40,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 384, 40, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 384, 40, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 384, 40, 64, 128, 8, 8, 128, 4);
// cta<12,32,384> warp<48,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 48, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 48, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 48, 16, 128, 8, 8, 128, 4);
// cta<12,64,384> warp<48,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 48, 32, 128, 8, 8, 128, 4);
// cta<12,96,384> warp<48,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 384, 48, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 384, 48, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 384, 48, 48, 128, 8, 8, 128, 4);
// cta<12,128,384> warp<48,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 384, 48, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 384, 48, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 384, 48, 64, 128, 8, 8, 128, 4);
// cta<14,32,384> warp<56,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 384, 56, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 384, 56, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 384, 56, 16, 128, 8, 8, 128, 4);
// cta<14,64,384> warp<56,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 384, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 384, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 384, 56, 32, 128, 8, 8, 128, 4);
// cta<14,96,384> warp<56,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 384, 56, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 384, 56, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 384, 56, 48, 128, 8, 8, 128, 4);
// cta<14,128,384> warp<56,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 384, 56, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 384, 56, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 384, 56, 64, 128, 8, 8, 128, 4);
// cta<2,32,384> warp<8,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 384, 8, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 384, 8, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 384, 8, 8, 128, 8, 8, 128, 4);
// cta<2,64,384> warp<8,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 384, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 384, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 384, 8, 16, 128, 8, 8, 128, 4);
// cta<2,96,384> warp<8,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 384, 8, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 384, 8, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 384, 8, 24, 128, 8, 8, 128, 4);
// cta<2,128,384> warp<8,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 384, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 384, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 384, 8, 32, 128, 8, 8, 128, 4);
// cta<2,256,384> warp<8,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 256, 384, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 256, 384, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 256, 384, 8, 64, 128, 8, 8, 128, 4);
// cta<4,32,384> warp<16,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 16, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 16, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 16, 8, 128, 8, 8, 128, 4);
// cta<4,64,384> warp<16,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 16, 16, 128, 8, 8, 128, 4);
// cta<4,96,384> warp<16,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 384, 16, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 384, 16, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 384, 16, 24, 128, 8, 8, 128, 4);
// cta<4,128,384> warp<16,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 384, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 384, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 384, 16, 32, 128, 8, 8, 128, 4);
// cta<4,256,384> warp<16,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 256, 384, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 256, 384, 16, 64, 128, 8, 8, 128, 3);
// cta<6,32,384> warp<24,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 384, 24, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 384, 24, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 384, 24, 8, 128, 8, 8, 128, 4);
// cta<6,64,384> warp<24,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 384, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 384, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 384, 24, 16, 128, 8, 8, 128, 4);
// cta<6,96,384> warp<24,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 384, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 384, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 384, 24, 24, 128, 8, 8, 128, 4);
// cta<6,128,384> warp<24,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 384, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 384, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 384, 24, 32, 128, 8, 8, 128, 4);
// cta<6,256,384> warp<24,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 256, 384, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 256, 384, 24, 64, 128, 8, 8, 128, 3);
// cta<8,32,384> warp<32,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 32, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 32, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 32, 8, 128, 8, 8, 128, 4);
// cta<8,64,384> warp<32,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 32, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 32, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 32, 16, 128, 8, 8, 128, 4);
// cta<8,96,384> warp<32,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 384, 32, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 384, 32, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 384, 32, 24, 128, 8, 8, 128, 4);
// cta<8,128,384> warp<32,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 384, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 384, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 384, 32, 32, 128, 8, 8, 128, 4);
// cta<8,256,384> warp<32,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 256, 384, 32, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 256, 384, 32, 64, 128, 8, 8, 128, 3);
// cta<10,32,384> warp<40,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 384, 40, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 384, 40, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 384, 40, 8, 128, 8, 8, 128, 4);
// cta<10,64,384> warp<40,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 384, 40, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 384, 40, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 384, 40, 16, 128, 8, 8, 128, 4);
// cta<10,96,384> warp<40,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 384, 40, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 384, 40, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 384, 40, 24, 128, 8, 8, 128, 4);
// cta<10,128,384> warp<40,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 384, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 384, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 384, 40, 32, 128, 8, 8, 128, 4);
// cta<10,256,384> warp<40,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 256, 384, 40, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 256, 384, 40, 64, 128, 8, 8, 128, 3);
// cta<12,32,384> warp<48,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 48, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 48, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 48, 8, 128, 8, 8, 128, 4);
// cta<12,64,384> warp<48,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 48, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 48, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 48, 16, 128, 8, 8, 128, 4);
// cta<12,96,384> warp<48,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 384, 48, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 384, 48, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 384, 48, 24, 128, 8, 8, 128, 4);
// cta<12,128,384> warp<48,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 384, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 384, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 384, 48, 32, 128, 8, 8, 128, 4);
// cta<12,256,384> warp<48,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 256, 384, 48, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 256, 384, 48, 64, 128, 8, 8, 128, 3);
// cta<14,32,384> warp<56,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 384, 56, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 384, 56, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 384, 56, 8, 128, 8, 8, 128, 4);
// cta<14,64,384> warp<56,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 384, 56, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 384, 56, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 384, 56, 16, 128, 8, 8, 128, 4);
// cta<14,96,384> warp<56,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 384, 56, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 384, 56, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 384, 56, 24, 128, 8, 8, 128, 4);
// cta<14,128,384> warp<56,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 384, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 384, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 384, 56, 32, 128, 8, 8, 128, 4);
// cta<4,32,384> warp<8,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,384> warp<16,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,384> warp<24,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 24, 64, 128, 8, 8, 128, 4);
// cta<4,32,384> warp<8,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 8, 32, 128, 8, 8, 128, 4);
// cta<4,64,384> warp<8,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,384> warp<16,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 16, 32, 128, 8, 8, 128, 4);
// cta<8,64,384> warp<16,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,384> warp<24,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 24, 32, 128, 8, 8, 128, 4);
// cta<12,64,384> warp<24,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 24, 64, 128, 8, 8, 128, 4);
// cta<4,32,384> warp<8,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 384, 8, 16, 128, 8, 8, 128, 4);
// cta<4,64,384> warp<8,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 384, 8, 32, 128, 8, 8, 128, 4);
// cta<4,96,384> warp<8,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 384, 8, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 384, 8, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 384, 8, 48, 128, 8, 8, 128, 4);
// cta<4,128,384> warp<8,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 384, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 384, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 384, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,384> warp<16,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 16, 16, 128, 8, 8, 128, 4);
// cta<8,64,384> warp<16,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 16, 32, 128, 8, 8, 128, 4);
// cta<8,96,384> warp<16,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 384, 16, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 384, 16, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 384, 16, 48, 128, 8, 8, 128, 4);
// cta<8,128,384> warp<16,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 384, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 384, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 384, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,384> warp<24,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 384, 24, 16, 128, 8, 8, 128, 4);
// cta<12,64,384> warp<24,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 384, 24, 32, 128, 8, 8, 128, 4);
// cta<12,96,384> warp<24,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 384, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 384, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 384, 24, 48, 128, 8, 8, 128, 4);
// cta<12,128,384> warp<24,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 384, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 384, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 384, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,384> warp<8,64,128> mma<8,8,128>   WARPS[4x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,384> warp<8,32,128> mma<8,8,128>   WARPS[4x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 384, 8, 32, 128, 8, 8, 128, 4);
// cta<8,64,384> warp<8,64,128> mma<8,8,128>   WARPS[4x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 384, 8, 64, 128, 8, 8, 128, 4);
// cta<2,32,512> warp<8,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 512, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 512, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 512, 8, 32, 128, 8, 8, 128, 4);
// cta<2,64,512> warp<8,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 512, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 512, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 512, 8, 64, 128, 8, 8, 128, 4);
// cta<4,32,512> warp<16,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 16, 32, 128, 8, 8, 128, 4);
// cta<4,64,512> warp<16,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 16, 64, 128, 8, 8, 128, 4);
// cta<6,32,512> warp<24,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 512, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 512, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 512, 24, 32, 128, 8, 8, 128, 4);
// cta<6,64,512> warp<24,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 512, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 512, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 512, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,512> warp<32,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 32, 32, 128, 8, 8, 128, 4);
// cta<8,64,512> warp<32,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 32, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 32, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 32, 64, 128, 8, 8, 128, 4);
// cta<10,32,512> warp<40,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 512, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 512, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 512, 40, 32, 128, 8, 8, 128, 4);
// cta<10,64,512> warp<40,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 512, 40, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 512, 40, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 512, 40, 64, 128, 8, 8, 128, 4);
// cta<12,32,512> warp<48,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 48, 32, 128, 8, 8, 128, 4);
// cta<12,64,512> warp<48,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 48, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 48, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 48, 64, 128, 8, 8, 128, 4);
// cta<14,32,512> warp<56,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 512, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 512, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 512, 56, 32, 128, 8, 8, 128, 4);
// cta<14,64,512> warp<56,64,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 512, 56, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 512, 56, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 512, 56, 64, 128, 8, 8, 128, 4);
// cta<2,32,512> warp<8,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 512, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 512, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 512, 8, 16, 128, 8, 8, 128, 4);
// cta<2,64,512> warp<8,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 512, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 512, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 512, 8, 32, 128, 8, 8, 128, 4);
// cta<2,96,512> warp<8,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 512, 8, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 512, 8, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 512, 8, 48, 128, 8, 8, 128, 4);
// cta<2,128,512> warp<8,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 512, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 512, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 512, 8, 64, 128, 8, 8, 128, 4);
// cta<4,32,512> warp<16,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 16, 16, 128, 8, 8, 128, 4);
// cta<4,64,512> warp<16,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 16, 32, 128, 8, 8, 128, 4);
// cta<4,96,512> warp<16,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 512, 16, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 512, 16, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 512, 16, 48, 128, 8, 8, 128, 4);
// cta<4,128,512> warp<16,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 512, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 512, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 512, 16, 64, 128, 8, 8, 128, 4);
// cta<6,32,512> warp<24,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 512, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 512, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 512, 24, 16, 128, 8, 8, 128, 4);
// cta<6,64,512> warp<24,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 512, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 512, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 512, 24, 32, 128, 8, 8, 128, 4);
// cta<6,96,512> warp<24,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 512, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 512, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 512, 24, 48, 128, 8, 8, 128, 4);
// cta<6,128,512> warp<24,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 512, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 512, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 512, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,512> warp<32,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 32, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 32, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 32, 16, 128, 8, 8, 128, 4);
// cta<8,64,512> warp<32,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 32, 32, 128, 8, 8, 128, 4);
// cta<8,96,512> warp<32,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 512, 32, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 512, 32, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 512, 32, 48, 128, 8, 8, 128, 4);
// cta<8,128,512> warp<32,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 512, 32, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 512, 32, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 512, 32, 64, 128, 8, 8, 128, 4);
// cta<10,32,512> warp<40,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 512, 40, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 512, 40, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 512, 40, 16, 128, 8, 8, 128, 4);
// cta<10,64,512> warp<40,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 512, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 512, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 512, 40, 32, 128, 8, 8, 128, 4);
// cta<10,96,512> warp<40,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 512, 40, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 512, 40, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 512, 40, 48, 128, 8, 8, 128, 4);
// cta<10,128,512> warp<40,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 512, 40, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 512, 40, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 512, 40, 64, 128, 8, 8, 128, 4);
// cta<12,32,512> warp<48,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 48, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 48, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 48, 16, 128, 8, 8, 128, 4);
// cta<12,64,512> warp<48,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 48, 32, 128, 8, 8, 128, 4);
// cta<12,96,512> warp<48,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 512, 48, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 512, 48, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 512, 48, 48, 128, 8, 8, 128, 4);
// cta<12,128,512> warp<48,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 512, 48, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 512, 48, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 512, 48, 64, 128, 8, 8, 128, 4);
// cta<14,32,512> warp<56,16,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 512, 56, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 512, 56, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 512, 56, 16, 128, 8, 8, 128, 4);
// cta<14,64,512> warp<56,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 512, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 512, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 512, 56, 32, 128, 8, 8, 128, 4);
// cta<14,96,512> warp<56,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 512, 56, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 512, 56, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 512, 56, 48, 128, 8, 8, 128, 4);
// cta<14,128,512> warp<56,64,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 512, 56, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 512, 56, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 512, 56, 64, 128, 8, 8, 128, 4);
// cta<2,32,512> warp<8,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 512, 8, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 512, 8, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 32, 512, 8, 8, 128, 8, 8, 128, 4);
// cta<2,64,512> warp<8,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 512, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 512, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 64, 512, 8, 16, 128, 8, 8, 128, 4);
// cta<2,96,512> warp<8,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 512, 8, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 512, 8, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 96, 512, 8, 24, 128, 8, 8, 128, 4);
// cta<2,128,512> warp<8,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 512, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 512, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 128, 512, 8, 32, 128, 8, 8, 128, 4);
// cta<2,256,512> warp<8,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 256, 512, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 2, 256, 512, 8, 64, 128, 8, 8, 128, 3);
// cta<4,32,512> warp<16,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 16, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 16, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 16, 8, 128, 8, 8, 128, 4);
// cta<4,64,512> warp<16,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 16, 16, 128, 8, 8, 128, 4);
// cta<4,96,512> warp<16,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 512, 16, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 512, 16, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 512, 16, 24, 128, 8, 8, 128, 4);
// cta<4,128,512> warp<16,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 512, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 512, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 512, 16, 32, 128, 8, 8, 128, 4);
// cta<4,256,512> warp<16,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 256, 512, 16, 64, 128, 8, 8, 128, 2);
// cta<6,32,512> warp<24,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 512, 24, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 512, 24, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 32, 512, 24, 8, 128, 8, 8, 128, 4);
// cta<6,64,512> warp<24,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 512, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 512, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 64, 512, 24, 16, 128, 8, 8, 128, 4);
// cta<6,96,512> warp<24,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 512, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 512, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 96, 512, 24, 24, 128, 8, 8, 128, 4);
// cta<6,128,512> warp<24,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 512, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 512, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 128, 512, 24, 32, 128, 8, 8, 128, 4);
// cta<6,256,512> warp<24,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 6, 256, 512, 24, 64, 128, 8, 8, 128, 2);
// cta<8,32,512> warp<32,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 32, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 32, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 32, 8, 128, 8, 8, 128, 4);
// cta<8,64,512> warp<32,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 32, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 32, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 32, 16, 128, 8, 8, 128, 4);
// cta<8,96,512> warp<32,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 512, 32, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 512, 32, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 512, 32, 24, 128, 8, 8, 128, 4);
// cta<8,128,512> warp<32,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 512, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 512, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 512, 32, 32, 128, 8, 8, 128, 4);
// cta<8,256,512> warp<32,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 256, 512, 32, 64, 128, 8, 8, 128, 2);
// cta<10,32,512> warp<40,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 512, 40, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 512, 40, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 32, 512, 40, 8, 128, 8, 8, 128, 4);
// cta<10,64,512> warp<40,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 512, 40, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 512, 40, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 64, 512, 40, 16, 128, 8, 8, 128, 4);
// cta<10,96,512> warp<40,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 512, 40, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 512, 40, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 96, 512, 40, 24, 128, 8, 8, 128, 4);
// cta<10,128,512> warp<40,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 512, 40, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 512, 40, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 128, 512, 40, 32, 128, 8, 8, 128, 4);
// cta<10,256,512> warp<40,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 10, 256, 512, 40, 64, 128, 8, 8, 128, 2);
// cta<12,32,512> warp<48,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 48, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 48, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 48, 8, 128, 8, 8, 128, 4);
// cta<12,64,512> warp<48,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 48, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 48, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 48, 16, 128, 8, 8, 128, 4);
// cta<12,96,512> warp<48,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 512, 48, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 512, 48, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 512, 48, 24, 128, 8, 8, 128, 4);
// cta<12,128,512> warp<48,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 512, 48, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 512, 48, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 512, 48, 32, 128, 8, 8, 128, 4);
// cta<12,256,512> warp<48,64,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 256, 512, 48, 64, 128, 8, 8, 128, 2);
// cta<14,32,512> warp<56,8,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 512, 56, 8, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 512, 56, 8, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 32, 512, 56, 8, 128, 8, 8, 128, 4);
// cta<14,64,512> warp<56,16,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 512, 56, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 512, 56, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 64, 512, 56, 16, 128, 8, 8, 128, 4);
// cta<14,96,512> warp<56,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 512, 56, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 512, 56, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 96, 512, 56, 24, 128, 8, 8, 128, 4);
// cta<14,128,512> warp<56,32,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 512, 56, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 512, 56, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 14, 128, 512, 56, 32, 128, 8, 8, 128, 4);
// cta<4,32,512> warp<8,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,512> warp<16,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,512> warp<24,64,128> mma<8,8,128>   WARPS[2x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 24, 64, 128, 8, 8, 128, 4);
// cta<4,32,512> warp<8,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 8, 32, 128, 8, 8, 128, 4);
// cta<4,64,512> warp<8,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,512> warp<16,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 16, 32, 128, 8, 8, 128, 4);
// cta<8,64,512> warp<16,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,512> warp<24,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 24, 32, 128, 8, 8, 128, 4);
// cta<12,64,512> warp<24,64,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 24, 64, 128, 8, 8, 128, 4);
// cta<4,32,512> warp<8,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 32, 512, 8, 16, 128, 8, 8, 128, 4);
// cta<4,64,512> warp<8,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 64, 512, 8, 32, 128, 8, 8, 128, 4);
// cta<4,96,512> warp<8,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 512, 8, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 512, 8, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 96, 512, 8, 48, 128, 8, 8, 128, 4);
// cta<4,128,512> warp<8,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 512, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 512, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 4, 128, 512, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,512> warp<16,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 16, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 16, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 16, 16, 128, 8, 8, 128, 4);
// cta<8,64,512> warp<16,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 16, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 16, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 16, 32, 128, 8, 8, 128, 4);
// cta<8,96,512> warp<16,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 512, 16, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 512, 16, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 96, 512, 16, 48, 128, 8, 8, 128, 4);
// cta<8,128,512> warp<16,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 512, 16, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 512, 16, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 128, 512, 16, 64, 128, 8, 8, 128, 4);
// cta<12,32,512> warp<24,16,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 24, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 24, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 32, 512, 24, 16, 128, 8, 8, 128, 4);
// cta<12,64,512> warp<24,32,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 24, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 24, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 64, 512, 24, 32, 128, 8, 8, 128, 4);
// cta<12,96,512> warp<24,48,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 512, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 512, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 96, 512, 24, 48, 128, 8, 8, 128, 4);
// cta<12,128,512> warp<24,64,128> mma<8,8,128>   WARPS[2x4]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 512, 24, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 512, 24, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 12, 128, 512, 24, 64, 128, 8, 8, 128, 4);
// cta<8,32,512> warp<8,64,128> mma<8,8,128>   WARPS[4x1]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 8, 64, 128, 8, 8, 128, 4);
// cta<8,32,512> warp<8,32,128> mma<8,8,128>   WARPS[4x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 32, 512, 8, 32, 128, 8, 8, 128, 4);
// cta<8,64,512> warp<8,64,128> mma<8,8,128>   WARPS[4x2]
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 8, 64, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 8, 64, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 4, 2, true, 8, 64, 512, 8, 64, 128, 8, 8, 128, 4);
#endif