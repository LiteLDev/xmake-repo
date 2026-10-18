#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ServerConfiguration {

struct GatheringsConfigurationJoinInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>                mExperienceId;
    ::ll::TypedStorage<8, 24, std::string>                mExperienceName;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>>   mExperienceWorldId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mExperienceWorldName;
    ::ll::TypedStorage<8, 24, std::string>                mCreatorId;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>>   mTargetId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mMPSASScenarioId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mServerId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkb1c891;
    ::ll::UntypedStorage<8, 32> mUnk8546c2;
    ::ll::UntypedStorage<8, 24> mUnk358c16;
    ::ll::UntypedStorage<8, 40> mUnkff611f;
    ::ll::UntypedStorage<8, 32> mUnk6c520d;
    ::ll::UntypedStorage<8, 24> mUnkd3c5e2;
    ::ll::UntypedStorage<8, 40> mUnk5af099;
    ::ll::UntypedStorage<8, 40> mUnk537d55;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    GatheringsConfigurationJoinInfo(GatheringsConfigurationJoinInfo const&);
#else // @header-generator platform
    GatheringsConfigurationJoinInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI GatheringsConfigurationJoinInfo(::ServerConfiguration::GatheringsConfigurationJoinInfo const&);

#endif // @header-generator platform
    MCNAPI ::ServerConfiguration::GatheringsConfigurationJoinInfo&
    operator=(::ServerConfiguration::GatheringsConfigurationJoinInfo&&);

    MCNAPI ::ServerConfiguration::GatheringsConfigurationJoinInfo&
    operator=(::ServerConfiguration::GatheringsConfigurationJoinInfo const&);

    MCNAPI ~GatheringsConfigurationJoinInfo();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindPacketType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCNAPI void* $ctor(::ServerConfiguration::GatheringsConfigurationJoinInfo const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
