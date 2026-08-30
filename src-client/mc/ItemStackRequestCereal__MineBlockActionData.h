#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct MineBlockActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk97884d;
    ::ll::UntypedStorage<4, 4>  mUnkd21fac;
    ::ll::UntypedStorage<8, 24> mUnkc5f921;
    // NOLINTEND

public:
    // prevent constructor by default
    MineBlockActionData& operator=(MineBlockActionData const&);
    MineBlockActionData(MineBlockActionData const&);
    MineBlockActionData();
};

} // namespace ItemStackRequestCereal
