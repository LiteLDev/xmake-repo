#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ProfileCategory.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiler::details { struct Category; }
// clang-format on

namespace Core::Profile {

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

} // namespace Core::Profile
