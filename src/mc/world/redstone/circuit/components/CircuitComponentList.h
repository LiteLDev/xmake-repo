#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/BlockPos.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
// clang-format on

class CircuitComponentList {
public:
    // CircuitComponentList inner types declare
    // clang-format off
    class Item;
    // clang-format on

    // CircuitComponentList inner types define
    class Item {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::BaseCircuitComponent*> mComponent;
        ::ll::TypedStorage<4, 4, int>                     mDampening;
        ::ll::TypedStorage<4, 12, ::BlockPos>             mPos;
        ::ll::TypedStorage<1, 1, uchar>                   mDirection;
        ::ll::TypedStorage<1, 1, bool>                    mDirectlyPowered;
        ::ll::TypedStorage<4, 4, int>                     mData;
#else // @header-generator platform
        ::BaseCircuitComponent* mComponent;
        int                     mDampening;
        ::BlockPos              mPos;
        uchar                   mDirection;
        bool                    mDirectlyPowered;
        int                     mData;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<CircuitComponentList::Item>> mComponents;
#else // @header-generator platform
    ::std::vector<::CircuitComponentList::Item> mComponents;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CircuitComponentList& operator=(CircuitComponentList const&);
    CircuitComponentList(CircuitComponentList const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(::BaseCircuitComponent*, int, ::BlockPos);
#else // @header-generator platform
    MCAPI ~CircuitComponentList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
