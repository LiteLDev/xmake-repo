#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct FocusContainerCustomData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> otherFocusContainerName;
    ::ll::TypedStorage<8, 24, std::string> focusIdInside;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusContainerCustomData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FocusContainerCustomData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FocusContainerCustomData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> otherFocusContainerName;
    ::ll::TypedStorage<8, 32, ::std::string> focusIdInside;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusContainerCustomData& operator=(FocusContainerCustomData const&);
    FocusContainerCustomData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FocusContainerCustomData(::FocusContainerCustomData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::FocusContainerCustomData const&);
    // NOLINTEND
};
#else // @header-generator platform
struct FocusContainerCustomData {};
#endif // @header-generator platform
#endif // @header-generator platform
