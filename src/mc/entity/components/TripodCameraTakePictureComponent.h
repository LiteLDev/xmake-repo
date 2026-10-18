#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class TripodCameraTakePictureComponent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // TripodCameraTakePictureComponent inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // TripodCameraTakePictureComponent inner types define
    class Definition {};

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24> mSubject;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mSubject;
#endif // @header-generator platform
    // NOLINTEND
};
