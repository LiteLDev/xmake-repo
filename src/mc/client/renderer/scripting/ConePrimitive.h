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
class ConePrimitive : public ::Scripting::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                         mRadiusX;
    ::ll::TypedStorage<4, 4, float>                                         mRadiusZ;
    ::ll::TypedStorage<4, 4, float>                                         mHeight;
    ::ll::TypedStorage<4, 4, int>                                           mSegments;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>>                          mRotation;
    ::ll::TypedStorage<1, 1, bool>                                          mCreateSurface;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::RenderHelper::Vertex>> mVertices;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::RenderHelper::Vertex>> mLineVertices;
    // NOLINTEND

public:
    // prevent constructor by default
    ConePrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConePrimitive();

    virtual ::Scripting::RenderHelper::PrimitiveType getType() const;

    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const;

    virtual void _rebuild(float);

    virtual void _getVertices(float, std::vector<Scripting::RenderHelper::Vertex>&);

    virtual void _getLineVertices(float, std::vector<Scripting::RenderHelper::Vertex>&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConePrimitive(
        ::Vec3 const&,
        float,
        float,
        float,
        ::mce::Color const&,
        std::optional<int>,
        std::optional<Vec3>,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Vec3 const&, float, float, float, ::mce::Color const&, std::optional<int>, std::optional<Vec3>, bool);
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

    MCNAPI void $_getLineVertices(float, std::vector<Scripting::RenderHelper::Vertex>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ConePrimitive {};
#endif // @header-generator platform

} // namespace Scripting::RenderHelper
