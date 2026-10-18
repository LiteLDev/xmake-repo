#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class AllowListPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mID;
    ::ll::TypedStorage<8, 24, std::string> mURL;
    ::ll::UntypedStorage<1, 24>            mResourcePath;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListPath(AllowListPath const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AllowListPath();

    MCNAPI char const* resourcePath() const;

    MCNAPI std::string const& url() const;

    MCNAPI ~AllowListPath();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::AllowListPath const& empty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class AllowListPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mID;
    ::ll::TypedStorage<8, 32, ::std::string> mURL;
    ::ll::TypedStorage<8, 32, ::Core::Path>  mResourcePath;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListPath();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AllowListPath(::OreUI::AllowListPath const&);

    MCAPI AllowListPath(::std::string id, ::Core::Path path);

    MCFOLD ::OreUI::AllowListPath& operator=(::OreUI::AllowListPath&&);

    MCFOLD ::OreUI::AllowListPath& operator=(::OreUI::AllowListPath const&);

    MCAPI ~AllowListPath();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::OreUI::AllowListPath const& empty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::OreUI::AllowListPath const&);

    MCAPI void* $ctor(::std::string id, ::Core::Path path);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class AllowListPath {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
