#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/IAppResourceLoadImpl.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace AppResourceLoaderFactory {

class AppPlatformResourceLoadImpl : public ::IAppResourceLoadImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mGetPath;
    // NOLINTEND
};

} // namespace AppResourceLoaderFactory
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
