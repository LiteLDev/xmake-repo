#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace rendergraph { class RenderOrder; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace rendergraph {

#if defined(LL_PLAT_A) // @header-generator platform
class DeclarationInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::rendergraph::RenderOrder&> mOwner;
    // NOLINTEND

public:
    // prevent constructor by default
    DeclarationInterface& operator=(DeclarationInterface const&);
    DeclarationInterface(DeclarationInterface const&);
    DeclarationInterface();
};
#else // @header-generator platform
class DeclarationInterface {};
#endif // @header-generator platform

} // namespace rendergraph
