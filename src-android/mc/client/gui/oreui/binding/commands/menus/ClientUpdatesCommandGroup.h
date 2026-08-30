#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
// clang-format on

namespace OreUI {

class ClientUpdatesCommandGroup : public ::OreUI::CommandGroupBase<OreUI::ClientUpdatesCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mAppPlatform;
    ::ll::UntypedStorage<8, 144> mLaunchStoreForClientUpdates;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientUpdatesCommandGroup& operator=(ClientUpdatesCommandGroup const&);
    ClientUpdatesCommandGroup(ClientUpdatesCommandGroup const&);
    ClientUpdatesCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientUpdatesCommandGroup();
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
