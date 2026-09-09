#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShape.h"
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShapeType.h"

// auto generated forward declare list
// clang-format off
struct PrimitiveShapeDataPayload;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLinePrimitive : public ::ScriptModuleMinecraft::ScriptPrimitiveShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mEndLocation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptLinePrimitive();

    virtual void populatePacketData(::PrimitiveShapeDataPayload&) const;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptLinePrimitive();

    MCNAPI
    ScriptLinePrimitive(std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&, ::Vec3 const&, bool);

    MCNAPI ::Vec3 const& getEndLocation() const;

    MCNAPI void setEndLocation(::Vec3 const&);
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

    MCNAPI void* $ctor(std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&, ::Vec3 const&, bool);
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
