#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace mce::framebuilder {

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

} // namespace mce::framebuilder
