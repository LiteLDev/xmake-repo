#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct DestroyActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk43d782;
    ::ll::UntypedStorage<8, 40> mUnk51182d;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyActionData& operator=(DestroyActionData const&);
    DestroyActionData(DestroyActionData const&);
    DestroyActionData();
};

} // namespace ItemStackRequestCereal
