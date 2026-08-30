#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct NetworkItemInstanceDescriptorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkbdafe7;
    ::ll::UntypedStorage<2, 2>  mUnkfb41d7;
    ::ll::UntypedStorage<4, 4>  mUnk8e3d44;
    ::ll::UntypedStorage<8, 32> mUnk7f2a5d;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkItemInstanceDescriptorData& operator=(NetworkItemInstanceDescriptorData const&);
    NetworkItemInstanceDescriptorData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkItemInstanceDescriptorData(::ItemStackRequestCereal::NetworkItemInstanceDescriptorData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackRequestCereal::NetworkItemInstanceDescriptorData const&);
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
