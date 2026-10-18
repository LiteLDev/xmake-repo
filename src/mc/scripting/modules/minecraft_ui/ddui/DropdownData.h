#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/DropdownItemData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftServerUI { class ScriptObservableNumber; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraftServerUI {

struct DropdownData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 192>                                                            mLabel;
    ::ll::UntypedStorage<8, 32>                                                             mValue;
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraftServerUI::DropdownItemData>> mItems;
    ::ll::UntypedStorage<8, 200>                                                            mDescription;
    ::ll::UntypedStorage<8, 48>                                                             mDisabled;
    ::ll::UntypedStorage<8, 40>                                                             mVisible;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 216> mUnka668c7;
    ::ll::UntypedStorage<8, 32>  mUnk94138a;
    ::ll::UntypedStorage<8, 24>  mUnkd7ffb9;
    ::ll::UntypedStorage<8, 224> mUnkd44008;
    ::ll::UntypedStorage<8, 48>  mUnkf77654;
    ::ll::UntypedStorage<8, 40>  mUnkb2b197;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DropdownData& operator=(DropdownData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DropdownData(DropdownData const&);
#endif // @header-generator platform
    DropdownData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DropdownData(::ScriptModuleMinecraftServerUI::DropdownData&&);

    MCNAPI ~DropdownData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::DropdownData&&);
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
