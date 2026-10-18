#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Resource.h"
#include "mc/client/renderer/rendergraph/ResourceTargetInterface.h"
#include "mc/client/renderer/rendergraph/ResourceViewInterface.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Texture; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace rendergraph {

#if defined(LL_PLAT_A) // @header-generator platform
class ExternalTextureSlice : public ::rendergraph::Resource,
                             public ::rendergraph::ResourceViewInterface,
                             public ::rendergraph::ResourceTargetInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Texture const&> mTexture;
    ::ll::TypedStorage<1, 1, uchar const>           mMipLevel;
    ::ll::TypedStorage<1, 1, uchar const>           mArrayIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalTextureSlice& operator=(ExternalTextureSlice const&);
    ExternalTextureSlice(ExternalTextureSlice const&);
    ExternalTextureSlice();
};
#else // @header-generator platform
class ExternalTextureSlice {};
#endif // @header-generator platform

} // namespace rendergraph
