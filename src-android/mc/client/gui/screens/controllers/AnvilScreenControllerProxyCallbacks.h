#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

struct AnvilScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mAddItemFirstSlot;
    ::ll::UntypedStorage<8, 48> mAddItemSecondSlot;
    ::ll::UntypedStorage<8, 48> mSetName;
    ::ll::UntypedStorage<8, 48> mGetResultItem;
    ::ll::UntypedStorage<8, 48> mGetFilteredResultName;
    ::ll::UntypedStorage<8, 48> mAutoPlace;
    ::ll::UntypedStorage<8, 48> mCanBeClosedByServer;
    ::ll::UntypedStorage<8, 48> mLeaveScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilScreenControllerProxyCallbacks& operator=(AnvilScreenControllerProxyCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnvilScreenControllerProxyCallbacks(::AnvilScreenControllerProxyCallbacks const&);

    MCNAPI ~AnvilScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AnvilScreenControllerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
