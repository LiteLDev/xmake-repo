#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioDecodeSession; }
namespace Audio { class OnlineStreamedAudioBuffer; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Audio {

class AudioDecodeContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Audio::OnlineStreamedAudioBuffer>>> mBuffer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Audio::AudioDecodeSession>>                          mSession;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>                                                  mDecoderReadPosition;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk486802;
    ::ll::UntypedStorage<8, 8>  mUnkbf9721;
    ::ll::UntypedStorage<8, 8>  mUnk103abc;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AudioDecodeContext& operator=(AudioDecodeContext const&);
    AudioDecodeContext(AudioDecodeContext const&);
#endif // @header-generator platform
    AudioDecodeContext();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Audio::AudioDecodeSession& getSession();

    MCNAPI void setDecoderReadPosition(ulong);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Audio
