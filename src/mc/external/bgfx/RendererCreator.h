#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/RenderFlipMode.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Init; }
namespace bgfx { struct RendererContextI; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct RendererCreator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::RendererContextI* (*)(::bgfx::Init const&)> createFn;
    ::ll::TypedStorage<8, 8, void (*)()>                                         destroyFn;
    ::ll::TypedStorage<8, 8, char const*>                                        name;
    ::ll::TypedStorage<1, 1, bool>                                               supported;
    ::ll::UntypedStorage<4, 4>                                                   renderFlipMode;
    ::ll::TypedStorage<1, 1, bool>                                               asyncInitSupport;
    // NOLINTEND
};
#else // @header-generator platform
struct RendererCreator {};
#endif // @header-generator platform

} // namespace bgfx
