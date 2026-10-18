#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class PropertyBag;
// clang-format on

struct PaperDollUpdateOwnerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PropertyBag&> mOwnerBag;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollUpdateOwnerData& operator=(PaperDollUpdateOwnerData const&);
    PaperDollUpdateOwnerData(PaperDollUpdateOwnerData const&);
    PaperDollUpdateOwnerData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class PropertyBag;
// clang-format on

struct PaperDollUpdateOwnerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PropertyBag&> mOwnerBag;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollUpdateOwnerData& operator=(PaperDollUpdateOwnerData const&);
    PaperDollUpdateOwnerData(PaperDollUpdateOwnerData const&);
    PaperDollUpdateOwnerData();
};
#else // @header-generator platform
struct PaperDollUpdateOwnerData {};
#endif // @header-generator platform
#endif // @header-generator platform
