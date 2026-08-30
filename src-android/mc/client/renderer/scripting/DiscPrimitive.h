#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/scripting/BasePrimitivePosition.h"
#include "mc/client/renderer/scripting/Vertex.h"
#include "mc/scripting/Plane.h"
#include "mc/scripting/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace mce { class Color; }
// clang-format on

namespace Scripting::RenderHelper {

class DiscPrimitive : public ::Scripting::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                         mRadius;
    ::ll::TypedStorage<4, 4, ::Scripting::Plane>                            mPlane;
    ::ll::TypedStorage<4, 4, int>                                           mSegments;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::RenderHelper::Vertex>> mVertices;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscPrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DiscPrimitive();

    virtual ::Scripting::RenderHelper::PrimitiveType getType() const;

    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const;

    virtual void _rebuild(float);

    virtual void _getVertices(float, std::vector<Scripting::RenderHelper::Vertex>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::RenderHelper::PrimitiveType $getType() const;

    MCNAPI void $updateBoundingBox(::Vec3 const&, ::AABB&) const;

    MCNAPI void $_rebuild(float);

    MCNAPI void $_getVertices(float, std::vector<Scripting::RenderHelper::Vertex>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::RenderHelper
