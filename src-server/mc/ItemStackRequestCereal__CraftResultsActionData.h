#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct CraftResultsActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkafcbdc;
    ::ll::UntypedStorage<1, 1>  mUnk5ffb8f;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftResultsActionData& operator=(CraftResultsActionData const&);
    CraftResultsActionData(CraftResultsActionData const&);
    CraftResultsActionData();
};

} // namespace ItemStackRequestCereal
