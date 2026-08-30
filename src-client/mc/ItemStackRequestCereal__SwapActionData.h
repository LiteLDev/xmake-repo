#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct SwapActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkd96f31;
    ::ll::UntypedStorage<8, 40> mUnk210e92;
    // NOLINTEND

public:
    // prevent constructor by default
    SwapActionData& operator=(SwapActionData const&);
    SwapActionData(SwapActionData const&);
    SwapActionData();
};

} // namespace ItemStackRequestCereal
