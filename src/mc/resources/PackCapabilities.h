#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class PackCapabilityRegistry;
// clang-format on

namespace PackCapabilities {
// functions
// NOLINTBEGIN
MCNAPI ::PackCapabilityRegistry createRegistry(
    ::Bedrock::NonOwnerPointer<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
    ::PackCapabilityRegistry                               additionalCapabilities
);
// NOLINTEND

} // namespace PackCapabilities
#endif // @header-generator platform
