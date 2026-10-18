#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/TelemetryBatcher.h"
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Settings { class IRegistry; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/TelemetryBatcher.h"
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Settings { class IRegistry; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class UpdateSettingsCommand : public ::OreUI::CommandGroupBase<::OreUI::UpdateSettingsCommand> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Settings::IRegistry>()>>        mSettingsRegistryFunc;
    ::ll::TypedStorage<8, 72, ::OreUI::TelemetryBatcher>                                          mTelemetryBatcher;
    ::ll::TypedStorage<1, 1, bool>                                                                mIsPreGame;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, bool>>          mUpdateBoolean;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, int>>           mUpdateOption;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string>> mUpdateString;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, double>>        mUpdateNumber;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>>                mCommitString;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSettingsCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UpdateSettingsCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UpdateSettingsCommand(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};
#else // @header-generator platform
class UpdateSettingsCommand {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
