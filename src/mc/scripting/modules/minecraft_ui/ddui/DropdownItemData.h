#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraftServerUI {

struct DropdownItemData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 192>     mLabel;
    ::ll::TypedStorage<8, 8, double> mValue;
    ::ll::UntypedStorage<8, 200>     mDescription;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 216> mUnk8badb1;
    ::ll::UntypedStorage<8, 8>   mUnkcf4071;
    ::ll::UntypedStorage<8, 224> mUnkb42eab;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DropdownItemData& operator=(DropdownItemData const&);
    DropdownItemData(DropdownItemData const&);
    DropdownItemData();
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftServerUI
