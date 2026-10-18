#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/content_binary/Type.h"
#include "mc/client/services/download/DlcHydrationInfo.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace catalog {

#if defined(LL_PLAT_A) // @header-generator platform
struct HydrationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mProductId;
    ::ll::TypedStorage<1, 1, ::ContentBinary::Type const> mBinaryType;
    ::ll::TypedStorage<8, 104, ::DlcHydrationInfo>        mHydrationInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    HydrationInfo& operator=(HydrationInfo const&);
    HydrationInfo(HydrationInfo const&);
    HydrationInfo();
};
#else // @header-generator platform
struct HydrationInfo {};
#endif // @header-generator platform

} // namespace catalog
