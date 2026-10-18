#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/EduShareUriType.h"

struct EduShareLinkItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>      shareUri;
    ::ll::TypedStorage<8, 24, std::string>      id;
    ::ll::TypedStorage<8, 24, std::string>      title;
    ::ll::TypedStorage<4, 4, ::EduShareUriType> shareType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduShareLinkItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/EduShareUriType.h"

struct EduShareLinkItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>    shareUri;
    ::ll::TypedStorage<8, 32, ::std::string>    id;
    ::ll::TypedStorage<8, 32, ::std::string>    title;
    ::ll::TypedStorage<4, 4, ::EduShareUriType> shareType;
    // NOLINTEND
};
#else // @header-generator platform
struct EduShareLinkItem {};
#endif // @header-generator platform
#endif // @header-generator platform
