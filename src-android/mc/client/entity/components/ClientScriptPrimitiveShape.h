#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPrimitiveShape; }
namespace Scripting::RenderHelper { class BasePrimitivePosition; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ClientScriptPrimitiveShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptPrimitiveShape>> shapeData;
    ::ll::UntypedStorage<1, 16>                                                            renderPrimitive;
    ::ll::TypedStorage<1, 1, bool>                                                         dirty;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientScriptPrimitiveShape& operator=(ClientScriptPrimitiveShape const&);
    ClientScriptPrimitiveShape(ClientScriptPrimitiveShape const&);
    ClientScriptPrimitiveShape();
};

} // namespace ScriptModuleMinecraft
