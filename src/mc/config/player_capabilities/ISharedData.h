#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/ChatRestrictionLevel.h"

// auto generated forward declare list
// clang-format off
struct GameRuleId;
// clang-format on

namespace PlayerCapabilities {

struct ISharedData {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ISharedData();
#else // @header-generator platform
    virtual ~ISharedData() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<bool> isGameRuleEnabled(::GameRuleId) const = 0;
#else // @header-generator platform
    virtual ::std::optional<bool> isGameRuleEnabled(::GameRuleId) const = 0;
#endif // @header-generator platform

    virtual ::ChatRestrictionLevel getChatRestrictionLevel() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PlayerCapabilities
