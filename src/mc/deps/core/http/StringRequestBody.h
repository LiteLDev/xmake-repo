#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/BinaryRequestBody.h"

namespace Bedrock::Http {

class StringRequestBody : public ::Bedrock::Http::BinaryRequestBody {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    StringRequestBody();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<const uchar> getLoggableData() const;
#else // @header-generator platform
    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Bedrock::Http::StringRequestBody> create(std::string const&);
#else // @header-generator platform
    MCNAPI static ::std::shared_ptr<::Bedrock::Http::StringRequestBody> create(::std::string const& data);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::span<const uchar> $getLoggableData() const;
#else // @header-generator platform
    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
