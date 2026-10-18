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
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class SafeZoneWarningScreenCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::SafeZoneWarningScreenCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, float, float, float>> mSetSafeZone;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                      mMarkShown;
    // NOLINTEND

public:
    // prevent constructor by default
    SafeZoneWarningScreenCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    SafeZoneWarningScreenCommandGroup(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class SafeZoneWarningScreenCommandGroup {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
