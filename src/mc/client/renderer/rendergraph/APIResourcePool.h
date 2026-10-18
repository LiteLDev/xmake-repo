#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/renderer/hal/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace mce { class FrameBufferDescription; }
namespace mce { class FrameBufferObject; }
namespace mce { class RenderContext; }
namespace mce { class Texture; }
namespace rendergraph { class Pass; }
namespace rendergraph { class RenderContext; }
namespace rendergraph { class Resource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace rendergraph {

#if defined(LL_PLAT_A) // @header-generator platform
class APIResourcePool {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::mce::RenderContext&> mRawRenderContext;
    ::ll::TypedStorage<8, 40, std::unordered_map<const rendergraph::Pass*, std::unique_ptr<mce::FrameBufferObject>>> mLinkedFrameBuffers;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<mce::Texture>>> mTransientTexturePool;
    ::ll::TypedStorage<8, 24, std::map<mce::TextureDescription, std::vector<mce::Texture*>>> mFreeTransientTextures;
    ::ll::TypedStorage<8, 40, std::unordered_map<const rendergraph::Resource*, mce::Texture*>> mLinkedTransientTextures;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    APIResourcePool& operator=(APIResourcePool const&);
    APIResourcePool(APIResourcePool const&);
    APIResourcePool();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearLinkAssociations();

    MCNAPI ~APIResourcePool();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class APIResourcePool {};
#endif // @header-generator platform

} // namespace rendergraph
