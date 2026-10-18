#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShape.h"

// auto generated forward declare list
// clang-format off
struct PrimitiveShapeDataPayload;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptEllipsoidPrimitive();
#else // @header-generator platform
    virtual void populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const& existing) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $populatePacketData(::PrimitiveShapeDataPayload&) const;
#else // @header-generator platform
    MCAPI void $populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const&);
#else // @header-generator platform
    MCAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const& existing);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
