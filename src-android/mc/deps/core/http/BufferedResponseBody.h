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
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mBuffer;
    ::ll::TypedStorage<1, 1, bool>                mWriteComplete;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BufferedResponseBody();

    virtual std::error_code start(std::optional<ulong>);

    virtual std::error_code write(::gsl::span<const uchar>);

    virtual void complete();

    virtual void cancel();

    virtual std::string const& getLoggableDestination() const;

    virtual ::gsl::span<const uchar> getLoggableData() const;

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::error_code $start(std::optional<ulong>);

    MCNAPI std::error_code $write(::gsl::span<const uchar>);

    MCNAPI void $complete();

    MCNAPI void $cancel();

    MCNAPI std::string const& $getLoggableDestination() const;

    MCNAPI ::gsl::span<const uchar> $getLoggableData() const;

    MCNAPI ::Bedrock::Http::ResponseBodyType $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
