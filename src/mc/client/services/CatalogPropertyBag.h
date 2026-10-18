#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/PropertyBag.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CatalogPropertyBag : public ::PropertyBag {
public:
    // prevent constructor by default
    CatalogPropertyBag& operator=(CatalogPropertyBag const&);
    CatalogPropertyBag(CatalogPropertyBag const&);
};
#else // @header-generator platform
class CatalogPropertyBag {};
#endif // @header-generator platform
