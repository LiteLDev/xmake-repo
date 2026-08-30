#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct CraftLoomActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPatternNameId;
    ::ll::TypedStorage<1, 1, uchar>        mNumCrafts;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
