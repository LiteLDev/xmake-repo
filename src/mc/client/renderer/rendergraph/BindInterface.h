#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
namespace rendergraph { class FrameBufferBuilder; }
namespace rendergraph { class RenderContext; }
namespace rendergraph { class RenderOrder; }
namespace rendergraph { struct ResourceEvent; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace rendergraph {

#if defined(LL_PLAT_A) // @header-generator platform
class BindInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::rendergraph::RenderOrder&>   mOwner;
    ::ll::TypedStorage<8, 8, ::rendergraph::RenderContext&> mRenderContext;
    ::ll::TypedStorage<8, 8, ::rendergraph::ResourceEvent&> mResourceEvent;
    ::ll::UntypedStorage<8, 8>                              mFrameBufferBuilder;
    // NOLINTEND

public:
    // prevent constructor by default
    BindInterface& operator=(BindInterface const&);
    BindInterface(BindInterface const&);
    BindInterface();
};
#else // @header-generator platform
class BindInterface {};
#endif // @header-generator platform

} // namespace rendergraph
