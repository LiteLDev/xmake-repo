#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::Internal {

#if defined(LL_PLAT_A) // @header-generator platform
class IRequestBody : public ::std::enable_shared_from_this<Bedrock::Http::Internal::IRequestBody> {
#else // @header-generator platform
class IRequestBody : public ::std::enable_shared_from_this<::Bedrock::Http::Internal::IRequestBody> {
#endif // @header-generator platform
public:
    // IRequestBody inner types declare
    // clang-format off
    struct ReadResult;
    // clang-format on

    // IRequestBody inner types define
    struct ReadResult {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>  success;
        ::ll::TypedStorage<8, 8, ulong> readBytes;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnkb4d25b;
        ::ll::UntypedStorage<8, 8> mUnk659573;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        ReadResult& operator=(ReadResult const&);
        ReadResult(ReadResult const&);
        ReadResult();
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRequestBody() = default;

    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar> destination) = 0;

    virtual uint64 getSize() = 0;

    virtual void cancel() = 0;

    virtual ::std::string const& getLoggableSource() const = 0;

    virtual ::gsl::span<uchar const> getLoggableData() const = 0;
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Bedrock::Http::Internal
