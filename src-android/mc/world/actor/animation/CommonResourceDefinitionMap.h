#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangVariableSettings.h"
#include "mc/util/NamedMolangScript.h"
#include "mc/world/actor/animation/ActorAnimationControllerPtr.h"
#include "mc/world/actor/animation/ActorSkeletalAnimationPtr.h"

class CommonResourceDefinitionMap {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ActorSkeletalAnimationPtr>> mActorAnimationMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ActorAnimationControllerPtr>> mActorAnimationControllerMap;
    ::ll::TypedStorage<8, 24, std::vector<NamedMolangScript>> mActorAnimateScriptArray;
    ::ll::TypedStorage<8, 24, std::vector<MolangVariableSettings>> mVariableSettings;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mQueryableGeometryBoneNames;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CommonResourceDefinitionMap& operator=(CommonResourceDefinitionMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<NamedMolangScript> const& getAnimateScriptArray() const;

    MCNAPI std::unordered_map<HashedString, ActorAnimationControllerPtr> const& getAnimationControllers() const;

    MCNAPI ulong getQueryableGeometryBoneIndexByNameHash(ulong) const;

    MCNAPI void initQueryableGeometryBoneNames(std::vector<HashedString>);

    MCNAPI bool isCommonResourceDefinitionMapEmpty() const;

    MCNAPI bool isQueryableGeometryBoneNameArrayInitialized() const;

    MCNAPI void mergeActorAnimateScriptArray(std::vector<NamedMolangScript> const&);

    MCNAPI void mergeAnimation(::HashedString const&, ::ActorSkeletalAnimationPtr);

    MCNAPI void mergeAnimationController(::HashedString const&, ::ActorAnimationControllerPtr);

    MCNAPI void mergePublicVariable(::HashedString const&);

    MCNAPI void removeActorAnimateScript(::HashedString const&);

    MCNAPI ~CommonResourceDefinitionMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
