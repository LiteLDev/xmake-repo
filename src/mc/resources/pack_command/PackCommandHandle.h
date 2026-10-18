#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace PackCommand { struct PackCommandResult; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace PackCommand {

struct PackCommandHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mHandle;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnka53165;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PackCommandHandle& operator=(PackCommandHandle const&);
    PackCommandHandle(PackCommandHandle const&);
    PackCommandHandle();
#endif // @header-generator platform
};

} // namespace PackCommand
