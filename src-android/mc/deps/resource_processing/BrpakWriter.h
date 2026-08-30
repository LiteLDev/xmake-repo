#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct zip;
namespace Core { class PathView; }
// clang-format on

namespace Bedrock::Resources {

class BrpakWriter {
public:
    // BrpakWriter inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // BrpakWriter inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>        mName;
        ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Resources::BrpakWriter::Entry>> mEntries;
    // NOLINTEND
};

} // namespace Bedrock::Resources
