#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
struct BannerCta {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mText;
    ::ll::UntypedStorage<8, 48> mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerCta& operator=(BannerCta const&);
    BannerCta(BannerCta const&);
    BannerCta();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BannerCta {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mText;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mCallback;
    // NOLINTEND
};
#else // @header-generator platform
struct BannerCta {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
