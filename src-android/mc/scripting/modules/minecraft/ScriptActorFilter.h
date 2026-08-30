#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptPropertyTargetSelectorOption.h"
#include "mc/scripting/modules/minecraft/ScriptScoreTargetSelectorOption.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorFilter {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 8, std::optional<int>> mMinLevel;
    ::ll::TypedStorage<4, 8, std::optional<int>> mMaxLevel;
    ::ll::TypedStorage<4, 8, std::optional<float>> mMinVerticalRotation;
    ::ll::TypedStorage<4, 8, std::optional<float>> mMaxVerticalRotation;
    ::ll::TypedStorage<4, 8, std::optional<float>> mMinHorizontalRotation;
    ::ll::TypedStorage<4, 8, std::optional<float>> mMaxHorizontalRotation;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mType;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mFamilies;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mTags;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mName;
    ::ll::TypedStorage<4, 8, std::optional<GameType>> mGameMode;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mExcludeTypes;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mExcludeFamilies;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mExcludeTags;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mExcludeNames;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<GameType>>> mExcludeGameModes;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ScriptModuleMinecraft::ScriptScoreTargetSelectorOption>>> mScoreOptions;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption>>> mPropertyOptions;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorFilter();

    MCNAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter const&);

    MCNAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter&&);

    MCNAPI bool operator()(::Actor const&) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter const&);

    MCNAPI ~ScriptActorFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
