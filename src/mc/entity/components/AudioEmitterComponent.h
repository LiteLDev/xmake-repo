#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>    mEventToPlay;
        ::ll::TypedStorage<8, 40, ::HashedString> mLocator;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk3a195a;
        ::ll::UntypedStorage<8, 48> mUnk4143be;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        SoundEvent& operator=(SoundEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        SoundEvent(SoundEvent const&);
#endif // @header-generator platform
        SoundEvent();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<AudioEmitterComponent::SoundEvent>> mNewEventsToPlay;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::AudioEmitterComponent::SoundEvent>> mNewEventsToPlay;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    AudioEmitterComponent& operator=(AudioEmitterComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
