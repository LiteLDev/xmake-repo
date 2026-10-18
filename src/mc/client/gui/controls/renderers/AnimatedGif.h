#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/util/gif/FrameDisposalMethod.h"
#include "mc/util/gif/Gif.h"

// auto generated forward declare list
// clang-format off
namespace gif { struct Frame; }
namespace mce { struct Image; }
// clang-format on

class AnimatedGif {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 56, ::gif::Gif> mGifData;
    ::ll::TypedStorage<4, 4, uint> mFrameIndex;
    ::ll::TypedStorage<1, 1, bool> mFrameDirty;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastRenderedTime;
    ::ll::TypedStorage<4, 4, ::gif::FrameDisposalMethod> mFrameDisposal;
    ::ll::TypedStorage<8, 24, std::vector<mce::Color>> mFrameCache;
    ::ll::TypedStorage<8, 24, std::vector<mce::Color>> mPrevFrameCache;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatedGif();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AnimatedGif();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/util/gif/FrameDisposalMethod.h"
#include "mc/util/gif/Gif.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class AnimatedGif {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::gif::Gif>                             mGifData;
    ::ll::TypedStorage<4, 4, uint>                                    mFrameIndex;
    ::ll::TypedStorage<1, 1, bool>                                    mFrameDirty;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastRenderedTime;
    ::ll::TypedStorage<4, 4, ::gif::FrameDisposalMethod>              mFrameDisposal;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::Color>>            mFrameCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::Color>>            mPrevFrameCache;
    // NOLINTEND
};
#else // @header-generator platform
class AnimatedGif {};
#endif // @header-generator platform
#endif // @header-generator platform
