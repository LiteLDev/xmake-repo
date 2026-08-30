#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct MolangItemDescriptorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7a26fa;
    ::ll::UntypedStorage<2, 2>  mUnk99dc3a;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangItemDescriptorData& operator=(MolangItemDescriptorData const&);
    MolangItemDescriptorData(MolangItemDescriptorData const&);
    MolangItemDescriptorData();
};

} // namespace ItemStackRequestCereal
