#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/player_capabilities/ISharedController.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedData; }
// clang-format on

namespace PlayerCapabilities {

class SharedController : public ::PlayerCapabilities::ISharedController {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerCapabilities::ISharedData>> mShared;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerCapabilities::ISharedData>> mShared;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SharedController();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SharedController();
#else // @header-generator platform
    virtual bool canChat(::PlayerCapabilities::IPlayerData const& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canChat(::PlayerCapabilities::IPlayerData const&) const;
#else // @header-generator platform
    virtual bool canTell(::PlayerCapabilities::IPlayerData const& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canTell(::PlayerCapabilities::IPlayerData const&) const;

    virtual bool canOpenChat(::PlayerCapabilities::IPlayerData const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool canOpenChat(::PlayerCapabilities::IPlayerData const& player) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canChat(::PlayerCapabilities::IPlayerData const&) const;
#else // @header-generator platform
    MCNAPI bool $canChat(::PlayerCapabilities::IPlayerData const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canTell(::PlayerCapabilities::IPlayerData const&) const;
#else // @header-generator platform
    MCNAPI bool $canTell(::PlayerCapabilities::IPlayerData const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canOpenChat(::PlayerCapabilities::IPlayerData const&) const;
#else // @header-generator platform
    MCNAPI bool $canOpenChat(::PlayerCapabilities::IPlayerData const& player) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PlayerCapabilities
