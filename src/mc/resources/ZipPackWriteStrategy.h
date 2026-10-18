#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackWriteStrategy.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ResourceLocation;
namespace Core { class Path; }
#endif // @header-generator platform
// clang-format on

class ZipPackWriteStrategy : public ::PackWriteStrategy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::ResourceLocation const> mArchiveLocation;
    ::ll::UntypedStorage<1, 24>                         mScratchPath;
    ::ll::UntypedStorage<8, 24>                         mArchiveFileAccess;
    ::ll::UntypedStorage<8, 24>                         mRawFileAccess;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 56> mUnk1c095a;
    ::ll::UntypedStorage<8, 32> mUnkcc445b;
    ::ll::UntypedStorage<8, 24> mUnk40cbc3;
    ::ll::UntypedStorage<8, 24> mUnk5f9f34;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ZipPackWriteStrategy& operator=(ZipPackWriteStrategy const&);
    ZipPackWriteStrategy(ZipPackWriteStrategy const&);
#endif // @header-generator platform
    ZipPackWriteStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ZipPackWriteStrategy();

    virtual void writeAsset(::PackWriteStrategy::FileName, std::string const&);
#else // @header-generator platform
    virtual void writeAsset(::PackWriteStrategy::FileName path, ::std::string const& fileContent) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZipPackWriteStrategy(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ResourceLocation const&,
        ::Core::Path const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>
#else // @header-generator platform
        ::ResourceLocation const&                    archiveLocation,
        ::Core::Path const&                          scratchPath,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> archiveFileAccess,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> rawFileAccess
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ResourceLocation const&,
        ::Core::Path const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>
#else // @header-generator platform
        ::ResourceLocation const&                    archiveLocation,
        ::Core::Path const&                          scratchPath,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> archiveFileAccess,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> rawFileAccess
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeAsset(::PackWriteStrategy::FileName, std::string const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $writeAsset(::PackWriteStrategy::FileName path, ::std::string const& fileContent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
