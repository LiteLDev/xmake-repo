#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BookEditAction {

struct Finalize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTitle;
    ::ll::TypedStorage<8, 24, std::string> mAuthor;
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    // NOLINTEND
};

} // namespace BookEditAction
