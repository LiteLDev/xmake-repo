#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct ImplCtor; }
// clang-format on
#endif // @header-generator platform

namespace Bedrock::Resources::Archive {

class Reader
: public ::Bedrock::
#if defined(LL_PLAT_A) // @header-generator platform
      ImplBase<Bedrock::Resources::Archive::Reader, Bedrock::ImplCtor(std::unique_ptr<uchar[]>, const ulong&)> {};
#else // @header-generator platform
      ImplBase<::Bedrock::Resources::Archive::Reader, ::Bedrock::ImplCtor(::std::unique_ptr<uchar[0]>, uint64 const&)> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const = 0;

    virtual void
    forEachIn(::brstd::function_ref<void(::std::string_view, ::gsl::span<uchar const>)> callback) const = 0;

    virtual void forEachIn(::brstd::function_ref<void(::std::string_view, ::gsl::span<uchar>)> callback) = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace Bedrock::Resources::Archive
