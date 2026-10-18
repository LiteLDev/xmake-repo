#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct JoinCodeIconData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> toolTip;
    ::ll::TypedStorage<8, 24, std::string> texture;
    // NOLINTEND

public:
    // prevent constructor by default
    JoinCodeIconData& operator=(JoinCodeIconData const&);
    JoinCodeIconData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JoinCodeIconData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<JoinCodeIconData> const& gData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct JoinCodeIconData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> toolTip;
    ::ll::TypedStorage<8, 32, ::std::string> texture;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::JoinCodeIconData> const& gData();
    // NOLINTEND
};
#else // @header-generator platform
struct JoinCodeIconData {};
#endif // @header-generator platform
#endif // @header-generator platform
