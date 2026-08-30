#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ParticleSystem {

struct ActorBindInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mActorRef;
    ::ll::TypedStorage<8, 40, ::HashedString>  mLocator;
    ::ll::TypedStorage<4, 12, ::Vec3>          mOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorBindInfo& operator=(ActorBindInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorBindInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem
