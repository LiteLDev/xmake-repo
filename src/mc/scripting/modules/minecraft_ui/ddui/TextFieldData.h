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

struct TextFieldData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 192> mLabel;
    ::ll::UntypedStorage<8, 32>  mText;
    ::ll::UntypedStorage<8, 200> mDescription;
    ::ll::UntypedStorage<8, 48>  mDisabled;
    ::ll::UntypedStorage<8, 40>  mVisible;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 216> mUnkfbdb02;
    ::ll::UntypedStorage<8, 32>  mUnkdd57d9;
    ::ll::UntypedStorage<8, 224> mUnka98473;
    ::ll::UntypedStorage<8, 48>  mUnk1c93be;
    ::ll::UntypedStorage<8, 40>  mUnkea8a18;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TextFieldData& operator=(TextFieldData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TextFieldData(TextFieldData const&);
#endif // @header-generator platform
    TextFieldData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextFieldData(::ScriptModuleMinecraftServerUI::TextFieldData&&);

    MCNAPI ~TextFieldData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::TextFieldData&&);
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
