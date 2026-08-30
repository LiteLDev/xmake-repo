#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/identity/SocialChangeAction.h"

namespace Social {

struct SocialChangeResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                 xuid;
    ::ll::TypedStorage<4, 4, ::Social::SocialChangeAction> action;
    ::ll::TypedStorage<1, 1, bool>                         isSuccess;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialChangeResult& operator=(SocialChangeResult const&);
    SocialChangeResult();
};

} // namespace Social
