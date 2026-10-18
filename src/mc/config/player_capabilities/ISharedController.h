#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
// clang-format on

namespace PlayerCapabilities {

struct ISharedController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISharedController() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canChat(::PlayerCapabilities::IPlayerData const&) const = 0;
#else // @header-generator platform
    virtual bool canChat(::PlayerCapabilities::IPlayerData const& player) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canTell(::PlayerCapabilities::IPlayerData const&) const = 0;
#else // @header-generator platform
    virtual bool canTell(::PlayerCapabilities::IPlayerData const& player) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canOpenChat(::PlayerCapabilities::IPlayerData const&) const = 0;
#else // @header-generator platform
    virtual bool canOpenChat(::PlayerCapabilities::IPlayerData const& player) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PlayerCapabilities
