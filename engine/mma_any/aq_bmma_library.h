// Copyright (C) 2024 ByteDance and/or its affiliates
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
#include "mma_any/aq_bmma_op.h"

#include "aq_bmma_impl/aq_bmma_w2a2.h"
#include "aq_bmma_impl/aq_bmma_w2a4.h"
#include "aq_bmma_impl/aq_bmma_w2a6.h"
#include "aq_bmma_impl/aq_bmma_w2a8.h"
#include "aq_bmma_impl/aq_bmma_w2a16.h"

#include "aq_bmma_impl/aq_bmma_w3a3.h"
#include "aq_bmma_impl/aq_bmma_w3a8.h"

#include "aq_bmma_impl/aq_bmma_w4a4.h"
#include "aq_bmma_impl/aq_bmma_w4a8.h"

#include "aq_bmma_impl/aq_bmma_w5a5.h"

#include "aq_bmma_impl/aq_bmma_w6a6.h"

#include "aq_bmma_impl/aq_bmma_w7a7.h"

#include "aq_bmma_impl/aq_bmma_w8a8.h"

////// W1A1 int
// cta<8,32,128> warp<8,16,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBMMA, 1, 1, true, 8, 32, 128, 8, 16, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBMMA, 1, 1, true, 8, 32, 128, 8, 16, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBMMA, 1, 1, true, 8, 32, 128, 8, 16, 128, 8, 8, 128, 4);
// cta<8,64,128> warp<8,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBMMA, 1, 1, true, 8, 64, 128, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBMMA, 1, 1, true, 8, 64, 128, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBMMA, 1, 1, true, 8, 64, 128, 8, 32, 128, 8, 8, 128, 4);
// cta<8,128,128> warp<8,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBMMA, 1, 1, true, 8, 128, 128, 8, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBMMA, 1, 1, true, 8, 128, 128, 8, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBMMA, 1, 1, true, 8, 128, 128, 8, 32, 128, 8, 8, 128, 4);

////// W1A4 int
// cta<8,64,128> warp<32,32,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBMMA, 4, 1, true, 8, 64, 128, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBMMA, 4, 1, true, 8, 64, 128, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBMMA, 4, 1, true, 8, 64, 128, 32, 32, 128, 8, 8, 128, 4);
// cta<8,128,128> warp<32,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBMMA, 4, 1, true, 8, 128, 128, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBMMA, 4, 1, true, 8, 128, 128, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBMMA, 4, 1, true, 8, 128, 128, 32, 32, 128, 8, 8, 128, 4);

////// W1A8 int
// cta<8,64,128> warp<32,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBMMA, 8, 1, true, 8, 64, 128, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBMMA, 8, 1, true, 8, 64, 128, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBMMA, 8, 1, true, 8, 64, 128, 32, 32, 128, 8, 8, 128, 4);
// cta<8,128,128> warp<64,32,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBMMA, 8, 1, true, 8, 128, 128, 64, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBMMA, 8, 1, true, 8, 128, 128, 64, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBMMA, 8, 1, true, 8, 128, 128, 64, 32, 128, 8, 8, 128, 4);

////// W1A16 int
// cta<8,32,128> warp<32,32,128> mma<8,8,128>   WARPS[4x1]
AQ_DECL_FUN(AqBMMA, 16, 1, true, 8, 32, 128, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBMMA, 16, 1, true, 8, 32, 128, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBMMA, 16, 1, true, 8, 32, 128, 32, 32, 128, 8, 8, 128, 4);
// cta<8,32,256> warp<32,32,128> mma<8,8,128>   WARPS[4x1]
AQ_DECL_FUN(AqBMMA, 16, 1, true, 8, 32, 256, 32, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBMMA, 16, 1, true, 8, 32, 256, 32, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBMMA, 16, 1, true, 8, 32, 256, 32, 32, 128, 8, 8, 128, 4);

////// W2A16 int
// cta<8,32,128> warp<64,32,128> mma<8,8,128>   WARPS[2x2]
AQ_DECL_FUN(AqBMMA, 16, 2, true, 8, 32, 128, 64, 32, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBMMA, 16, 2, true, 8, 32, 128, 64, 32, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBMMA, 16, 2, true, 8, 32, 128, 64, 32, 128, 8, 8, 128, 4);