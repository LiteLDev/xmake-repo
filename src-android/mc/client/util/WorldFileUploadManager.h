#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/FileUploadManager.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class IContentAccessibilityProvider;
class IFileChunkUploader;
class ILevelListCache;
class LevelDbEnv;
class TaskGroup;
namespace Core { class Path; }
// clang-format on

class WorldFileUploadManager : public ::FileUploadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                  mTempPathRoot;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&> mLevelListCache;
    ::ll::UntypedStorage<8, 24>                  mAccessibilityProvider;
    ::ll::UntypedStorage<8, 24>                  mLevelDbEnv;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldFileUploadManager& operator=(WorldFileUploadManager const&);
    WorldFileUploadManager(WorldFileUploadManager const&);
    WorldFileUploadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldFileUploadManager();

    virtual float getUploadProgress() const;

    virtual void archiveAndUploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const, std::string const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldFileUploadManager(
        ::TaskGroup&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> const&,
        std::shared_ptr<IFileChunkUploader>,
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentAccessibilityProvider>> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::TaskGroup&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> const&,
        std::shared_ptr<IFileChunkUploader>,
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentAccessibilityProvider>> const&
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
    MCNAPI float $getUploadProgress() const;

    MCNAPI void
    $archiveAndUploadFileToRealmStorage(std::string const&, ::Core::Path const&, int const, std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
