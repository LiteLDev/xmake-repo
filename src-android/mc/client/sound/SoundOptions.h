#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SoundPlayerInterface;
// clang-format on

class SoundOptions {
public:
    // SoundOptions inner types declare
    // clang-format off
    struct VolumeSlider;
    // clang-format on

    // SoundOptions inner types define
    struct VolumeSlider {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string const> sound;
        ::ll::TypedStorage<4, 4, float>              volume;
        ::ll::TypedStorage<8, 8, ulong>              soundHandle;
        // NOLINTEND

    public:
        // prevent constructor by default
        VolumeSlider& operator=(VolumeSlider const&);
        VolumeSlider();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SoundOptions::VolumeSlider>> mVolumeSliders;
    ::ll::UntypedStorage<8, 24>                                                            mSoundEngine;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SoundOptions(::Bedrock::NonOwnerPointer<SoundPlayerInterface>);

    MCNAPI std::vector<std::string> getSliderNames() const;

    MCNAPI void volumeUpdated(std::string const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<SoundPlayerInterface>);
    // NOLINTEND
};
