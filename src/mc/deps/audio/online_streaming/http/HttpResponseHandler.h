#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Audio { class OnlineStreamedAudioBuffer; }
namespace Audio { struct HttpRangeResponse; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Audio {

class HttpResponseHandler {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Audio::OnlineStreamedAudioBuffer>> const> mBuffer;
    ::ll::TypedStorage<1, 1, bool>                                                                      mComplete;
    ::ll::TypedStorage<1, 1, bool>                                                                      mFailed;
    ::ll::TypedStorage<8, 8, ulong> mResponseRangeStart;
    ::ll::TypedStorage<4, 4, int>   mConsecutiveFailures;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnke4ec44;
    ::ll::UntypedStorage<1, 1>  mUnkd05684;
    ::ll::UntypedStorage<1, 1>  mUnk331f9e;
    ::ll::UntypedStorage<8, 8>  mUnk86ab58;
    ::ll::UntypedStorage<4, 4>  mUnka8c27e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    HttpResponseHandler& operator=(HttpResponseHandler const&);
    HttpResponseHandler(HttpResponseHandler const&);
#endif // @header-generator platform
    HttpResponseHandler();
};

} // namespace Audio
