#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
// clang-format on

struct RenderPassContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::RenderContext&> renderContext;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderPassContext& operator=(RenderPassContext const&);
    RenderPassContext(RenderPassContext const&);
    RenderPassContext();
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
