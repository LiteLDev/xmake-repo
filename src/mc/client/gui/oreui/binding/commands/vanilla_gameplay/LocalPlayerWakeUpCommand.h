#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class LocalPlayerWakeUpCommand : public ::OreUI::CommandGroupBase<::OreUI::LocalPlayerWakeUpCommand> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>       mWakeUp;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayerWakeUpCommand();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LocalPlayerWakeUpCommand(::OreUI::ClientDependencies const& client);

    MCAPI void wakeUp();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LocalPlayerWakeUpCommand {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
