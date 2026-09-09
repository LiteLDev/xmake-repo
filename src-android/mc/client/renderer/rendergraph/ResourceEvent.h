#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/ResourceBinding.h"
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
namespace rendergraph { class Pass; }
namespace rendergraph { class Resource; }
// clang-format on

namespace rendergraph {

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

} // namespace rendergraph
