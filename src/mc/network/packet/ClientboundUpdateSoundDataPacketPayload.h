#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/SoundDataEvent__Fade.h"
#include "mc/SoundDataEvent__Pause.h"
#include "mc/SoundDataEvent__Resume.h"
#include "mc/SoundDataEvent__SeekTo.h"
#include "mc/SoundDataEvent__SetPitch.h"
#include "mc/SoundDataEvent__SetVolume.h"
#include "mc/SoundDataEvent__Stop.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/audio/ServerSoundHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/packet/sound_data_event/Fade.h"
#include "mc/network/packet/sound_data_event/Pause.h"
#include "mc/network/packet/sound_data_event/Resume.h"
#include "mc/network/packet/sound_data_event/SeekTo.h"
#include "mc/network/packet/sound_data_event/SetPitch.h"
#include "mc/network/packet/sound_data_event/SetVolume.h"
#include "mc/network/packet/sound_data_event/Stop.h"
#endif // @header-generator platform

struct ClientboundUpdateSoundDataPacketPayload {
public:
    // ClientboundUpdateSoundDataPacketPayload inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Event = std::variant<
        SoundDataEvent::Stop,
        SoundDataEvent::SetVolume,
        SoundDataEvent::SetPitch,
        SoundDataEvent::Fade,
        SoundDataEvent::SeekTo,
        SoundDataEvent::Pause,
        SoundDataEvent::Resume>;
#else // @header-generator platform
    using Event = ::std::variant<
        ::SoundDataEvent::Stop,
        ::SoundDataEvent::SetVolume,
        ::SoundDataEvent::SetPitch,
        ::SoundDataEvent::Fade,
        ::SoundDataEvent::SeekTo,
        ::SoundDataEvent::Pause,
        ::SoundDataEvent::Resume>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ServerSoundHandle> mServerSoundHandle;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, std::variant<SoundDataEvent::Stop, SoundDataEvent::SetVolume, SoundDataEvent::SetPitch, SoundDataEvent::Fade, SoundDataEvent::SeekTo, SoundDataEvent::Pause, SoundDataEvent::Resume>> mEvent;
    // clang-format on
#else // @header-generator platform
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
#endif // @header-generator platform
    // NOLINTEND
};
