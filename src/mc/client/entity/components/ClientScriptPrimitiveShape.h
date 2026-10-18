#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPrimitiveShape; }
namespace Scripting::RenderHelper { class BasePrimitivePosition; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct ClientScriptPrimitiveShape {};
#endif // @header-generator platform

} // namespace ScriptModuleMinecraft
