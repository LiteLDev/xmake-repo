#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct Item {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> id;
    ::ll::TypedStorage<8, 8, ulong>        aux;
    ::ll::TypedStorage<8, 24, std::string> name;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk952229;
    ::ll::UntypedStorage<8, 8>  mUnk28281b;
    ::ll::UntypedStorage<8, 32> mUnkd27194;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Item& operator=(Item const&);
    Item(Item const&);
    Item();
#endif // @header-generator platform
};

} // namespace CodeBuilder
