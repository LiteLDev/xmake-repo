#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptSoundDefinitionDurationInfo.h"
#include "mc/scripting/modules/minecraft/ScriptSoundDefinitionMusicInfo.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace ServerSoundRuntime { struct Definition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSoundDefinition {
public:
    // ScriptSoundDefinition inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptSoundDefinition inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString> mId;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                              mSoundEventId;
    ::ll::TypedStorage<4, 8, std::optional<ScriptModuleMinecraft::ScriptSoundDefinitionDurationInfo>>   mDurationInfo;
    ::ll::TypedStorage<8, 136, std::optional<ScriptModuleMinecraft::ScriptSoundDefinitionMusicInfo>>    mMusicInfo;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, std::vector<std::string>>>> mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSoundDefinition(::ScriptModuleMinecraft::ScriptSoundDefinition const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptSoundDefinition&
    operator=(::ScriptModuleMinecraft::ScriptSoundDefinition const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptSoundDefinition>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const&, ::ServerSoundRuntime::Definition const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSoundDefinition const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
