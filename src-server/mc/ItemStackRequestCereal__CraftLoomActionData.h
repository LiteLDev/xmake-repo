#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct CraftLoomActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9d93f4;
    ::ll::UntypedStorage<1, 1>  mUnka60a0c;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftLoomActionData& operator=(CraftLoomActionData const&);
    CraftLoomActionData(CraftLoomActionData const&);
    CraftLoomActionData();
};

} // namespace ItemStackRequestCereal
