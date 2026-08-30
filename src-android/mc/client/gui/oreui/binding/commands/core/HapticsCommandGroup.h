#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class HapticsCommandGroup : public ::OreUI::CommandGroupBase<OreUI::HapticsCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mAppPlatform;
    ::ll::UntypedStorage<8, 144> mVibrate;
    // NOLINTEND

public:
    // prevent constructor by default
    HapticsCommandGroup& operator=(HapticsCommandGroup const&);
    HapticsCommandGroup(HapticsCommandGroup const&);
    HapticsCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HapticsCommandGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
