#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptLinePrimitive.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct PrimitiveShapeDataPayload;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptArrowPrimitive : public ::ScriptModuleMinecraft::ScriptLinePrimitive {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHeadRadius;
    ::ll::TypedStorage<4, 4, float> mHeadLength;
    ::ll::TypedStorage<4, 4, int>   mSegments;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptArrowPrimitive();

    virtual void populatePacketData(::PrimitiveShapeDataPayload&) const;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptArrowPrimitive();

    MCNAPI ScriptArrowPrimitive(
        std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&,
        ::Vec3 const&,
        bool
    );

    MCNAPI float getHeadLength() const;

    MCNAPI float getHeadRadius() const;

    MCNAPI int getNumSegments() const;

    MCNAPI void setHeadLength(float);

    MCNAPI void setHeadRadius(float);

    MCNAPI void setNumSegments(int);
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
