#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ListTag;
// clang-format on

class CloudSaveLevelInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDriveItemId;
    ::ll::TypedStorage<8, 24, std::string> mCTag;
    ::ll::TypedStorage<8, 24, std::string> mUserId;
    ::ll::TypedStorage<8, 24, std::string> mFileName;
    ::ll::TypedStorage<1, 1, bool>         mNeedsUpload;
    ::ll::TypedStorage<8, 24, std::string> mLastUpdated;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudSaveLevelInfo(CloudSaveLevelInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CloudSaveLevelInfo();

    MCNAPI explicit CloudSaveLevelInfo(::CompoundTag const&);

    MCNAPI CloudSaveLevelInfo(std::string, std::string, std::string, std::string, std::string, bool);

    MCNAPI std::string const& cTag() const;

    MCNAPI std::string const& fileName() const;

    MCNAPI bool const hasInfo() const;

    MCNAPI std::string const& lastUpdated() const;

    MCNAPI bool const& needsUpload() const;

    MCNAPI bool operator!=(::CloudSaveLevelInfo const&) const;

    MCNAPI bool operator==(::CloudSaveLevelInfo const&) const;

    MCNAPI void serialize(::CompoundTag&) const;

    MCNAPI void setCloudFileName(std::string const&);

    MCNAPI void setNeedsUpload(bool const&);

    MCNAPI std::string const& userId() const;

    MCNAPI ~CloudSaveLevelInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::CompoundTag const&);

    MCNAPI void* $ctor(std::string, std::string, std::string, std::string, std::string, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
