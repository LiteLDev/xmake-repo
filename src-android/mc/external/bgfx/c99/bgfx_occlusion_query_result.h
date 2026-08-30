#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum bgfx_occlusion_query_result : uint {
    BGFX_OCCLUSION_QUERY_RESULT_INVISIBLE = 0,
    BGFX_OCCLUSION_QUERY_RESULT_VISIBLE   = 1,
    BGFX_OCCLUSION_QUERY_RESULT_NORESULT  = 2,
    BGFX_OCCLUSION_QUERY_RESULT_COUNT     = 3,
};
