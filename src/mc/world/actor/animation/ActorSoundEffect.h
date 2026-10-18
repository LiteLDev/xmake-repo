#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class ActorSoundEffect {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mSoundEffectName;
    ::ll::TypedStorage<8, 40, ::HashedString> mLocatorName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mSoundEffectName;
    ::ll::TypedStorage<8, 48, ::HashedString> mLocatorName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorSoundEffect& operator=(ActorSoundEffect const&);
    ActorSoundEffect(ActorSoundEffect const&);
#else // @header-generator platform
#endif // @header-generator platform
};
