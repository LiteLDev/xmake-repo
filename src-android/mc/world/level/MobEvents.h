#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/MobEvent.h"
#include "mc/world/level/MobEventsIndex.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ILevelStorageManagerConnector;
class LevelStorage;
// clang-format on

class MobEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, std::array<MobEvent, 3>>        mMobEvents;
    ::ll::UntypedStorage<8, 64>                                mSaveTimer;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                  mLevelStorage;
    ::ll::TypedStorage<1, 1, bool>                             mEventsEnabled;
    ::ll::TypedStorage<1, 1, bool>                             mNeedsToSave;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEvents();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MobEvents();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MobEvents(::LevelStorage&);

    MCNAPI void _onSaveEvent(::LevelStorage&);

    MCNAPI bool areEventsEnabled() const;

    MCNAPI ::MobEvent const& getEvent(::MobEventsIndex) const;

    MCNAPI ::MobEventsIndex getIndexFromName(std::string const&) const;

    MCNAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);

    MCNAPI bool isEnabled(::MobEventsIndex) const;

    MCNAPI void setEnabled(::MobEventsIndex, bool);

    MCNAPI void setEventsEnabled(bool);

    MCNAPI void setMarketplaceDefaults();

    MCNAPI void tick();

    MCNAPI void writeToLevelStorage();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& EVENTS_ENABLED_STRING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND
};
