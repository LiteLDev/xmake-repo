#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonRpc {

class ServiceError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                            mNameSpace;
    ::ll::TypedStorage<8, 24, std::string>                            mCode;
    ::ll::TypedStorage<8, 24, std::string>                            mMessage;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>     mCustomData;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>             mStackTrace;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::ServiceError>> mInnerError;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk67b4f1;
    ::ll::UntypedStorage<8, 32> mUnka18608;
    ::ll::UntypedStorage<8, 32> mUnk277444;
    ::ll::UntypedStorage<8, 16> mUnk6295e3;
    ::ll::UntypedStorage<8, 40> mUnk731bd2;
    ::ll::UntypedStorage<8, 16> mUnk7eb6de;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ServiceError(ServiceError const&);
#else // @header-generator platform
    ServiceError& operator=(ServiceError const&);
    ServiceError();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::JsonRpc::ServiceError& operator=(::JsonRpc::ServiceError&&);
#else // @header-generator platform
    MCNAPI ServiceError(::JsonRpc::ServiceError&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::JsonRpc::ServiceError& operator=(::JsonRpc::ServiceError const&);
#else // @header-generator platform
    MCNAPI ServiceError(::JsonRpc::ServiceError const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::JsonRpc::ServiceError const&) const;
#else // @header-generator platform
    MCNAPI bool operator==(::JsonRpc::ServiceError const& rhs) const;

    MCNAPI ~ServiceError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JsonRpc::ServiceError&&);

    MCNAPI void* $ctor(::JsonRpc::ServiceError const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace JsonRpc
