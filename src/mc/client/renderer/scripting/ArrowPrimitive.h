#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting::RenderHelper {

#if defined(LL_PLAT_A) // @header-generator platform
class ArrowPrimitive : public ::Scripting::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mEnd;
    ::ll::TypedStorage<4, 4, int>                                           mHeadNumSegments;
    ::ll::TypedStorage<4, 4, float>                                         mArrowHeadLength;
    ::ll::TypedStorage<4, 4, float>                                         mArrowHeadRadius;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::RenderHelper::Vertex>> mVertices;
    // NOLINTEND

public:
    // prevent constructor by default
    ArrowPrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ArrowPrimitive();

    virtual ::Scripting::RenderHelper::PrimitiveType getType() const;

    virtual void setPosition(::Vec3 const&);

    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const;

    virtual void _rebuild(float);

    virtual void _getVertices(float, std::vector<Scripting::RenderHelper::Vertex>&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArrowPrimitive(::Vec3 const&, ::Vec3 const&, ::mce::Color const&, int, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const&, ::Vec3 const&, ::mce::Color const&, int, float, float);
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

    MCNAPI void $setPosition(::Vec3 const&);

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
#else // @header-generator platform
class ArrowPrimitive {};
#endif // @header-generator platform

} // namespace Scripting::RenderHelper
