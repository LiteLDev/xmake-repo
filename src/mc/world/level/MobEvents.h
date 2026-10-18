#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/MobEvent.h"
#include "mc/world/level/MobEventsIndex.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class ILevelStorageManagerConnector;
class LevelStorage;
// clang-format on

class MobEvents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, std::array<MobEvent, 3>>        mMobEvents;
    ::ll::UntypedStorage<8, 64>                                mSaveTimer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 216, ::std::array<::MobEvent, 3>>    mMobEvents;
    ::ll::TypedStorage<8, 80, ::BasicTimer>                    mSaveTimer;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                  mLevelStorage;
    ::ll::TypedStorage<1, 1, bool>                             mEventsEnabled;
    ::ll::TypedStorage<1, 1, bool>                             mNeedsToSave;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MobEvents& operator=(MobEvents const&);
    MobEvents(MobEvents const&);
#endif // @header-generator platform
    MobEvents();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MobEvents();
#else // @header-generator platform
    virtual ~MobEvents() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MobEvents(::LevelStorage&);
#else // @header-generator platform
    MCAPI explicit MobEvents(::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onSaveEvent(::LevelStorage&);
#else // @header-generator platform
    MCAPI void _onSaveEvent(::LevelStorage&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool areEventsEnabled() const;
#else // @header-generator platform
    MCAPI ::MobEventsIndex getIndexFromName(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MobEvent const& getEvent(::MobEventsIndex) const;
#else // @header-generator platform
    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MobEventsIndex getIndexFromName(std::string const&) const;

    MCNAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);

    MCNAPI bool isEnabled(::MobEventsIndex) const;

    MCNAPI void setEnabled(::MobEventsIndex, bool);

    MCNAPI void setEventsEnabled(bool);

    MCNAPI void setMarketplaceDefaults();

    MCNAPI void tick();

    MCNAPI void writeToLevelStorage();
#else // @header-generator platform
    MCAPI void writeToLevelStorage();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& EVENTS_ENABLED_STRING();
#else // @header-generator platform
    MCAPI static ::std::string const& EVENTS_ENABLED_STRING();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::LevelStorage&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void* $ctor(::LevelStorage& levelStorage);
#endif // @header-generator platform
    // NOLINTEND
};
