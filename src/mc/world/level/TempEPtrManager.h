#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class _TickPtr;
// clang-format on
#else // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/_TickPtr.h"
#endif // @header-generator platform

class TempEPtrManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<_TickPtr*>> mTempTickPointers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TempEPtrManager();

    MCNAPI void registerTemporaryPointer(::_TickPtr&);

    MCNAPI void tickTemporaryPointers();

    MCNAPI void unregisterTemporaryPointer(::_TickPtr&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::_TickPtr*>> mTempTickPointers;
#endif // @header-generator platform
    // NOLINTEND
};
