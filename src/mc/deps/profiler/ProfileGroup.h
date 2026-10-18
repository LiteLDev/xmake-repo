#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ProfileCategory.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiler::details { struct Category; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Core::Profile {

#if defined(LL_PLAT_A) // @header-generator platform
class ProfileGroup : public ::Core::Profile::ProfileCategory {
public:
    // prevent constructor by default
    ProfileGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getName_Legacy() const;
    // NOLINTEND
};
#else // @header-generator platform
class ProfileGroup : public ::Core::Profile::ProfileCategory {};
#endif // @header-generator platform

} // namespace Core::Profile
