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
    ::ll::UntypedStorage<8, 24>                                 mManager;
    ::ll::TypedStorage<8, 8, ::JigsawStructureElementRegistry&> mStructureRegistry;
    ::ll::TypedStorage<8, 8, ::FeatureRegistry&>                mFeatureRegistry;
    ::ll::UntypedStorage<8, 32>                                 mBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::Experiments const&>              mExperiments;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplateRegistrationContext& operator=(StructureTemplateRegistrationContext const&);
    StructureTemplateRegistrationContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StructureTemplateRegistrationContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
