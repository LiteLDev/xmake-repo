#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum bgfx_occlusion_query_result : uint {
    BGFX_OCCLUSION_QUERY_RESULT_INVISIBLE = 0,
    BGFX_OCCLUSION_QUERY_RESULT_VISIBLE   = 1,
    BGFX_OCCLUSION_QUERY_RESULT_NORESULT  = 2,
    BGFX_OCCLUSION_QUERY_RESULT_COUNT     = 3,
};
#else // @header-generator platform
enum class bgfx_occlusion_query_result : int {};
#endif // @header-generator platform
