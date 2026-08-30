#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/scripting/BasePrimitivePosition.h"
#include "mc/client/renderer/scripting/Vertex.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
class AABB;
namespace mce { class Color; }
// clang-format on

namespace Scripting::RenderHelper {

class BoxPrimitive : public ::Scripting::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                           mSize;
    ::ll::TypedStorage<4, 384, std::array<Scripting::RenderHelper::Vertex, 24>> mVertices;
    // NOLINTEND

public:
    // prevent constructor by default
    BoxPrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BoxPrimitive();

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
