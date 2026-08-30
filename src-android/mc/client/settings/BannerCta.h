#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

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

} // namespace Settings
