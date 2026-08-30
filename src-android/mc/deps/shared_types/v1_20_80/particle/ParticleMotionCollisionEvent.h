#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleMotionCollisionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>           mMinSpeed;
    ::ll::TypedStorage<8, 40, ::HashedString> mEventName;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
