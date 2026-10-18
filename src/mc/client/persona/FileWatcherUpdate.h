#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

struct FileWatcherUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::optional<std::weak_ptr<mce::Image>>> newSkin;
    // NOLINTEND
};
#else // @header-generator platform
struct FileWatcherUpdate {};
#endif // @header-generator platform
