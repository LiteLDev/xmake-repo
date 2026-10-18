#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/util/gif/FrameDisposalMethod.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace gif {

struct Frame {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                   left;
    ::ll::TypedStorage<4, 4, int>                                                   top;
    ::ll::TypedStorage<4, 4, int>                                                   width;
    ::ll::TypedStorage<4, 4, int>                                                   height;
    ::ll::TypedStorage<4, 4, int>                                                   transparentIndex;
    ::ll::TypedStorage<8, 24, std::vector<mce::Color>>                              localColors;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>                                   pixels;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> delay;
    ::ll::TypedStorage<4, 4, ::gif::FrameDisposalMethod>                            disposalMethod;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkfd3fdb;
    ::ll::UntypedStorage<4, 4>  mUnk828784;
    ::ll::UntypedStorage<4, 4>  mUnkbb381d;
    ::ll::UntypedStorage<4, 4>  mUnkd982f9;
    ::ll::UntypedStorage<4, 4>  mUnk54854a;
    ::ll::UntypedStorage<8, 24> mUnkaf65c6;
    ::ll::UntypedStorage<8, 24> mUnkca7c33;
    ::ll::UntypedStorage<8, 8>  mUnk21a8a7;
    ::ll::UntypedStorage<4, 4>  mUnkb834fd;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Frame& operator=(Frame const&);
    Frame(Frame const&);
    Frame();
#endif // @header-generator platform
};

} // namespace gif
