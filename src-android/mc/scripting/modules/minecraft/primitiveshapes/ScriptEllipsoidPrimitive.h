#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShape.h"

// auto generated forward declare list
// clang-format off
struct PrimitiveShapeDataPayload;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEllipsoidPrimitive : public ::ScriptModuleMinecraft::ScriptPrimitiveShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mRadii;
    ::ll::TypedStorage<4, 4, int>     mSegmentsPerAxis;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptEllipsoidPrimitive();

    virtual void populatePacketData(::PrimitiveShapeDataPayload&) const;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptEllipsoidPrimitive();

    MCNAPI ScriptEllipsoidPrimitive(std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&, bool);

    MCNAPI ::Vec3 const& getRadii() const;

    MCNAPI int getSegmentsPerAxis() const;

    MCNAPI void setRadii(::Vec3 const&);

    MCNAPI void setSegmentsPerAxis(int);
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
