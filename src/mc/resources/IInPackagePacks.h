#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class IInPackagePacks {
public:
    // IInPackagePacks inner types declare
    // clang-format off
    struct MetaData;
    // clang-format on

    // IInPackagePacks inner types define
    struct MetaData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>                    mPath;
        ::ll::TypedStorage<1, 1, bool>                 mIsHidden;
        ::ll::TypedStorage<4, 4, ::PackCategory>       mPackCategory;
        ::ll::TypedStorage<4, 4, ::ResourceFileSystem> mFileSystem;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mPath;
        ::ll::TypedStorage<1, 1, bool>                               mIsHidden;
        ::ll::TypedStorage<4, 4, ::PackCategory>                     mPackCategory;
        ::ll::TypedStorage<4, 4, ::ResourceFileSystem>               mFileSystem;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        MetaData& operator=(MetaData const&);
        MetaData(MetaData const&);
#else // @header-generator platform
#endif // @header-generator platform
        MetaData();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI MetaData(::Core::Path const&, bool const, ::PackCategory);
#else // @header-generator platform
        MCAPI MetaData(::Core::Path const& path, bool isHidden, ::PackCategory packCategory);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::Core::Path const&, bool const, ::PackCategory);
#else // @header-generator platform
        MCAPI void* $ctor(::Core::Path const& path, bool isHidden, ::PackCategory packCategory);
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IInPackagePacks();
#else // @header-generator platform
    virtual ~IInPackagePacks() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<IInPackagePacks::MetaData> getPacks(::PackType) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::vector<::IInPackagePacks::MetaData> getPacks(::PackType packType) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
