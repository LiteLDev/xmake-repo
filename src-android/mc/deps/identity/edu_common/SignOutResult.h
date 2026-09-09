#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct SignOutResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mSucceeded;
    ::ll::TypedStorage<8, 24, std::string> mError;
    // NOLINTEND

public:
    // prevent constructor by default
    SignOutResult& operator=(SignOutResult const&);
    SignOutResult();
};

} // namespace Identity
