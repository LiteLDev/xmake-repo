#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Category.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class Music : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Category>                mCategory;
    ::ll::TypedStorage<8, 24, std::string>              mName;
    ::ll::TypedStorage<8, 24, std::string>              mEventName;
    ::ll::TypedStorage<4, 4, int>                       mMinDelay;
    ::ll::TypedStorage<4, 4, int>                       mMaxDelay;
    ::ll::TypedStorage<1, 1, bool>                      mPaused;
    ::ll::TypedStorage<4, 4, float>                     mVolume;
    ::ll::TypedStorage<4, 4, float>                     mFadeoutSeconds;
    ::ll::TypedStorage<1, 1, bool>                      mPlaylist;
    ::ll::TypedStorage<4, 4, uint>                      mPlaylistIndex;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mOverrideInterruptibleCategories;
    ::ll::TypedStorage<1, 1, bool>                      mInitialized;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Music();

    virtual bool hasTracks() const;

    virtual void nextTrack();

    virtual void setActive(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $hasTracks() const;

    MCNAPI void $nextTrack();

    MCNAPI void $setActive(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
