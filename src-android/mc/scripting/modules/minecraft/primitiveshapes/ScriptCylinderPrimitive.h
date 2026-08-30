#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShape.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct PrimitiveShapeDataPayload;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCylinderPrimitive : public ::ScriptModuleMinecraft::ScriptPrimitiveShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> mRadii;
    ::ll::TypedStorage<4, 4, float>  mHeight;
    ::ll::TypedStorage<4, 4, int>    mSegments;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptCylinderPrimitive();

    virtual void populatePacketData(::PrimitiveShapeDataPayload&) const;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCylinderPrimitive();

    MCNAPI ScriptCylinderPrimitive(std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&, bool);

    MCNAPI float getHeight() const;

    MCNAPI int getNumSegments() const;

    MCNAPI ::Vec2 const& getRadii() const;

    MCNAPI void setHeight(float);

    MCNAPI void setNumSegments(int);

    MCNAPI void setRadii(::Vec2 const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $populatePacketData(::PrimitiveShapeDataPayload&) const;

    MCNAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
