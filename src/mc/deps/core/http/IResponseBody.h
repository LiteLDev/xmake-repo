#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/http/ResponseBodyType.h"

#endif // @header-generator platform
namespace Bedrock::Http::Internal {

#if defined(LL_PLAT_A) // @header-generator platform
class IResponseBody {};
#else // @header-generator platform
class IResponseBody {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResponseBody() = default;

    virtual ::std::error_code start(::std::optional<uint64> size) = 0;

    virtual ::std::error_code write(::gsl::span<uchar const> source) = 0;

    virtual void complete() = 0;

    virtual void cancel() = 0;

    virtual ::std::string const& getLoggableDestination() const = 0;

    virtual ::gsl::span<uchar const> getLoggableData() const = 0;

    virtual ::Bedrock::Http::ResponseBodyType getType() const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace Bedrock::Http::Internal
