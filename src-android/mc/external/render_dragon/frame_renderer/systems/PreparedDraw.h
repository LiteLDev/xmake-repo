#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::frameobject::components { struct MaterialFilter; }
namespace dragon::frameobject::components { struct MeshFilter; }
namespace dragon::frameobject::components { struct Transform; }
namespace dragon::materials { class Pass; }
// clang-format on

namespace dragon::framerenderer {

struct PreparedDraw {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::components::MeshFilter const&>     mMeshFilter;
    ::ll::TypedStorage<8, 8, ::dragon::materials::Pass const&>                         mPass;
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::components::Transform const&>      mTransform;
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::components::MaterialFilter const&> mMaterialFilter;
    ::ll::TypedStorage<4, 4, uint const>                                               mDepth;
    // NOLINTEND

public:
    // prevent constructor by default
    PreparedDraw(PreparedDraw const&);
    PreparedDraw();
};

} // namespace dragon::framerenderer
