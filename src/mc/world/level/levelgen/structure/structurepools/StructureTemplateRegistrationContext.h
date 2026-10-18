#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class FeatureRegistry;
class IStructureTemplateManager;
class JigsawStructureElementRegistry;
// clang-format on

struct StructureTemplateRegistrationContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                 mManager;
    ::ll::TypedStorage<8, 8, ::JigsawStructureElementRegistry&> mStructureRegistry;
    ::ll::TypedStorage<8, 8, ::FeatureRegistry&>                mFeatureRegistry;
    ::ll::UntypedStorage<8, 32>                                 mBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::Experiments const&>              mExperiments;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>> mManager;
    ::ll::TypedStorage<8, 8, ::JigsawStructureElementRegistry&>                           mStructureRegistry;
    ::ll::TypedStorage<8, 8, ::FeatureRegistry&>                                          mFeatureRegistry;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                                          mBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::Experiments const&>                                        mExperiments;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    StructureTemplateRegistrationContext(
        Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> const& manager,
        JigsawStructureElementRegistry&                                 structureRegistry,
        FeatureRegistry&                                                featureRegistry,
        BaseGameVersion                                                 baseGameVersion,
        Experiments const&                                              experiments
    )
    : mManager(manager),
      mStructureRegistry(structureRegistry),
      mFeatureRegistry(featureRegistry),
      mBaseGameVersion(baseGameVersion),
      mExperiments(experiments) {}
#endif // @header-generator platform

public:
    // prevent constructor by default
    StructureTemplateRegistrationContext& operator=(StructureTemplateRegistrationContext const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    StructureTemplateRegistrationContext(StructureTemplateRegistrationContext const&);
#endif // @header-generator platform
    StructureTemplateRegistrationContext();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~StructureTemplateRegistrationContext();
#else // @header-generator platform
    MCAPI ~StructureTemplateRegistrationContext();
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
