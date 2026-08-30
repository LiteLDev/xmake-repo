#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class ServiceError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mNameSpace;
    ::ll::TypedStorage<8, 24, std::string>                            mCode;
    ::ll::TypedStorage<8, 24, std::string>                            mMessage;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>     mCustomData;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>             mStackTrace;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::ServiceError>> mInnerError;
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceError(ServiceError const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::JsonRpc::ServiceError& operator=(::JsonRpc::ServiceError&&);

    MCNAPI ::JsonRpc::ServiceError& operator=(::JsonRpc::ServiceError const&);

    MCNAPI bool operator==(::JsonRpc::ServiceError const&) const;
    // NOLINTEND
};

} // namespace JsonRpc
