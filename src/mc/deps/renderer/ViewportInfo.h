#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct ViewportInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> size;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> offset;
    ::ll::TypedStorage<4, 4, float>                                   minDepth;
    ::ll::TypedStorage<4, 4, float>                                   maxDepth;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewportInfo& operator=(ViewportInfo const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ViewportInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2> size;
    ::ll::TypedStorage<4, 8, ::glm::vec2> offset;
    ::ll::TypedStorage<4, 4, float>       minDepth;
    ::ll::TypedStorage<4, 4, float>       maxDepth;
    // NOLINTEND
};
#else // @header-generator platform
struct ViewportInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
