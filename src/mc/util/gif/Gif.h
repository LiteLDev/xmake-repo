#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/util/gif/Frame.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace gif {

struct Gif {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                      width;
    ::ll::TypedStorage<4, 4, int>                      height;
    ::ll::TypedStorage<8, 24, std::vector<mce::Color>> globalColors;
    ::ll::TypedStorage<8, 24, std::vector<gif::Frame>> frames;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk18ce5e;
    ::ll::UntypedStorage<4, 4>  mUnkd10a17;
    ::ll::UntypedStorage<8, 24> mUnk7e1a0d;
    ::ll::UntypedStorage<8, 24> mUnke7d274;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Gif& operator=(Gif const&);
    Gif(Gif const&);
#endif // @header-generator platform
    Gif();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~Gif();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~Gif();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace gif
