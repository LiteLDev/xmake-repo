#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/IContentAccessibilityProvider.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
// clang-format on

namespace ClientContentKeyProvider {

class ClientContentKeyProviderImpl : public ::IContentAccessibilityProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                 mEntitlementManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContentIdentity, std::string>> mTempContentKeys;
    // NOLINTEND
};

} // namespace ClientContentKeyProvider
