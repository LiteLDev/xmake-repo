#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

namespace OreUI {

class ApplicationCommandGroup : public ::OreUI::CommandGroupBase<OreUI::ApplicationCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mClient;
    ::ll::UntypedStorage<8, 144> mExit;
    // NOLINTEND
};

} // namespace OreUI
