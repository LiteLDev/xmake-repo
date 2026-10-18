#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/resource_processing/BinaryHeaderSemVersion.h"
#include "mc/deps/resource_processing/category/ResourceCategory.h"
#include "mc/platform/Result.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class BinaryStream;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { class Logger; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Resources {

struct BinaryHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                      mVersion;
    ::ll::TypedStorage<2, 2, ::Bedrock::Resources::ResourceCategory> mCategory;
    ::ll::TypedStorage<8, 8, ulong>                                  mSize;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk5a47a2;
    ::ll::UntypedStorage<2, 2>  mUnkf9cdc5;
    ::ll::UntypedStorage<8, 8>  mUnk6d8f24;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BinaryHeader& operator=(BinaryHeader const&);
    BinaryHeader(BinaryHeader const&);
    BinaryHeader();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool hasMagicNumber(::gsl::span<const uchar>);
#else // @header-generator platform
    MCNAPI static bool hasMagicNumber(::gsl::span<uchar const> data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool hasMagicNumber(std::string_view);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAGIC_NUMBER();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI static bool write(::BinaryStream& stream, ::Bedrock::Resources::BinaryHeader const& header);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Resources
