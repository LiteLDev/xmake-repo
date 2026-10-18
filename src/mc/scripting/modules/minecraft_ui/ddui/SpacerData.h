#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraftServerUI {

struct SpacerData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40> mVisible;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnk3487f8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SpacerData& operator=(SpacerData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SpacerData(SpacerData const&);
#endif // @header-generator platform
    SpacerData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SpacerData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftServerUI
