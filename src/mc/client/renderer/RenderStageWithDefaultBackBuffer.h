#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/RenderStage.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/RenderStage.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderStageWithDefaultBackBuffer : public ::mce::RenderStage {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void preRender(::ScreenContext&);

    virtual void postRender(::ScreenContext&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderStageWithDefaultBackBuffer : public ::mce::RenderStage {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void preRender(::ScreenContext& screenContext) /*override*/;

    virtual void postRender(::ScreenContext& screenContext) /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class RenderStageWithDefaultBackBuffer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
