#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/platform/Result.h"

#endif // @header-generator platform
namespace Bedrock::Resources::Archive {

#if defined(LL_PLAT_A) // @header-generator platform
class Builder : public ::Bedrock::ImplBase<Bedrock::Resources::Archive::Builder> {};
#else // @header-generator platform
class Builder : public ::Bedrock::ImplBase<::Bedrock::Resources::Archive::Builder> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Result<void> addEntry(::std::string_view name, ::gsl::span<uchar const> data) = 0;

    virtual uint64 getSize() const = 0;

    virtual ::Bedrock::Result<void> toBuffer(::gsl::span<uchar> buffer) const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace Bedrock::Resources::Archive
