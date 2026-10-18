#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlinePlayRequest {
public:
    // OnlinePlayRequest inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct WhenReady;
#else // @header-generator platform
#endif // @header-generator platform
    struct AfterDelay;
    struct OnSignal;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct WhenReady;
#endif // @header-generator platform
    // clang-format on

    // OnlinePlayRequest inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct WhenReady {};

#else // @header-generator platform
#endif // @header-generator platform
    struct AfterDelay {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, float> delaySeconds;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnkf0763a;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        AfterDelay& operator=(AfterDelay const&);
        AfterDelay(AfterDelay const&);
        AfterDelay();
#endif // @header-generator platform
    };

    struct OnSignal {};

#if defined(LL_PLAT_A) // @header-generator platform
    using Mode = std::variant<
        Audio::OnlinePlayRequest::WhenReady,
        Audio::OnlinePlayRequest::AfterDelay,
        Audio::OnlinePlayRequest::OnSignal>;
#else // @header-generator platform
    struct WhenReady {};
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 8, std::variant<Audio::OnlinePlayRequest::WhenReady, Audio::OnlinePlayRequest::AfterDelay, Audio::OnlinePlayRequest::OnSignal>> mode;
    ::ll::TypedStorage<4, 4, float> volume;
    ::ll::TypedStorage<4, 4, float> pitch;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> musicEventName;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>  mUnkbbf627;
    ::ll::UntypedStorage<4, 4>  mUnk1f32ae;
    ::ll::UntypedStorage<4, 4>  mUnk12c673;
    ::ll::UntypedStorage<8, 40> mUnk3fece2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    OnlinePlayRequest& operator=(OnlinePlayRequest const&);
    OnlinePlayRequest(OnlinePlayRequest const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    OnlinePlayRequest();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~OnlinePlayRequest();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Audio
