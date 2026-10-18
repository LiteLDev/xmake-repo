#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class SharedConfigurationLoader {};
#endif // @header-generator platform
