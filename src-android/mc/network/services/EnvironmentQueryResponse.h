#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Bedrock::Services {

struct EnvironmentQueryResponse {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<std::string, std::map<std::string, std::map<std::string, std::string>>>> mServicesMap;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>> mSupportedEnvironments;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentQueryResponse& operator=(EnvironmentQueryResponse const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string GetDefaultEnvironment() const;

    MCNAPI std::string GetPropertyValue(std::string const&, std::string const&) const;

    MCNAPI std::map<std::string, std::string> const*
           GetServiceEnvironmentProperties(std::string const&, std::string const&) const;

    MCNAPI void fromJsonShared(::Json::Value const&);

    MCNAPI ~EnvironmentQueryResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Services
