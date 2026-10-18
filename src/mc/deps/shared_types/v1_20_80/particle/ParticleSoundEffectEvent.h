#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_20_80 {

struct ParticleSoundEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mEventName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mEventName;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
