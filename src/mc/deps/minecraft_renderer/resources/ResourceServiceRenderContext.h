#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ResourceServiceRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<mce::RenderContext*>> mRenderContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceServiceRenderContext();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ResourceServiceRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7dfc3d;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceServiceRenderContext& operator=(ResourceServiceRenderContext const&);
    ResourceServiceRenderContext(ResourceServiceRenderContext const&);
    ResourceServiceRenderContext();
};
#else // @header-generator platform
class ResourceServiceRenderContext {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
