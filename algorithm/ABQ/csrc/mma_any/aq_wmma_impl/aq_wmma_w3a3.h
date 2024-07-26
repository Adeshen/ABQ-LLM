#pragma once
#include "common/base.h"
#include "mma_any/aq_wmma_op.h"

#ifdef W3A3
////// W3A3 int
// cta<8,16,128> warp<24,24,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 16, 128, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 16, 128, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 16, 128, 24, 24, 128, 8, 8, 128, 4);
// cta<8,32,128> warp<24,48,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 128, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 128, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 128, 24, 48, 128, 8, 8, 128, 4);
// cta<8,32,128> warp<24,24,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 128, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 128, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 128, 24, 24, 128, 8, 8, 128, 4);
// cta<8,64,128> warp<24,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 128, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 128, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 128, 24, 48, 128, 8, 8, 128, 4);
// cta<8,64,128> warp<24,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 128, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 128, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 128, 24, 24, 128, 8, 8, 128, 4);
// cta<8,128,128> warp<24,48,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 128, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 128, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 128, 24, 48, 128, 8, 8, 128, 4);
// cta<8,128,128> warp<24,24,128> mma<8,8,128>   WARPS[1x16]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 128, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 128, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 128, 24, 24, 128, 8, 8, 128, 4);
// cta<8,8,256> warp<24,24,128> mma<8,8,128>   WARPS[1x1]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 8, 256, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 8, 256, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 8, 256, 24, 24, 128, 8, 8, 128, 4);
// cta<8,16,256> warp<24,48,128> mma<8,8,128>   WARPS[1x1]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 16, 256, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 16, 256, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 16, 256, 24, 48, 128, 8, 8, 128, 4);
// cta<8,16,256> warp<24,24,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 16, 256, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 16, 256, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 16, 256, 24, 24, 128, 8, 8, 128, 4);
// cta<8,32,256> warp<24,48,128> mma<8,8,128>   WARPS[1x2]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 256, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 256, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 256, 24, 48, 128, 8, 8, 128, 4);
// cta<8,32,256> warp<24,24,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 256, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 256, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 32, 256, 24, 24, 128, 8, 8, 128, 4);
// cta<8,64,256> warp<24,48,128> mma<8,8,128>   WARPS[1x4]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 256, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 256, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 256, 24, 48, 128, 8, 8, 128, 4);
// cta<8,64,256> warp<24,24,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 256, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 256, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 64, 256, 24, 24, 128, 8, 8, 128, 4);
// cta<8,128,256> warp<24,48,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 256, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 256, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 256, 24, 48, 128, 8, 8, 128, 4);
// cta<8,128,256> warp<24,24,128> mma<8,8,128>   WARPS[1x16]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 256, 24, 24, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 256, 24, 24, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 256, 24, 24, 128, 8, 8, 128, 4);

// cta<8,128,384> warp<24,48,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 384, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 384, 24, 48, 128, 8, 8, 128, 3);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 384, 24, 48, 128, 8, 8, 128, 4);

// cta<8,128,512> warp<24,48,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 512, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 512, 24, 48, 128, 8, 8, 128, 3);

// cta<8,128,640> warp<24,48,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 640, 24, 48, 128, 8, 8, 128, 2);
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 640, 24, 48, 128, 8, 8, 128, 3);

// cta<8,128,768> warp<24,48,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 768, 24, 48, 128, 8, 8, 128, 2);

// cta<8,128,896> warp<24,48,128> mma<8,8,128>   WARPS[1x8]
AQ_DECL_FUN(AqBWMMA, 3, 3, true, 8, 128, 896, 24, 48, 128, 8, 8, 128, 2);
#endif