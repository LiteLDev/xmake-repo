#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SuspendPlayerSave;
// clang-format on

struct PlayerSaveSuspensionComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<SuspendPlayerSave>> mWeakSuspendToken;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::SuspendPlayerSave>> mWeakSuspendToken;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerSaveSuspensionComponent& operator=(PlayerSaveSuspensionComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
