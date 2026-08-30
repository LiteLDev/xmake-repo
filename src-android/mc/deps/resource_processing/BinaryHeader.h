#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/BinaryHeaderSemVersion.h"
#include "mc/deps/resource_processing/category/ResourceCategory.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
namespace Puv { class Logger; }
// clang-format on

namespace Bedrock::Resources {

struct BinaryHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                      mVersion;
    ::ll::TypedStorage<2, 2, ::Bedrock::Resources::ResourceCategory> mCategory;
    ::ll::TypedStorage<8, 8, ulong>                                  mSize;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool hasMagicNumber(::gsl::span<const uchar>);

    MCNAPI static bool hasMagicNumber(std::string_view);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAGIC_NUMBER();
    // NOLINTEND
};

} // namespace Bedrock::Resources
