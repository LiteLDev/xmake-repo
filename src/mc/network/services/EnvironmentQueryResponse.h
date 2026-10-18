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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<std::string, std::map<std::string, std::map<std::string, std::string>>>> mServicesMap;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>> mSupportedEnvironments;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk1fb873;
    ::ll::UntypedStorage<8, 16> mUnk891ef2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentQueryResponse& operator=(EnvironmentQueryResponse const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EnvironmentQueryResponse(EnvironmentQueryResponse const&);
    EnvironmentQueryResponse();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string GetDefaultEnvironment() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::std::string GetDefaultEnvironment() const;

    MCNAPI ::std::string GetPropertyValue(::std::string const& serviceName, ::std::string const& propertyKey) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI void fromJsonShared(::Json::Value const& jsonValue);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Services
