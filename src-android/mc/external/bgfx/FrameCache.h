#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/MatrixCache.h"
#include "mc/external/bgfx/RectCache.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Rect; }
// clang-format on

namespace bgfx {

struct FrameCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4194320> m_matrixCache;
    ::ll::UntypedStorage<4, 524304>  m_rectCache;
    // NOLINTEND
};

} // namespace bgfx
