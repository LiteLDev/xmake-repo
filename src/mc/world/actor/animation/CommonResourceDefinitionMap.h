#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/MolangVariableSettings.h"
#include "mc/util/NamedMolangScript.h"
#include "mc/world/actor/animation/ActorAnimationControllerPtr.h"
#include "mc/world/actor/animation/ActorSkeletalAnimationPtr.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPtr;
class ActorSkeletalAnimationPtr;
struct MolangVariableSettings;
struct NamedMolangScript;
// clang-format on
#endif // @header-generator platform

class CommonResourceDefinitionMap {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ActorSkeletalAnimationPtr>> mActorAnimationMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ActorAnimationControllerPtr>> mActorAnimationControllerMap;
    ::ll::TypedStorage<8, 24, std::vector<NamedMolangScript>> mActorAnimateScriptArray;
    ::ll::TypedStorage<8, 24, std::vector<MolangVariableSettings>> mVariableSettings;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mQueryableGeometryBoneNames;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ActorSkeletalAnimationPtr>> mActorAnimationMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ActorAnimationControllerPtr>>
                                                                       mActorAnimationControllerMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::NamedMolangScript>>      mActorAnimateScriptArray;
    ::ll::TypedStorage<8, 24, ::std::vector<::MolangVariableSettings>> mVariableSettings;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>           mQueryableGeometryBoneNames;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CommonResourceDefinitionMap& operator=(CommonResourceDefinitionMap const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<NamedMolangScript> const& getAnimateScriptArray() const;
#else // @header-generator platform
    MCAPI ::std::vector<::NamedMolangScript> const& getAnimateScriptArray() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<HashedString, ActorAnimationControllerPtr> const& getAnimationControllers() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI uint64 getQueryableGeometryBoneIndexByNameHash(uint64 boneNameHash) const;

    MCAPI void initQueryableGeometryBoneNames(::std::vector<::HashedString> geometryDefaultBoneOrientations);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getQueryableGeometryBoneIndexByNameHash(ulong) const;
#else // @header-generator platform
    MCAPI void mergeActorAnimateScriptArray(::std::vector<::NamedMolangScript> const& actorAnimateScriptArray);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initQueryableGeometryBoneNames(std::vector<HashedString>);
#else // @header-generator platform
    MCAPI void mergeAnimation(::HashedString const& name, ::ActorSkeletalAnimationPtr animationPtr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isCommonResourceDefinitionMapEmpty() const;
#else // @header-generator platform
    MCAPI void
    mergeAnimationController(::HashedString const& name, ::ActorAnimationControllerPtr animationControllerPtr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isQueryableGeometryBoneNameArrayInitialized() const;

    MCNAPI void mergeActorAnimateScriptArray(std::vector<NamedMolangScript> const&);

    MCNAPI void mergeAnimation(::HashedString const&, ::ActorSkeletalAnimationPtr);

    MCNAPI void mergeAnimationController(::HashedString const&, ::ActorAnimationControllerPtr);

    MCNAPI void mergePublicVariable(::HashedString const&);

    MCNAPI void removeActorAnimateScript(::HashedString const&);

    MCNAPI ~CommonResourceDefinitionMap();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void mergePublicVariable(::HashedString const& variableName);

    MCAPI void removeActorAnimateScript(::HashedString const& animateScriptName);

    MCAPI ~CommonResourceDefinitionMap();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
