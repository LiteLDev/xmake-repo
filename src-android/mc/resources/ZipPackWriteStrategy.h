#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackWriteStrategy.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
// clang-format on

class ZipPackWriteStrategy : public ::PackWriteStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation const> mArchiveLocation;
    ::ll::UntypedStorage<1, 24>                         mScratchPath;
    ::ll::UntypedStorage<8, 24>                         mArchiveFileAccess;
    ::ll::UntypedStorage<8, 24>                         mRawFileAccess;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipPackWriteStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ZipPackWriteStrategy();

    virtual void writeAsset(::PackWriteStrategy::FileName, std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZipPackWriteStrategy(
        ::ResourceLocation const&,
        ::Core::Path const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&,
        ::Core::Path const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $writeAsset(::PackWriteStrategy::FileName, std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
