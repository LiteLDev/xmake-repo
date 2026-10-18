#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/CacheDetails.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldCache : public ::std::enable_shared_from_this<Realms::WorldCache> {
public:
    // WorldCache inner types define
    using WorldList = std::vector<Realms::World>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>   mAPI;
    ::ll::TypedStorage<8, 24, std::vector<Realms::World>> mWorlds;
    ::ll::UntypedStorage<8, 72>                           mOverallDetails;
    ::ll::UntypedStorage<8, 24>                           mWorldDetails;
    ::ll::TypedStorage<1, 1, bool>                        mHasBeenUsedForUnpairedParentRealms;
    ::ll::TypedStorage<1, 1, bool>                        mHasBeenUsedForStandardRealms;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldCache(std::weak_ptr<RealmsAPI>);

    MCNAPI void
    _fetchWorldsOrUseCache(bool, std::function<void(Realms::GenericStatus, std::vector<Realms::World>&)>, bool);

    MCNAPI void clear();

    MCNAPI void
    fetchUnpairedParentWorldsOrUseCache(bool, std::function<void(Realms::GenericStatus, std::vector<Realms::World>&)>);

    MCNAPI void
    fetchWorldOrUseCache(::Realms::RealmId, bool, std::function<void(Realms::GenericStatus, Realms::World&)>);

    MCNAPI void fetchWorldsOrUseCache(bool, std::function<void(Realms::GenericStatus, std::vector<Realms::World>&)>);

    MCNAPI bool isFetchingWorlds() const;

    MCNAPI bool isNeedingFetch() const;

    MCNAPI void setOverallToDirty();

    MCNAPI void setToDirty(::Realms::RealmId, bool);

    MCNAPI ~WorldCache();
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
class WorldCache {};
#endif // @header-generator platform

} // namespace Realms
