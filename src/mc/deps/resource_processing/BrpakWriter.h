#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct zip;
namespace Core { class PathView; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>        mName;
        ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk658377;
        ::ll::UntypedStorage<8, 24> mUnk4e6ce9;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::Resources::BrpakWriter::Entry>> mEntries;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk2f031e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BrpakWriter& operator=(BrpakWriter const&);
    BrpakWriter(BrpakWriter const&);
    BrpakWriter();
#endif // @header-generator platform
};

} // namespace Bedrock::Resources
