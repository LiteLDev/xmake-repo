#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/IPlayerTickPolicy.h"

namespace PlayerTickPolicy {

struct ThrottledTickPolicy : public ::IPlayerTickPolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mMaxBatchedTicks;
    ::ll::TypedStorage<8, 8, ulong> mMaxCreditTicks;
    ::ll::TypedStorage<1, 1, bool>  mIsStrictMovement;
    ::ll::TypedStorage<1, 1, bool>  mIsStrictDismount;
    // NOLINTEND
};

} // namespace PlayerTickPolicy
