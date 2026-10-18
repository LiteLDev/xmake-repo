#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ClientUpdatesCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::ClientUpdatesCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AppPlatform&>                        mAppPlatform;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>> mLaunchStoreForClientUpdates;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientUpdatesCommandGroup& operator=(ClientUpdatesCommandGroup const&);
    ClientUpdatesCommandGroup(ClientUpdatesCommandGroup const&);
    ClientUpdatesCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientUpdatesCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class ClientUpdatesCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
