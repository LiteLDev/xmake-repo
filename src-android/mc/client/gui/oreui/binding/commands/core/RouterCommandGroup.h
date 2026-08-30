#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class RouterCommandGroup : public ::OreUI::CommandGroupBase<OreUI::RouterCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 256> mRouter;
    ::ll::UntypedStorage<8, 144> mPush;
    ::ll::UntypedStorage<8, 144> mReplace;
    ::ll::UntypedStorage<8, 144> mBack;
    ::ll::UntypedStorage<8, 144> mGo;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RouterCommandGroup();
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
