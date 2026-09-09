#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Settings { class IRegistry; }
// clang-format on

namespace OreUI {

class InvokeActionCommand : public ::OreUI::CommandGroupBase<OreUI::InvokeActionCommand> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mSettingsRegistryFunc;
    ::ll::UntypedStorage<8, 144> mInvokeAction;
    ::ll::UntypedStorage<8, 144> mCancelAsyncAction;
    // NOLINTEND

public:
    // prevent constructor by default
    InvokeActionCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvokeActionCommand();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InvokeActionCommand(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&);
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
