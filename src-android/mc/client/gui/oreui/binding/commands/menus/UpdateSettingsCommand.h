#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/TelemetryBatcher.h"
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Settings { class IRegistry; }
// clang-format on

namespace OreUI {

class UpdateSettingsCommand : public ::OreUI::CommandGroupBase<OreUI::UpdateSettingsCommand> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                          mSettingsRegistryFunc;
    ::ll::TypedStorage<8, 48, ::OreUI::TelemetryBatcher> mTelemetryBatcher;
    ::ll::UntypedStorage<1, 16>                          mIsPreGame;
    ::ll::UntypedStorage<8, 144>                         mUpdateBoolean;
    ::ll::UntypedStorage<8, 144>                         mUpdateOption;
    ::ll::UntypedStorage<8, 144>                         mUpdateString;
    ::ll::UntypedStorage<8, 144>                         mUpdateNumber;
    ::ll::UntypedStorage<8, 144>                         mCommitString;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSettingsCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UpdateSettingsCommand();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UpdateSettingsCommand(::OreUI::ClientDependencies const&);
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
