#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/SystemInfo.h"

// auto generated forward declare list
// clang-format off
class ITickingSystem;
// clang-format on

struct TickingSystemWithInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ITickingSystem>> mTickingSystem;
    ::ll::TypedStorage<8, 192, ::SystemInfo>                  mInfo;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ITickingSystem>> mTickingSystem;
    ::ll::TypedStorage<8, 200, ::SystemInfo>                      mInfo;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    TickingSystemWithInfo& operator=(TickingSystemWithInfo const&);
    TickingSystemWithInfo(TickingSystemWithInfo const&);
    TickingSystemWithInfo();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ~TickingSystemWithInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
