#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/scripting/BasePrimitive.h"
#include "mc/client/renderer/scripting/Vertex.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/PrimitiveType.h"
#include "mc/world/phys/AABB.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting::RenderHelper {

#if defined(LL_PLAT_A) // @header-generator platform
class LineListPrimitive : public ::Scripting::RenderHelper::BasePrimitive {
#else // @header-generator platform
class LineListPrimitive {
#endif // @header-generator platform
public:
    // LineListPrimitive inner types declare
    // clang-format off
    struct ColoredLine;
    struct Line;
    // clang-format on

    // LineListPrimitive inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ColoredLine {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>       start;
        ::ll::TypedStorage<4, 12, ::Vec3>       end;
        ::ll::TypedStorage<4, 16, ::mce::Color> color;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ColoredLine {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct Line {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> start;
        ::ll::TypedStorage<4, 12, ::Vec3> end;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Scripting::RenderHelper::Vertex>> mPoints;
    ::ll::TypedStorage<4, 24, ::AABB>                                       mBounds;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mCenter;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::RenderHelper::Vertex>> mVertices;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LineListPrimitive() = default;

    virtual ::Scripting::RenderHelper::PrimitiveType getType() const;

    virtual ::Vec3 getPositionRaw() const;

    virtual ::Vec3 getPosition(float) const;

    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const;

    virtual void setColor(::mce::Color const&);

    virtual void _rebuild(float);

    virtual void _getVertices(float, std::vector<Scripting::RenderHelper::Vertex>&);
    // NOLINTEND
#else // @header-generator platform
    struct Line {};
#endif // @header-generator platform
};

} // namespace Scripting::RenderHelper
