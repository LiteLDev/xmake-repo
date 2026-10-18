#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

struct AnvilScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                            mAddItemFirstSlot;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                            mAddItemSecondSlot;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>           mSetName;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&()>>             mGetResultItem;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string const()>>                mGetFilteredResultName;
    ::ll::TypedStorage<8, 64, ::std::function<void(int, ::std::string const&, int)>> mAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                               mCanBeClosedByServer;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                               mLeaveScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilScreenControllerProxyCallbacks& operator=(AnvilScreenControllerProxyCallbacks const&);
    AnvilScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnvilScreenControllerProxyCallbacks(::AnvilScreenControllerProxyCallbacks const&);

    MCAPI ~AnvilScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AnvilScreenControllerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct AnvilScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
