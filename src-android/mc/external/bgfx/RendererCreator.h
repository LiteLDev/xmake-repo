#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/RenderFlipMode.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Init; }
namespace bgfx { struct RendererContextI; }
// clang-format on

namespace bgfx {

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

} // namespace bgfx
