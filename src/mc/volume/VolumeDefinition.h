#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/factory/DefinitionInstanceGroup.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/volume/VolumeIdentifier.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersionConstant;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, ::VolumeIdentifier> mID;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk98f1e1;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        VolumeDescription& operator=(VolumeDescription const&);
        VolumeDescription(VolumeDescription const&);
        VolumeDescription();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::VolumeDefinition::VolumeDescription> mDescription;
    ::ll::TypedStorage<8, 56, ::DefinitionInstanceGroup>             mComponentDefinitionGroup;
    ::ll::UntypedStorage<8, 32>                                      mMinEngineVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkc1bc7b;
    ::ll::UntypedStorage<8, 72> mUnk344d33;
    ::ll::UntypedStorage<8, 32> mUnk8a75ea;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    VolumeDefinition& operator=(VolumeDefinition const&);
    VolumeDefinition(VolumeDefinition const&);
    VolumeDefinition();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static ::SemVersionConstant const& getMaxSupportedVersion();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& NAME();
#else // @header-generator platform
    MCNAPI static ::std::string const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};
