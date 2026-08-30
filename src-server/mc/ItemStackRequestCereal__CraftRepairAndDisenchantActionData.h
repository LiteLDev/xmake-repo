#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct CraftRepairAndDisenchantActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf98070;
    ::ll::UntypedStorage<1, 1>  mUnk41f23b;
    ::ll::UntypedStorage<4, 4>  mUnk163766;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftRepairAndDisenchantActionData& operator=(CraftRepairAndDisenchantActionData const&);
    CraftRepairAndDisenchantActionData(CraftRepairAndDisenchantActionData const&);
    CraftRepairAndDisenchantActionData();
};

} // namespace ItemStackRequestCereal
