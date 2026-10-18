#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ActorBindInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActorRef;
    ::ll::TypedStorage<8, 48, ::HashedString>  mLocator;
    ::ll::TypedStorage<4, 12, ::Vec3>          mOffset;
    // NOLINTEND
};
#else // @header-generator platform
struct ActorBindInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem
