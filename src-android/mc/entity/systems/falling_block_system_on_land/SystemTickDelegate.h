#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/falling_block_system_on_land/DelayDelegateData.h"
#include "mc/world/actor/item/ITickDelegate.h"

namespace FallingBlockSystemOnLand {

class SystemTickDelegate : public ::ITickDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<FallingBlockSystemOnLand::DelayDelegateData>> mOnLandDataQueue;
    // NOLINTEND
};

} // namespace FallingBlockSystemOnLand
