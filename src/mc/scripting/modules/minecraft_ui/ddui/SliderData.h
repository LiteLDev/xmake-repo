#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableNumber.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraftServerUI {

struct SliderData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 192> mLabel;
    ::ll::UntypedStorage<8, 32>  mValue;
    ::ll::UntypedStorage<8, 40>  mMin;
    ::ll::UntypedStorage<8, 40>  mMax;
    ::ll::UntypedStorage<8, 40>  mStep;
    ::ll::UntypedStorage<8, 200> mDescription;
    ::ll::UntypedStorage<8, 48>  mDisabled;
    ::ll::UntypedStorage<8, 40>  mVisible;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 216> mUnkac8b8d;
    ::ll::UntypedStorage<8, 32>  mUnk7a9a7b;
    ::ll::UntypedStorage<8, 40>  mUnkb26da5;
    ::ll::UntypedStorage<8, 40>  mUnk7282df;
    ::ll::UntypedStorage<8, 40>  mUnk9ae687;
    ::ll::UntypedStorage<8, 224> mUnkc1af50;
    ::ll::UntypedStorage<8, 48>  mUnk7bce90;
    ::ll::UntypedStorage<8, 40>  mUnka13f8b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SliderData& operator=(SliderData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SliderData(SliderData const&);
#endif // @header-generator platform
    SliderData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SliderData(::ScriptModuleMinecraftServerUI::SliderData&&);

    MCNAPI ~SliderData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::SliderData&&);
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
