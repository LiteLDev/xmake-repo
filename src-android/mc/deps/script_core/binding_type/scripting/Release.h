#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/Comparison.h"
#include "mc/deps/script_core/binding_type/scripting/RemovedInMajorVersion.h"
#include "mc/deps/script_core/scripting/Version.h"

namespace Scripting {

class Release {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Scripting::Comparison>                         comparison;
    ::ll::TypedStorage<8, 32, ::Scripting::Version>                           version;
    ::ll::TypedStorage<2, 4, std::optional<Scripting::RemovedInMajorVersion>> exclusiveMajorVersionLimit;
    // NOLINTEND

public:
    // prevent constructor by default
    Release();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool satisfies(::Scripting::Version const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& PRE_RELEASE_TAG_ALPHA();

    MCNAPI static std::string_view const& PRE_RELEASE_TAG_BETA();

    MCNAPI static std::string_view const& PRE_RELEASE_TAG_INTERNAL();
    // NOLINTEND
};

} // namespace Scripting
