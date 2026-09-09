#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct Session {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mUserXuid;
    ::ll::TypedStorage<8, 8, long>         mLoginTime;
    ::ll::TypedStorage<8, 8, long>         mLogoutTime;
    // NOLINTEND

public:
    // prevent constructor by default
    Session& operator=(Session const&);
};

} // namespace Realms
