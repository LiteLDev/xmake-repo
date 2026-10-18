#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class IContentApi {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IContentApi() = default;

    virtual void applyContentOnRealm(::Realms::RealmId const, std::vector<Realms::Content> const&, std::function<void (Realms::GenericStatus)>) = 0;

    virtual void fetchAppliedPacks(::Realms::RealmId const, std::function<void (Realms::GenericStatus, std::vector<Realms::Content>)>) = 0;

    virtual void checkForExistingPack(std::string const&, std::string const&, std::function<void (Realms::GenericStatus, bool)>) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IContentApi {};
#endif // @header-generator platform

} // namespace Realms
