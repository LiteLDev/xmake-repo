#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BookEditAction {

struct AddPage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mPageIndex;
    ::ll::TypedStorage<8, 24, std::string> mPageText;
    ::ll::TypedStorage<8, 24, std::string> mPhotoName;
    // NOLINTEND
};

} // namespace BookEditAction
