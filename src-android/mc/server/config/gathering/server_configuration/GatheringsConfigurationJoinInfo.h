#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ServerConfiguration {

struct GatheringsConfigurationJoinInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                mExperienceId;
    ::ll::TypedStorage<8, 24, std::string>                mExperienceName;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>>   mExperienceWorldId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mExperienceWorldName;
    ::ll::TypedStorage<8, 24, std::string>                mCreatorId;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>>   mTargetId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mMPSASScenarioId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mServerId;
    // NOLINTEND

public:
    // prevent constructor by default
    GatheringsConfigurationJoinInfo(GatheringsConfigurationJoinInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerConfiguration::GatheringsConfigurationJoinInfo&
    operator=(::ServerConfiguration::GatheringsConfigurationJoinInfo&&);

    MCNAPI ::ServerConfiguration::GatheringsConfigurationJoinInfo&
    operator=(::ServerConfiguration::GatheringsConfigurationJoinInfo const&);

    MCNAPI ~GatheringsConfigurationJoinInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindPacketType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
