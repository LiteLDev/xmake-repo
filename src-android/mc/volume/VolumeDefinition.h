#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/DefinitionInstanceGroup.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/volume/VolumeIdentifier.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct VolumeDefinition {
public:
    // VolumeDefinition inner types declare
    // clang-format off
    struct VolumeDescription;
    // clang-format on

    // VolumeDefinition inner types define
    struct VolumeDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::VolumeIdentifier> mID;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::VolumeDefinition::VolumeDescription> mDescription;
    ::ll::TypedStorage<8, 56, ::DefinitionInstanceGroup>             mComponentDefinitionGroup;
    ::ll::UntypedStorage<8, 32>                                      mMinEngineVersion;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static ::SemVersionConstant const& getMaxSupportedVersion();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NAME();
    // NOLINTEND
};
