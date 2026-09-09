#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioDecodeSession; }
namespace Audio { class OnlineStreamedAudioBuffer; }
// clang-format on

namespace Audio {

class AudioDecodeContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Audio::OnlineStreamedAudioBuffer>>> mBuffer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Audio::AudioDecodeSession>>                          mSession;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>                                                  mDecoderReadPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioDecodeContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Audio::AudioDecodeSession& getSession();

    MCNAPI void setDecoderReadPosition(ulong);
    // NOLINTEND
};

} // namespace Audio
