#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class JsonFileIO {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mFilePath;
    ::ll::UntypedStorage<4, 24>    mSaveDelay;
    ::ll::UntypedStorage<8, 16>    mJsonBlob;
    ::ll::TypedStorage<1, 1, bool> mSaveOnExit;
    ::ll::TypedStorage<1, 1, bool> mIsBlobDirty;
    ::ll::TypedStorage<1, 1, bool> mIsLoaded;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonFileIO();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JsonFileIO();

    virtual void _readJsonBlobFromFile();

    virtual void _writeJsonBlobToFile(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string _getJsonBlobAsString();

    MCNAPI void _save();

    MCNAPI bool forceSaveIfDirty();

    MCNAPI ::Json::Value const& getConstJsonBlob() const;

    MCNAPI ::Json::Value& getJsonBlob();

    MCNAPI void load();

    MCNAPI bool update();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_readJsonBlobFromFile();

    MCNAPI void $_writeJsonBlobToFile(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
