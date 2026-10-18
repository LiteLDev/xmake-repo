#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 32, ::std::string>        mSourceFilePathWithExtension;
    ::ll::TypedStorage<8, 48, ::HashedString>       mParentName;
    ::ll::TypedStorage<8, 24, ::JsonValueHierarchy> mJson;
    ::ll::TypedStorage<1, 1, bool>                  mIsFromBaseGamePack;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelParent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ModelParent(
        ::HashedString const&     parentName,
        ::Json::Value&            value,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      sourceFilePathWithExtension,
        bool                      isFromBaseGamePack
    );

    MCAPI ~ModelParent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::HashedString const&     parentName,
        ::Json::Value&            value,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      sourceFilePathWithExtension,
        bool                      isFromBaseGamePack
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ModelParent {};
#endif // @header-generator platform
#endif // @header-generator platform
