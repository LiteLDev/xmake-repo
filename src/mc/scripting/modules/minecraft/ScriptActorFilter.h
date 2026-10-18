#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptPropertyTargetSelectorOption.h"
#include "mc/scripting/modules/minecraft/ScriptScoreTargetSelectorOption.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptPropertyTargetSelectorOption; }
namespace ScriptModuleMinecraft { struct ScriptScoreTargetSelectorOption; }
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                           mMinLevel;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                           mMaxLevel;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mMinVerticalRotation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mMaxVerticalRotation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mMinHorizontalRotation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mMaxHorizontalRotation;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mType;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mFamilies;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mTags;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mName;
    ::ll::TypedStorage<4, 8, ::std::optional<::GameType>>                    mGameMode;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mExcludeTypes;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mExcludeFamilies;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mExcludeTags;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mExcludeNames;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::GameType>>>    mExcludeGameModes;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption>>>
        mScoreOptions;
    ::ll::
        TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption>>>
            mPropertyOptions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptActorFilter();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorFilter();
#else // @header-generator platform
    MCAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter const&);
#else // @header-generator platform
    MCAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter&&);
#else // @header-generator platform
    MCAPI bool operator()(::Actor const& actor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator()(::Actor const&) const;
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter&&);
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter const&);

    MCNAPI ~ScriptActorFilter();
#else // @header-generator platform
    MCAPI ~ScriptActorFilter();
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

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter&&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
