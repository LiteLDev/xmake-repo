#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#include "mc/platform/brstd/move_only_function.h"

class HardwareMemoryTierUtil
: public ::Bedrock::ImplBase<HardwareMemoryTierUtil, Bedrock::ImplCtor(brstd::move_only_function<ulong() const>)> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HardwareMemoryTier getHardwareMemoryTier() const = 0;
    // NOLINTEND
};
