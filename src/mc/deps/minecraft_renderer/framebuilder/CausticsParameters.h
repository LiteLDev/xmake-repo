#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct CausticsParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>     mTexture;
    ::ll::TypedStorage<4, 4, float> mSecondsPerFrame;
    ::ll::TypedStorage<4, 4, float> mCausticsScale;
    ::ll::TypedStorage<4, 4, float> mCausticsPower;
    ::ll::TypedStorage<1, 1, bool>  mEnableCaustics;
    ::ll::TypedStorage<1, 1, bool>  mUseCausticsTexture;
    ::ll::TypedStorage<4, 4, uint>  mNumFrames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CausticsParameters();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct CausticsParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder
