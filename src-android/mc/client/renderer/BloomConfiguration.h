#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/BloomParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BloomConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                       mDefaultBloomEnabled;
    ::ll::TypedStorage<4, 12, ::dragon::framerenderer::modules::postfx::BloomParameters> mBloomParameters;
    // NOLINTEND
};
