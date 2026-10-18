#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IResponseBody.h"
#include "mc/deps/core/http/ResponseBodyType.h"

namespace Bedrock::Http {

class IgnoredResponseBody : public ::Bedrock::Http::Internal::IResponseBody {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::error_code start(std::optional<ulong>);
#else // @header-generator platform
    virtual ::std::error_code start(::std::optional<uint64>) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::error_code write(::gsl::span<const uchar>);
#else // @header-generator platform
    virtual ::std::error_code write(::gsl::span<uchar const> source) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void complete();
#else // @header-generator platform
    virtual void complete() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cancel();
#else // @header-generator platform
    virtual void cancel() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getLoggableDestination() const;
#else // @header-generator platform
    virtual ::std::string const& getLoggableDestination() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<const uchar> getLoggableData() const;
#else // @header-generator platform
    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Http::ResponseBodyType getType() const;
#else // @header-generator platform
    virtual ::Bedrock::Http::ResponseBodyType getType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::error_code $start(std::optional<ulong>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::std::error_code $start(::std::optional<uint64>);

    MCNAPI ::std::string const& $getLoggableDestination() const;

    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;

    MCNAPI ::Bedrock::Http::ResponseBodyType $getType() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getLoggableDestination() const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::span<const uchar> $getLoggableData() const;

    MCNAPI ::Bedrock::Http::ResponseBodyType $getType() const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
