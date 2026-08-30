#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiler::details { struct Category; }
// clang-format on

namespace Core::Profile {

class ProfileCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::Profiler::details::Category const&> mCategory;
    ::ll::TypedStorage<8, 24, std::string const>                            mNameOverrideWorkaround;
    ::ll::TypedStorage<4, 4, uint const>                                    mColor;
    ::ll::TypedStorage<1, 1, std::atomic<uchar>>                            mEnabledFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileCategory& operator=(ProfileCategory const&);
    ProfileCategory(ProfileCategory const&);
    ProfileCategory();
};

} // namespace Core::Profile
