#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class SoundItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mLoadFromMemory;
    ::ll::TypedStorage<8, 24, std::string> mResourceStream;
    ::ll::UntypedStorage<8, 24>            mSoundPath;
    ::ll::TypedStorage<4, 4, float>        mVolume;
    ::ll::TypedStorage<4, 4, float>        mPitch;
    ::ll::TypedStorage<4, 4, float>        mMinDistance;
    ::ll::TypedStorage<4, 4, float>        mMaxDistance;
    ::ll::TypedStorage<4, 4, int>          mWeight;
    ::ll::TypedStorage<1, 1, bool>         mStream;
    ::ll::TypedStorage<1, 1, bool>         mIs3D;
    ::ll::TypedStorage<1, 1, bool>         mInterruptible;
    ::ll::TypedStorage<1, 1, bool>         mUseLegacyMaxDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundItem& operator=(SoundItem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getLoadFromMemory() const;

    MCNAPI float getMaxDistance() const;

    MCNAPI float getMinDistance() const;

    MCNAPI float getPitch() const;

    MCNAPI std::string const& getResourceStream() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getSoundPath() const;

    MCNAPI float getVolume() const;

    MCNAPI int getWeight() const;

    MCNAPI bool is3D() const;

    MCNAPI bool isInterruptible() const;

    MCNAPI bool isStream() const;

    MCNAPI bool useLegacyMaxDistance() const;

    MCNAPI ~SoundItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
