#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

namespace Core {

class Result : public ::Bedrock::Result<void, std::error_code> {
public:
    // prevent constructor by default
    Result();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Result(bool);

    MCNAPI explicit Result(::Bedrock::Result<void, std::error_code>&&);

    MCNAPI explicit Result(::Bedrock::ErrorInfo<std::error_code>&&);

    MCNAPI Result(::Core::Result&&);

    MCNAPI ::Core::Result& operator=(::Core::Result&&);

    MCNAPI ~Result();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);

    MCNAPI void* $ctor(::Bedrock::Result<void, std::error_code>&&);

    MCNAPI void* $ctor(::Bedrock::ErrorInfo<std::error_code>&&);

    MCNAPI void* $ctor(::Core::Result&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
