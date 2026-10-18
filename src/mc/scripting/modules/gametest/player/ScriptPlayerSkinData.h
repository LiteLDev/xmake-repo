#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/scripting/modules/gametest/player/ScriptPlayerPersonaPiece.h"
#else // @header-generator platform
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptRGB.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleGameTest { struct ScriptPlayerPersonaPiece; }
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptPlayerSkinData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ScriptModuleGameTest::ScriptPlayerPersonaPiece>>> personaPieces;
    ::ll::TypedStorage<8, 32, std::optional<ScriptModuleMinecraft::ScriptRGB>>                            skinColor;
    ::ll::TypedStorage<1, 2, std::optional<SharedTypes::persona::ArmSizeType>>                            armSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptPlayerSkinData();
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleGameTest::ScriptPlayerPersonaPiece>>>
                                                                                   personaPieces;
    ::ll::TypedStorage<8, 32, ::std::optional<::ScriptModuleMinecraft::ScriptRGB>> skinColor;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::persona::ArmSizeType>> armSize;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
