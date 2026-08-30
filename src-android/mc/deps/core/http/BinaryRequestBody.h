#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IRequestBody.h"

namespace Bedrock::Http {

class BinaryRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
    ::ll::TypedStorage<8, 8, ulong>               mReadHead;
    // NOLINTEND

public:
    // prevent constructor by default
    BinaryRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BinaryRequestBody();

    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>);

    virtual ulong getSize();

    virtual void cancel();

    virtual std::string const& getLoggableSource() const;

    virtual ::gsl::span<const uchar> getLoggableData() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BinaryRequestBody(::gsl::span<const uchar>);

    MCNAPI ::gsl::span<const uchar> _getData() const;

    MCNAPI void setData(::gsl::span<const uchar>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Bedrock::Http::BinaryRequestBody> create(::gsl::span<const uchar>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::span<const uchar>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar>);

    MCNAPI ulong $getSize();

    MCNAPI void $cancel();

    MCNAPI std::string const& $getLoggableSource() const;

    MCNAPI ::gsl::span<const uchar> $getLoggableData() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
