#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiler::details { struct Category; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Core::Profile {

class ProfileCategory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::Profiler::details::Category const&> mCategory;
    ::ll::TypedStorage<8, 24, std::string const>                            mNameOverrideWorkaround;
    ::ll::TypedStorage<4, 4, uint const>                                    mColor;
    ::ll::TypedStorage<1, 1, std::atomic<uchar>>                            mEnabledFlags;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkc16f78;
    ::ll::UntypedStorage<8, 32> mUnkf11df5;
    ::ll::UntypedStorage<4, 4>  mUnka1683b;
    ::ll::UntypedStorage<1, 1>  mUnkad8ed1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileCategory& operator=(ProfileCategory const&);
    ProfileCategory(ProfileCategory const&);
    ProfileCategory();
};

} // namespace Core::Profile
