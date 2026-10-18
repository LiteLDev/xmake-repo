#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class StrictEntityContext;
// clang-format on
#endif // @header-generator platform

struct PassengersToPositionComponent {
public:
    // PassengersToPositionComponent inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // PassengersToPositionComponent inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 8, ::StrictEntityContext> mPassenger;
        ::ll::TypedStorage<4, 8, ::StrictEntityContext> mVehicle;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 8> mUnk140c93;
        ::ll::UntypedStorage<4, 8> mUnk2073b7;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Data(Data const&);
        Data();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PassengersToPositionComponent::Data>> mData;
    ::ll::TypedStorage<8, 24, std::vector<StrictEntityContext>>                 mStack;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::PassengersToPositionComponent::Data>> mData;
    ::ll::TypedStorage<8, 24, ::std::vector<::StrictEntityContext>>                 mStack;
#endif // @header-generator platform
    // NOLINTEND
};
