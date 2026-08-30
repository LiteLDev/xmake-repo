#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/SoundDataEvent__Fade.h"
#include "mc/SoundDataEvent__Pause.h"
#include "mc/SoundDataEvent__Resume.h"
#include "mc/SoundDataEvent__SeekTo.h"
#include "mc/SoundDataEvent__SetPitch.h"
#include "mc/SoundDataEvent__SetVolume.h"
#include "mc/SoundDataEvent__Stop.h"
#include "mc/deps/audio/ServerSoundHandle.h"

struct ClientboundUpdateSoundDataPacketPayload {
public:
    // ClientboundUpdateSoundDataPacketPayload inner types define
    using Event = ::std::variant<
        ::SoundDataEvent::Stop,
        ::SoundDataEvent::SetVolume,
        ::SoundDataEvent::SetPitch,
        ::SoundDataEvent::Fade,
        ::SoundDataEvent::SeekTo,
        ::SoundDataEvent::Pause,
        ::SoundDataEvent::Resume>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerSoundHandle> mServerSoundHandle;
    ::ll::TypedStorage<
        4,
        12,
        ::std::variant<
            ::SoundDataEvent::Stop,
            ::SoundDataEvent::SetVolume,
            ::SoundDataEvent::SetPitch,
            ::SoundDataEvent::Fade,
            ::SoundDataEvent::SeekTo,
            ::SoundDataEvent::Pause,
            ::SoundDataEvent::Resume>>
        mEvent;
    // NOLINTEND
};
