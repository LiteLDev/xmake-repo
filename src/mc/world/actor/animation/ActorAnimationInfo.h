#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ActorSkeletalAnimation;
// clang-format on

class ActorAnimationInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                         mName;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorSkeletalAnimation>> mPtr;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                             mName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorSkeletalAnimation>> mPtr;
#endif // @header-generator platform
    // NOLINTEND
};
