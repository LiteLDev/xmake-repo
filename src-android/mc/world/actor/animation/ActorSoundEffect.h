#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorSoundEffect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mSoundEffectName;
    ::ll::TypedStorage<8, 40, ::HashedString> mLocatorName;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSoundEffect& operator=(ActorSoundEffect const&);
    ActorSoundEffect(ActorSoundEffect const&);
};
