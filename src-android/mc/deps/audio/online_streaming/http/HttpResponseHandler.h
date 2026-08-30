#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class OnlineStreamedAudioBuffer; }
namespace Audio { struct HttpRangeResponse; }
// clang-format on

namespace Audio {

class HttpResponseHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Audio::OnlineStreamedAudioBuffer>> const> mBuffer;
    ::ll::TypedStorage<1, 1, bool>                                                                      mComplete;
    ::ll::TypedStorage<1, 1, bool>                                                                      mFailed;
    ::ll::TypedStorage<8, 8, ulong> mResponseRangeStart;
    ::ll::TypedStorage<4, 4, int>   mConsecutiveFailures;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpResponseHandler();
};

} // namespace Audio
