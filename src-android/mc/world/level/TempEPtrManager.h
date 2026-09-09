#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class _TickPtr;
// clang-format on

class TempEPtrManager {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
