#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptStructureCreateOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<bool>>                      mIncludeEntities;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                      mIncludeBlocks;
    ::ll::TypedStorage<1, 2, std::optional<StructureRedstoneSaveMode>> mSaveMode;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                        mIncludeEntities;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                        mIncludeBlocks;
    ::ll::TypedStorage<1, 2, ::std::optional<::StructureRedstoneSaveMode>> mSaveMode;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
