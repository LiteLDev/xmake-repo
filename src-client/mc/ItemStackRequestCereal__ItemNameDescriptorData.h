#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct ItemNameDescriptorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8d6f21;
    ::ll::UntypedStorage<4, 4>  mUnk639d00;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemNameDescriptorData& operator=(ItemNameDescriptorData const&);
    ItemNameDescriptorData(ItemNameDescriptorData const&);
    ItemNameDescriptorData();
};

} // namespace ItemStackRequestCereal
