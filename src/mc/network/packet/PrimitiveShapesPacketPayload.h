#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/network/packet/PrimitiveShapeDataPayload.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPrimitiveShape; }
#else // @header-generator platform
struct PrimitiveShapeDataPayload;
#endif // @header-generator platform
// clang-format on

struct PrimitiveShapesPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PrimitiveShapeDataPayload>> mShapes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addShapeToPacket(::ScriptModuleMinecraft::ScriptPrimitiveShape&, bool);
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::PrimitiveShapeDataPayload>> mShapes;
#endif // @header-generator platform
    // NOLINTEND
};
