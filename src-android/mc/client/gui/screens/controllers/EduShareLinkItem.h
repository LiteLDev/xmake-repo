#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
