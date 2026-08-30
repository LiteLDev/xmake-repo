#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

class AudioEmitterComponent {
public:
    // AudioEmitterComponent inner types declare
    // clang-format off
    struct SoundEvent;
    // clang-format on

    // AudioEmitterComponent inner types define
    struct SoundEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>    mEventToPlay;
        ::ll::TypedStorage<8, 40, ::HashedString> mLocator;
        // NOLINTEND

    public:
        // prevent constructor by default
        SoundEvent& operator=(SoundEvent const&);
        SoundEvent();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SoundEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<AudioEmitterComponent::SoundEvent>> mNewEventsToPlay;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioEmitterComponent& operator=(AudioEmitterComponent const&);
};
