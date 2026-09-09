#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/JsonValueHierarchy.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

struct ModelParent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>          mSourceFilePathWithExtension;
    ::ll::TypedStorage<8, 40, ::HashedString>       mParentName;
    ::ll::TypedStorage<8, 24, ::JsonValueHierarchy> mJson;
    ::ll::TypedStorage<1, 1, bool>                  mIsFromBaseGamePack;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelParent(ModelParent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ModelParent(
        ::HashedString const&,
        ::Json::Value&,
        ::SemVersion const&,
        ::MinEngineVersion const&,
        std::string const&,
        bool
    );

    MCNAPI ~ModelParent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::HashedString const&,
        ::Json::Value&,
        ::SemVersion const&,
        ::MinEngineVersion const&,
        std::string const&,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
