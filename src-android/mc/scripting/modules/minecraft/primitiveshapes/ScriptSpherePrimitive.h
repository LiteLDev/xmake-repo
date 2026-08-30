#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShape.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct PrimitiveShapeDataPayload;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSpherePrimitive : public ::ScriptModuleMinecraft::ScriptPrimitiveShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSegments;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptSpherePrimitive();

    virtual void populatePacketData(::PrimitiveShapeDataPayload&) const;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSpherePrimitive();

    MCNAPI ScriptSpherePrimitive(std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&, bool);

    MCNAPI int getNumSegments() const;
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
