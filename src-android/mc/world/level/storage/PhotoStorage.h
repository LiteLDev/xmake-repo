#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
struct PhotoStorageContainer;
namespace Core { class Path; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

class PhotoStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mBaseDir;
    ::ll::UntypedStorage<8, 24>                                mBookDir;
    ::ll::UntypedStorage<8, 24>                                mPhotoDir;
    ::ll::UntypedStorage<8, 24>                                mPhotoItemDir;
    ::ll::UntypedStorage<8, 24>                                mManifestDir;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mChecksums;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PhotoStorage(::Core::Path const&);

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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& BOOKS_DIR();

    MCNAPI static std::string const& MANIFEST_NAME();

    MCNAPI static std::string const& PHOTOITEM_DIR();

    MCNAPI static std::string const& PHOTO_DIR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&);
    // NOLINTEND
};
