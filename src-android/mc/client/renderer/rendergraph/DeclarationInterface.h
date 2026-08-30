#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rendergraph { class RenderOrder; }
// clang-format on

namespace rendergraph {

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

} // namespace rendergraph
