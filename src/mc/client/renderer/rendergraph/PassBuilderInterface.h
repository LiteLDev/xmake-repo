#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace rendergraph { class Pass; }
namespace rendergraph { class RenderOrder; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace rendergraph {

class PassBuilderInterface {
public:
    // PassBuilderInterface inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    enum class ClearTarget : uchar {};
#endif // @header-generator platform
};

} // namespace rendergraph
