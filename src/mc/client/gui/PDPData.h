#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/PDPSectionType.h"

// auto generated forward declare list
// clang-format off
class PDPSection;
class StoreCatalogItem;
// clang-format on

struct PDPData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                                       item;
    ::ll::TypedStorage<8, 24, std::map<PDPSectionType, std::unique_ptr<PDPSection>>> sections;
    // NOLINTEND

public:
    // prevent constructor by default
    PDPData& operator=(PDPData const&);
    PDPData(PDPData const&);
    PDPData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/PDPSectionType.h"

// auto generated forward declare list
// clang-format off
class PDPSection;
class StoreCatalogItem;
// clang-format on

struct PDPData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StoreCatalogItem&>                                            item;
    ::ll::TypedStorage<8, 16, ::std::map<::PDPSectionType, ::std::unique_ptr<::PDPSection>>> sections;
    // NOLINTEND

public:
    // prevent constructor by default
    PDPData& operator=(PDPData const&);
    PDPData(PDPData const&);
    PDPData();
};
#else // @header-generator platform
struct PDPData {};
#endif // @header-generator platform
#endif // @header-generator platform
