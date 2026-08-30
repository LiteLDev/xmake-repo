#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PrimitiveShapeDataPayload.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPrimitiveShape; }
// clang-format on

struct PrimitiveShapesPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PrimitiveShapeDataPayload>> mShapes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addShapeToPacket(::ScriptModuleMinecraft::ScriptPrimitiveShape&, bool);
    // NOLINTEND
};
