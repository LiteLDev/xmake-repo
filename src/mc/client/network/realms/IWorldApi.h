#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class IWorldApi {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IWorldApi() = default;

    virtual void initializeWorld(::Realms::RealmId, std::string const&, std::string const&, std::function<void (Realms::GenericStatus, Realms::FailureReason)>) = 0;

    virtual void openWorld(::Realms::RealmId, std::function<void (Realms::GenericStatus)>, std::function<void (int)>) = 0;

    virtual void closeWorld(::Realms::RealmId, std::function<void (Realms::GenericStatus)>, std::function<void (int)>) = 0;

    virtual void resetWorld(::Realms::RealmId, std::function<void (Realms::GenericStatus)>, std::function<void (int)>) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IWorldApi {};
#endif // @header-generator platform

} // namespace Realms
