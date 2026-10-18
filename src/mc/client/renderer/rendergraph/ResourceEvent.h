#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/rendergraph/ResourceBinding.h"
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
namespace rendergraph { class Pass; }
namespace rendergraph { class Resource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace rendergraph {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResourceEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::rendergraph::Resource&>        mResource;
    ::ll::UntypedStorage<8, 8>                                mPass;
    ::ll::TypedStorage<4, 16, ::rendergraph::ResourceBinding> mBinding;
    ::ll::TypedStorage<4, 4, int>                             mNextEventIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceEvent& operator=(ResourceEvent const&);
    ResourceEvent(ResourceEvent const&);
    ResourceEvent();
};
#else // @header-generator platform
struct ResourceEvent {};
#endif // @header-generator platform

} // namespace rendergraph
