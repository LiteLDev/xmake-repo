#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/FogDefinition.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
class MinEngineVersion;
class ResourcePackManager;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FogDefinitionRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16> mDefaultFogDefinition;
    ::ll::UntypedStorage<8, 40> mFogDefinitionMap;
    ::ll::UntypedStorage<8, 40> mBackCompatFogDefinitionMap;
    ::ll::UntypedStorage<8, 40> mMergedFogDefinitionMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FogDefinitionRegistry();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FogDefinitionRegistry();

    MCNAPI void bindFogTypes(::cereal::ReflectionCtx&);

    MCNAPI void clearBackCompatFogDefinitionMap();

    MCNAPI void clearDefaultFogDefinition();

    MCNAPI void clearMergedFogDefinitionMap();

    MCNAPI void
    load(::cereal::ReflectionCtx&, ::ResourcePackManager&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    MCNAPI ::WeakRef<const FogDefinition> registerBackCompatFogDefinition(::OwnerPtr<const FogDefinition>);

    MCNAPI ::WeakRef<const FogDefinition> registerFogDefinition(::OwnerPtr<const FogDefinition>);

    MCNAPI void registerFogFromJson(
        ::cereal::ReflectionCtx&,
        std::string const&,
        ::MinEngineVersion const&,
        bool,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>
    );

    MCNAPI ::WeakRef<const FogDefinition>
    registerMergedFogDefinition(std::vector<WeakRef<const FogDefinition>>, std::string const&);

    MCNAPI void setDefaultFogDefinition(::HashedString const&, bool);

    MCNAPI void setDefaultMergedFogDefinition(::WeakRef<const FogDefinition> const&);

    MCNAPI ::WeakRef<const FogDefinition> tryGetDefaultFogDefinition() const;

    MCNAPI ::WeakRef<const FogDefinition> tryGetFogDefinition(::HashedString const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
class ResourcePackManager;
struct FogDefinition;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FogDefinitionRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::WeakRef<::FogDefinition const>> mDefaultFogDefinition;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::OwnerPtr<::FogDefinition const>>>
        mFogDefinitionMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::OwnerPtr<::FogDefinition const>>>
        mBackCompatFogDefinitionMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::OwnerPtr<::FogDefinition const>>>
        mMergedFogDefinitionMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FogDefinitionRegistry() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FogDefinitionRegistry();

    MCAPI void load(
        ::cereal::ReflectionCtx&                           ctx,
        ::ResourcePackManager&                             rpm,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCAPI ::WeakRef<::FogDefinition const>
    registerBackCompatFogDefinition(::OwnerPtr<::FogDefinition const> definition);

    MCAPI ::WeakRef<::FogDefinition const> registerMergedFogDefinition(
        ::std::vector<::WeakRef<::FogDefinition const>> fogReferences,
        ::std::string const&                            biome
    );

    MCAPI void setDefaultFogDefinition(::HashedString const& name, bool useBackCompatMap);

    MCAPI ::WeakRef<::FogDefinition const> tryGetFogDefinition(::HashedString const& name) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class FogDefinitionRegistry {};
#endif // @header-generator platform
#endif // @header-generator platform
