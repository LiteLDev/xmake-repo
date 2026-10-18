#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/RemovedInMajorVersion.h"
#include "mc/deps/script_core/scripting/Version.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, char const* const*>                              bindingName;
        ::ll::TypedStorage<8, 32, ::Scripting::Version>                           releaseVersion;
        ::ll::TypedStorage<2, 4, std::optional<Scripting::RemovedInMajorVersion>> exclusiveMajorVersionLimit;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk2ba44f;
        ::ll::UntypedStorage<8, 40> mUnkc74d57;
        ::ll::UntypedStorage<2, 4>  mUnk8e89de;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        ReleaseDetails& operator=(ReleaseDetails const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ReleaseDetails(ReleaseDetails const&);
#endif // @header-generator platform
        ReleaseDetails();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ReleaseDetails();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ScriptBindingReleaseList::ReleaseDetails> const> mReleaseList;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk176779;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptBindingReleaseList& operator=(ScriptBindingReleaseList const&);
    ScriptBindingReleaseList(ScriptBindingReleaseList const&);
#endif // @header-generator platform
    ScriptBindingReleaseList();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
