#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PlatformConfiguration;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SharedConfigurationLoader {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void loadSharedConfigurationSync(::cereal::ReflectionCtx const&, ::PlatformConfiguration&);
    // NOLINTEND
};
