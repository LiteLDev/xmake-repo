#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IResponseBody.h"
#include "mc/deps/core/http/ResponseBodyType.h"

namespace Bedrock::Http {

class BufferedResponseBody : public ::Bedrock::Http::Internal::IResponseBody {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mBuffer;
    ::ll::TypedStorage<1, 1, bool>                mWriteComplete;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkdaa3b5;
    ::ll::UntypedStorage<1, 1>  mUnkea5b17;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BufferedResponseBody& operator=(BufferedResponseBody const&);
    BufferedResponseBody(BufferedResponseBody const&);
    BufferedResponseBody();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BufferedResponseBody();
#else // @header-generator platform
    virtual ~BufferedResponseBody() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::error_code start(std::optional<ulong>);
#else // @header-generator platform
    virtual ::std::error_code start(::std::optional<uint64> size) /*override*/;
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::gsl::span<const uchar> get() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Bedrock::Http::BufferedResponseBody> create();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
    MCNAPI ::std::error_code $start(::std::optional<uint64> size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::error_code $write(::gsl::span<const uchar>);
#else // @header-generator platform
    MCNAPI ::std::error_code $write(::gsl::span<uchar const> source);
#endif // @header-generator platform

    MCNAPI void $complete();

    MCNAPI void $cancel();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getLoggableDestination() const;
#else // @header-generator platform
    MCNAPI ::std::string const& $getLoggableDestination() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::span<const uchar> $getLoggableData() const;
#else // @header-generator platform
    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;
#endif // @header-generator platform

    MCNAPI ::Bedrock::Http::ResponseBodyType $getType() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
