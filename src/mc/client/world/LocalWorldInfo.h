#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/WorldInfo.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/LevelSummary.h"

struct LocalWorldInfo : public ::WorldInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mScreenshotTexture;
    ::ll::TypedStorage<8, 8, ulong>        mFileSize;
    ::ll::TypedStorage<8, 24, std::string> mFilesizeAsString;
    ::ll::TypedStorage<8, 24, std::string> mWorldName;
    ::ll::TypedStorage<8, 24, std::string> mDate;
    ::ll::TypedStorage<4, 4, ::GameType>   mGameType;
    ::ll::TypedStorage<8, 24, std::string> mGameTypeString;
    ::ll::TypedStorage<1, 1, bool>         mLocalStorage;
    ::ll::TypedStorage<1, 1, bool>         mCloudStorage;
    ::ll::TypedStorage<1, 1, bool>         mIsDirty;
    ::ll::UntypedStorage<8, 696>           mLevelSummary;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldInfo& operator=(LocalWorldInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LocalWorldInfo();

    MCNAPI explicit LocalWorldInfo(::LevelSummary const&);

    MCNAPI LocalWorldInfo(::LocalWorldInfo const&);

    MCNAPI std::string const& getDate() const;

    MCNAPI ulong getFileSize() const;

    MCNAPI std::string const& getFilesizeAsString() const;

    MCNAPI ::GameType getGameType() const;

    MCNAPI std::string const& getGameTypeString() const;

    MCNAPI ::LevelSummary const& getLevelSummary() const;

    MCNAPI ::LevelSummary& getLevelSummary();

    MCNAPI ::Core::PathBuffer<std::string> const& getWorldIconPath() const;

    MCNAPI std::string const& getWorldName() const;

    MCNAPI bool hasCloudStorage() const;

    MCNAPI bool hasDate() const;

    MCNAPI bool hasLocalStorage() const;

    MCNAPI bool isBetaRetailSave() const;

    MCNAPI bool isDirty() const;

    MCNAPI void markAsDirty();

    MCNAPI ~LocalWorldInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::LevelSummary const&);

    MCNAPI void* $ctor(::LocalWorldInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct LocalWorldInfo {};
#endif // @header-generator platform
