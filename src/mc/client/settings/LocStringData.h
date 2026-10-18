#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
struct LocStringData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              id;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> parameters;
    // NOLINTEND

public:
    // prevent constructor by default
    LocStringData& operator=(LocStringData const&);
    LocStringData(LocStringData const&);
    LocStringData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LocStringData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LocStringData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                id;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> parameters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LocStringData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct LocStringData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
