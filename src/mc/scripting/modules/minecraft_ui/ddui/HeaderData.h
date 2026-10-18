#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraftServerUI {

struct HeaderData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 192> mText;
    ::ll::UntypedStorage<8, 40>  mVisible;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 216> mUnkc0ff3b;
    ::ll::UntypedStorage<8, 40>  mUnkd8ab3e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HeaderData& operator=(HeaderData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    HeaderData(HeaderData const&);
#endif // @header-generator platform
    HeaderData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~HeaderData();
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
