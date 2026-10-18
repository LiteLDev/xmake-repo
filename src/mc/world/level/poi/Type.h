#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/poi/TypeId.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace Poi { class TagProvider; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Poi {

struct Type {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                      mName;
    ::ll::TypedStorage<8, 40, std::unordered_set<const Block*>> mBlocks;
    ::ll::TypedStorage<8, 8, ::Poi::TagProvider const*>         mTagProvider;
    ::ll::TypedStorage<2, 2, ::Poi::TypeId>                     mId;
    ::ll::TypedStorage<1, 1, uchar>                             mTickets;
    ::ll::TypedStorage<1, 1, uchar>                             mUsableRange;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk984de2;
    ::ll::UntypedStorage<8, 64> mUnk22d4eb;
    ::ll::UntypedStorage<8, 8>  mUnkccdce2;
    ::ll::UntypedStorage<2, 2>  mUnk3e0c48;
    ::ll::UntypedStorage<1, 1>  mUnk913a92;
    ::ll::UntypedStorage<1, 1>  mUnk1646f7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Type& operator=(Type const&);
    Type(Type const&);
    Type();
#endif // @header-generator platform
};

} // namespace Poi
