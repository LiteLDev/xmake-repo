#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
struct Slot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          slotId;
    ::ll::TypedStorage<8, 24, std::string> slotName;
    ::ll::TypedStorage<4, 4, int>          slotGameMode;
    ::ll::TypedStorage<8, 24, std::string> slotImage;
    ::ll::UntypedStorage<8, 16>            options;
    ::ll::TypedStorage<1, 1, bool>         isHardcore;
    ::ll::TypedStorage<4, 4, int>          difficulty;
    ::ll::TypedStorage<8, 8, long>         randomSeed;
    ::ll::TypedStorage<4, 4, int>          daylightCycle;
    // NOLINTEND

public:
    // prevent constructor by default
    Slot& operator=(Slot const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Slot();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct Slot {};
#endif // @header-generator platform

} // namespace Realms
