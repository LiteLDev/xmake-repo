#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
class Result : public ::Bedrock::Result<void, std::error_code> {
#else // @header-generator platform
class Result : public ::Bedrock::Result<void> {
#endif // @header-generator platform
public:
    // prevent constructor by default
    Result();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Result(bool);
#else // @header-generator platform
    MCAPI explicit Result(::Bedrock::ErrorInfo<::std::error_code>&& error);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Result(::Bedrock::Result<void, std::error_code>&&);
#else // @header-generator platform
    MCAPI explicit Result(bool success);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Result(::Bedrock::ErrorInfo<std::error_code>&&);

    MCNAPI Result(::Core::Result&&);

    MCNAPI ::Core::Result& operator=(::Core::Result&&);

    MCNAPI ~Result();
#else // @header-generator platform
    MCAPI ~Result();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(bool);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::ErrorInfo<::std::error_code>&& error);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::Result<void, std::error_code>&&);

    MCNAPI void* $ctor(::Bedrock::ErrorInfo<std::error_code>&&);

    MCNAPI void* $ctor(::Core::Result&&);
#else // @header-generator platform
    MCAPI void* $ctor(bool success);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
