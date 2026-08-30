#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/BinaryRequestBody.h"

namespace Bedrock::Http {

class StringRequestBody : public ::Bedrock::Http::BinaryRequestBody {
public:
    // prevent constructor by default
    StringRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::gsl::span<const uchar> getLoggableData() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Bedrock::Http::StringRequestBody> create(std::string const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::gsl::span<const uchar> $getLoggableData() const;
    // NOLINTEND
};

} // namespace Bedrock::Http
