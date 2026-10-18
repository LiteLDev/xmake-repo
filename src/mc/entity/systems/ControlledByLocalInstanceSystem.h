#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ControlledByLocalInstanceSystem {
public:
    // ControlledByLocalInstanceSystem inner types declare
    // clang-format off
    struct Config;
    // clang-format on

    // ControlledByLocalInstanceSystem inner types define
    struct Config {
    public:
        // Config inner types define
        enum class ApplyTo : int {
            LiveEntities               = 0,
            RecalculateRequestEntities = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                               mIsClientSide;
        ::ll::TypedStorage<4, 4, ::ControlledByLocalInstanceSystem::Config::ApplyTo> mApplyTo;
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo
    createCalculateControlledByLocalInstanceSystem(::ControlledByLocalInstanceSystem::Config const&);
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo
    createCalculateControlledByLocalInstanceSystem(::ControlledByLocalInstanceSystem::Config const& config);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createWasControlledByLocalInstanceSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createWasControlledByLocalInstanceSystem();
#endif // @header-generator platform
    // NOLINTEND
};
