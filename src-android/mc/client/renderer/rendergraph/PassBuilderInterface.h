#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rendergraph { class Pass; }
namespace rendergraph { class RenderOrder; }
// clang-format on

namespace rendergraph {

class PassBuilderInterface {
public:
    // PassBuilderInterface inner types define
    enum class ClearTarget : uchar {
        None    = 0,
        Color   = 1,
        Depth   = 2,
        Stencil = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::rendergraph::RenderOrder&> mOwner;
    ::ll::TypedStorage<8, 8, ::rendergraph::Pass&>        mPass;
    // NOLINTEND

public:
    // prevent constructor by default
    PassBuilderInterface& operator=(PassBuilderInterface const&);
    PassBuilderInterface(PassBuilderInterface const&);
    PassBuilderInterface();
};

} // namespace rendergraph
