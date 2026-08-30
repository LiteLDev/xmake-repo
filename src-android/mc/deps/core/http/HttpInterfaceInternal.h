#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/HttpInterface.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct HC_PERFORM_ENV;
struct XAsyncBlock;
// clang-format on

namespace Bedrock::Http {

class HttpInterfaceInternal : public ::Bedrock::Http::HttpInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpInterfaceInternal() = default;

    virtual void send(::gsl::not_null<HC_CALL*>, ::gsl::not_null<XAsyncBlock*>, ::HC_PERFORM_ENV*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $send(::gsl::not_null<HC_CALL*>, ::gsl::not_null<XAsyncBlock*>, ::HC_PERFORM_ENV*);
    // NOLINTEND
};

} // namespace Bedrock::Http
