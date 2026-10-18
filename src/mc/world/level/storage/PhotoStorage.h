#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
struct PhotoStorageContainer;
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PhotoStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                mBaseDir;
    ::ll::UntypedStorage<8, 24>                                mBookDir;
    ::ll::UntypedStorage<8, 24>                                mPhotoDir;
    ::ll::UntypedStorage<8, 24>                                mPhotoItemDir;
    ::ll::UntypedStorage<8, 24>                                mManifestDir;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mChecksums;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>   mBaseDir;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>   mBookDir;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>   mPhotoDir;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>   mPhotoItemDir;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>   mManifestDir;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mChecksums;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoStorage();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PhotoStorage(::Core::Path const&);
#else // @header-generator platform
    MCAPI explicit PhotoStorage(::Core::Path const& baseDir);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _addValidFile(::Core::Path);

    MCNAPI ::Core::PathBuffer<std::string> getBookPath(std::string const&);

    MCNAPI void getLoosePhotos(::Player&, std::vector<Core::PathBuffer<std::string>>&);

    MCNAPI ::Core::PathBuffer<std::string> getPath(::PhotoStorageContainer const&);

    MCNAPI void getPhoto(::PhotoStorageContainer const&, std::string const&, std::string&);

    MCNAPI ::Core::PathBuffer<std::string> const& getPhotoItemPath();

    MCNAPI ::Core::PathBuffer<std::string> getPhotoPath(::Actor const&) const;

    MCNAPI ::Core::PathBuffer<std::string> getPhotoPathRelative(::Actor&);

    MCNAPI bool isValidPhoto(::PhotoStorageContainer const&, std::string const&);

    MCNAPI void setValidLoosePhoto(::PhotoStorageContainer const&, std::string const&);

    MCNAPI void storePhoto(::PhotoStorageContainer const&, std::string const&, std::string const&);

    MCNAPI ::Core::PathBuffer<Core::BasicStackString<char, 1024>>
    storePhotoFront(::Player&, ::PhotoStorageContainer const&, std::string const&, std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> getScreenshotFilename();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _addValidFile(::Core::Path path);

    MCAPI bool _isValidFile(::Core::Path file);

    MCAPI void getLoosePhotos(::Player& owner, ::std::vector<::Core::PathBuffer<::std::string>>& result);

    MCAPI ::Core::PathBuffer<::std::string> getPath(::PhotoStorageContainer const& container);

    MCAPI void
    getPhoto(::PhotoStorageContainer const& container, ::std::string const& photoName, ::std::string& resultData);

    MCAPI ::Core::PathBuffer<::std::string> getPhotoPath(::Actor const& owner) const;

    MCAPI ::Core::PathBuffer<::std::string> getPhotoPathRelative(::Actor& owner);

    MCAPI bool isValidPhoto(::PhotoStorageContainer const& container, ::std::string const& photoName);

    MCAPI void setValidLoosePhoto(::PhotoStorageContainer const& container, ::std::string const& photoName);

    MCAPI void storePhoto(
        ::PhotoStorageContainer const& container,
        ::std::string const&           photoName,
        ::std::string const&           photoData
    );

    MCAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> storePhotoFront(
        ::Player&                      owner,
        ::PhotoStorageContainer const& container,
        ::std::string const&           photoName,
        ::std::string const&           photoData
    );

    MCAPI ~PhotoStorage();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BOOKS_DIR();
#else // @header-generator platform
    MCAPI static ::std::string const& BOOKS_DIR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& MANIFEST_NAME();
#else // @header-generator platform
    MCAPI static ::std::string const& MANIFEST_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PHOTOITEM_DIR();
#else // @header-generator platform
    MCAPI static ::std::string const& PHOTOITEM_DIR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PHOTO_DIR();
#else // @header-generator platform
    MCAPI static ::std::string const& PHOTO_DIR();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::Path const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Core::Path const& baseDir);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
