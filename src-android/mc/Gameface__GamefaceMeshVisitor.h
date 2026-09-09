#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { struct GamefaceBatchDrawMesh; }
// clang-format on

namespace Gameface {

struct GamefaceMeshVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceBatchDrawMesh&> mMesh;
    // NOLINTEND

public:
    // prevent constructor by default
    GamefaceMeshVisitor& operator=(GamefaceMeshVisitor const&);
    GamefaceMeshVisitor(GamefaceMeshVisitor const&);
    GamefaceMeshVisitor();
};

} // namespace Gameface
