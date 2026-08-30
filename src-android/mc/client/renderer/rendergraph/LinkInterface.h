#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rendergraph { class RenderOrder; }
namespace rendergraph { struct ResourceEvent; }
// clang-format on

namespace rendergraph {

class LinkInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::rendergraph::RenderOrder&>   mOwner;
    ::ll::TypedStorage<4, 4, int>                           mResourceEventIndex;
    ::ll::TypedStorage<8, 8, ::rendergraph::ResourceEvent&> mResourceEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkInterface& operator=(LinkInterface const&);
    LinkInterface(LinkInterface const&);
    LinkInterface();
};

} // namespace rendergraph
