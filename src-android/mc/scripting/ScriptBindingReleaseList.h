#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/RemovedInMajorVersion.h"
#include "mc/deps/script_core/scripting/Version.h"

class ScriptBindingReleaseList {
public:
    // ScriptBindingReleaseList inner types declare
    // clang-format off
    struct ReleaseDetails;
    // clang-format on

    // ScriptBindingReleaseList inner types define
    struct ReleaseDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char const* const*>                              bindingName;
        ::ll::TypedStorage<8, 32, ::Scripting::Version>                           releaseVersion;
        ::ll::TypedStorage<2, 4, std::optional<Scripting::RemovedInMajorVersion>> exclusiveMajorVersionLimit;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReleaseDetails& operator=(ReleaseDetails const&);
        ReleaseDetails();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptBindingReleaseList::ReleaseDetails> const> mReleaseList;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBindingReleaseList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptBindingReleaseList(std::vector<ScriptBindingReleaseList::ReleaseDetails>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<ScriptBindingReleaseList::ReleaseDetails>);
    // NOLINTEND
};
