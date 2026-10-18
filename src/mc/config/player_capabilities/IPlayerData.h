#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

namespace PlayerCapabilities {

struct IPlayerData {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IPlayerData();
#else // @header-generator platform
    virtual ~IPlayerData() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isAbilityEnabled(::AbilitiesIndex) const = 0;
#else // @header-generator platform
    virtual bool isAbilityEnabled(::AbilitiesIndex ability) const = 0;
#endif // @header-generator platform

    virtual bool isTeacher() const = 0;

    virtual bool isOperator() const = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace PlayerCapabilities
