#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class DispatcherProcess; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Http {

#if defined(LL_PLAT_A) // @header-generator platform
class Factory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Bedrock::Http::DispatcherProcess> createDispatcher();
    // NOLINTEND
};
#else // @header-generator platform
class Factory {};
#endif // @header-generator platform

} // namespace Bedrock::Http
