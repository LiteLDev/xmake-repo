#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Clubs { struct FeedItem; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Realms::Stories { class RealmEvent; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms::Stories {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmEventsManager : public ::std::enable_shared_from_this<Realms::Stories::RealmEventsManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmEventsManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmEventsManager(std::weak_ptr<RealmsAPI>);

    MCNAPI void checkAndPostUnpublishedRealmEventsToRealm(
        ::Realms::RealmId,
        std::function<void(Realms::Stories::RealmEvent, Clubs::FeedItem)>
    );

    MCNAPI void checkAndPostUnpublishedRealmEventsToRealm(
        ::Realms::World const&,
        std::function<void(Realms::Stories::RealmEvent, Clubs::FeedItem)>
    );

    MCNAPI ~RealmEventsManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<RealmsAPI>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class RealmEventsManager {};
#endif // @header-generator platform

} // namespace Realms::Stories
