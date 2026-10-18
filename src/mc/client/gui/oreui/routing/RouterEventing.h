#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IScreenChangedEventing;
namespace OreUI { class RouterLocation; }
namespace Social { class IGameConnectionInfoProvider; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IScreenChangedEventing;
namespace Social { class IGameConnectionInfoProvider; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RouterEventing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IScreenChangedEventing&>              mScreenChangedEventing;
    ::ll::UntypedStorage<8, 24>                                      mClientInstance;
    ::ll::TypedStorage<8, 8, ::Social::IGameConnectionInfoProvider&> mGameConnectionInfoProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterEventing& operator=(RouterEventing const&);
    RouterEventing(RouterEventing const&);
    RouterEventing();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RouterEventing(
        ::IScreenChangedEventing&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::Social::IGameConnectionInfoProvider&
    );

    MCNAPI void fireScreenChangedEvent(
        std::optional<OreUI::RouterLocation> const&,
        std::optional<OreUI::RouterLocation> const&,
        ::OreUI::RouterAction const
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IScreenChangedEventing&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::Social::IGameConnectionInfoProvider&
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RouterEventing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IScreenChangedEventing&>                         mScreenChangedEventing;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClientInstance;
    ::ll::TypedStorage<8, 8, ::Social::IGameConnectionInfoProvider&>            mGameConnectionInfoProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterEventing& operator=(RouterEventing const&);
    RouterEventing(RouterEventing const&);
    RouterEventing();
};
#else // @header-generator platform
class RouterEventing {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
