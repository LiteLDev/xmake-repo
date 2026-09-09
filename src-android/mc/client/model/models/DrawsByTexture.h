#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/MeshRenderData.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
namespace mce { class Shader; }
namespace mce { struct ClientTexture; }
// clang-format on

class DrawsByTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ClientTexture const*>  mTexture;
    ::ll::TypedStorage<8, 24, std::vector<MeshRenderData>> mMeshes;
    ::ll::UntypedStorage<8, 24>                            mDrawsByTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    DrawsByTexture& operator=(DrawsByTexture const&);
    DrawsByTexture(DrawsByTexture const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DrawsByTexture();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
