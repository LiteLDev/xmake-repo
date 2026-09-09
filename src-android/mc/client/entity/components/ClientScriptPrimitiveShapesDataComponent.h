#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/entity/components/ClientScriptPrimitiveShape.h"

// auto generated forward declare list
// clang-format off
class PrimitiveShapesPacket;
// clang-format on

namespace ScriptModuleMinecraft {

struct ClientScriptPrimitiveShapesDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ClientScriptPrimitiveShape>> mShapes;
    ::ll::TypedStorage<1, 1, bool>                                                            mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientScriptPrimitiveShapesDataComponent& operator=(ClientScriptPrimitiveShapesDataComponent const&);
    ClientScriptPrimitiveShapesDataComponent(ClientScriptPrimitiveShapesDataComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void handlePacket(::PrimitiveShapesPacket const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
