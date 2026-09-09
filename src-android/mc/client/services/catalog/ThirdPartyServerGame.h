#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ThirdPartyServerGame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> imageTag;
    ::ll::TypedStorage<8, 24, std::string> title;
    ::ll::TypedStorage<8, 24, std::string> subtitle;
    ::ll::TypedStorage<8, 24, std::string> description;
    // NOLINTEND

public:
    // prevent constructor by default
    ThirdPartyServerGame& operator=(ThirdPartyServerGame const&);
    ThirdPartyServerGame(ThirdPartyServerGame const&);
    ThirdPartyServerGame();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ThirdPartyServerGame();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
