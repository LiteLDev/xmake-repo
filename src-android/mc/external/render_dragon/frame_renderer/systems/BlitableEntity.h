#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::frameobject::components { struct MaterialFilter; }
namespace dragon::frameobject::components { struct MeshFilter; }
namespace dragon::frameobject::components { struct PassState; }
namespace dragon::frameobject::components { struct RenderTarget; }
namespace dragon::frameobject::components { struct Transform; }
// clang-format on

namespace dragon::framerenderer {

struct BlitableEntity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>                                               mEntity;
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::components::MaterialFilter const&> mMaterialFilter;
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::components::MeshFilter const&>     mMeshFilter;
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::components::PassState const&>      mPassState;
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::components::RenderTarget const&>   mRenderTarget;
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::components::Transform const&>      mTransform;
    // NOLINTEND

public:
    // prevent constructor by default
    BlitableEntity& operator=(BlitableEntity const&);
    BlitableEntity(BlitableEntity const&);
    BlitableEntity();
};

} // namespace dragon::framerenderer
