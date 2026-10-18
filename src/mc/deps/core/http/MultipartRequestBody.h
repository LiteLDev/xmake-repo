#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/http/IRequestBody.h"

#endif // @header-generator platform
namespace Bedrock::Http {

#if defined(LL_PLAT_C) // @header-generator platform
class MultipartRequestBody {};
#else // @header-generator platform
class MultipartRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk46a64e;
    ::ll::UntypedStorage<8, 24> mUnk69f068;
    ::ll::UntypedStorage<8, 8>  mUnk140a72;
    // NOLINTEND

public:
    // prevent constructor by default
    MultipartRequestBody& operator=(MultipartRequestBody const&);
    MultipartRequestBody(MultipartRequestBody const&);
    MultipartRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>) /*override*/;

    virtual uint64 getSize() /*override*/;

    virtual void cancel() /*override*/;

    virtual ::std::string const& getLoggableSource() const /*override*/;

    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace Bedrock::Http
#endif // @header-generator platform
