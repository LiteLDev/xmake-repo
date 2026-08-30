#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct BeaconPaymentActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk339471;
    ::ll::UntypedStorage<4, 4> mUnk711c56;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconPaymentActionData& operator=(BeaconPaymentActionData const&);
    BeaconPaymentActionData(BeaconPaymentActionData const&);
    BeaconPaymentActionData();
};

} // namespace ItemStackRequestCereal
