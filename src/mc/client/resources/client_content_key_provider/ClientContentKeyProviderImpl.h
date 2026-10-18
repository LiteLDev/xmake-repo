#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/IContentAccessibilityProvider.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ClientContentKeyProvider {

#if defined(LL_PLAT_A) // @header-generator platform
class ClientContentKeyProviderImpl : public ::IContentAccessibilityProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                 mEntitlementManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContentIdentity, std::string>> mTempContentKeys;
    // NOLINTEND
};
#else // @header-generator platform
class ClientContentKeyProviderImpl {};
#endif // @header-generator platform

} // namespace ClientContentKeyProvider
