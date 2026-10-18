#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class ListTag;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CloudSaveLevelInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDriveItemId;
    ::ll::TypedStorage<8, 24, std::string> mCTag;
    ::ll::TypedStorage<8, 24, std::string> mUserId;
    ::ll::TypedStorage<8, 24, std::string> mFileName;
    ::ll::TypedStorage<1, 1, bool>         mNeedsUpload;
    ::ll::TypedStorage<8, 24, std::string> mLastUpdated;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mDriveItemId;
    ::ll::TypedStorage<8, 32, ::std::string> mCTag;
    ::ll::TypedStorage<8, 32, ::std::string> mUserId;
    ::ll::TypedStorage<8, 32, ::std::string> mFileName;
    ::ll::TypedStorage<1, 1, bool>           mNeedsUpload;
    ::ll::TypedStorage<8, 32, ::std::string> mLastUpdated;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    CloudSaveLevelInfo(CloudSaveLevelInfo const&);
#else // @header-generator platform
    CloudSaveLevelInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CloudSaveLevelInfo();
#else // @header-generator platform
    MCAPI CloudSaveLevelInfo(::CloudSaveLevelInfo const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CloudSaveLevelInfo(::CompoundTag const&);
#else // @header-generator platform
    MCAPI explicit CloudSaveLevelInfo(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CloudSaveLevelInfo(std::string, std::string, std::string, std::string, std::string, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI CloudSaveLevelInfo(
        ::std::string driveItemId,
        ::std::string cTag,
        ::std::string userId,
        ::std::string filename,
        ::std::string lastUpdated,
        bool          needsUpload
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& cTag() const;
#else // @header-generator platform
    MCAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& fileName() const;
#else // @header-generator platform
    MCAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool const hasInfo() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool operator==(::CloudSaveLevelInfo const& other) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& lastUpdated() const;
#else // @header-generator platform
    MCAPI void serialize(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool const& needsUpload() const;

    MCNAPI bool operator!=(::CloudSaveLevelInfo const&) const;

    MCNAPI bool operator==(::CloudSaveLevelInfo const&) const;

    MCNAPI void serialize(::CompoundTag&) const;

    MCNAPI void setCloudFileName(std::string const&);

    MCNAPI void setNeedsUpload(bool const&);

    MCNAPI std::string const& userId() const;

    MCNAPI ~CloudSaveLevelInfo();
#else // @header-generator platform
    MCAPI ~CloudSaveLevelInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::CloudSaveLevelInfo const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void* $ctor(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::string, std::string, std::string, std::string, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::string driveItemId,
        ::std::string cTag,
        ::std::string userId,
        ::std::string filename,
        ::std::string lastUpdated,
        bool          needsUpload
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
