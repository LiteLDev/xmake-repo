#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct CraftCreativeActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk626a73;
    ::ll::UntypedStorage<1, 1> mUnke9447f;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftCreativeActionData& operator=(CraftCreativeActionData const&);
    CraftCreativeActionData(CraftCreativeActionData const&);
    CraftCreativeActionData();
};

} // namespace ItemStackRequestCereal
