#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct PackErrorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> type;
    ::ll::TypedStorage<8, 24, std::string> file;
    ::ll::TypedStorage<8, 24, std::string> text;
    // NOLINTEND

public:
    // prevent constructor by default
    PackErrorInfo& operator=(PackErrorInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackErrorInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PackErrorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> type;
    ::ll::TypedStorage<8, 32, ::std::string> file;
    ::ll::TypedStorage<8, 32, ::std::string> text;
    // NOLINTEND
};
#else // @header-generator platform
struct PackErrorInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
