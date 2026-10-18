#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptLinePrimitive.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
struct PrimitiveShapeDataPayload;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptArrowPrimitive();
#else // @header-generator platform
    virtual void populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void populatePacketData(::PrimitiveShapeDataPayload&) const;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const&);
#else // @header-generator platform
    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const& existing) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ScriptArrowPrimitive();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&, ::Vec3 const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
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
