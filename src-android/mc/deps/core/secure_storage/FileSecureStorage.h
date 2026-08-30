#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/secure_storage/SecureStorage.h"

// auto generated forward declare list
// clang-format off
class ISecureStorageKeySystem;
class SecureStorageKey;
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Crypto::Hash { class HMAC; }
namespace Crypto::Symmetric { class Symmetric; }
namespace Json { class Value; }
// clang-format on

class FileSecureStorage : public ::SecureStorage {
public:
    // FileSecureStorage inner types declare
    // clang-format off
    class StorageSystem;
    class FileStorageSystem;
    // clang-format on

    // FileSecureStorage inner types define
    class StorageSystem {
    public:
        // prevent constructor by default
        StorageSystem& operator=(StorageSystem const&);
        StorageSystem();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool getData(std::string&, ::Core::Path);

        virtual ~StorageSystem();

        virtual void setData(std::string const&, ::Core::Path);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $getData(std::string&, ::Core::Path);

        MCNAPI void $setData(std::string const&, ::Core::Path);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class FileStorageSystem : public ::FileSecureStorage::StorageSystem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 40, std::mutex> mFileMutex;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool getData(std::string&, ::Core::Path);

        virtual ~FileStorageSystem();

        virtual void setData(std::string const&, ::Core::Path);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $getData(std::string&, ::Core::Path);

        MCNAPI void $setData(std::string const&, ::Core::Path);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                              mInitialized;
    ::ll::UntypedStorage<8, 16>                                                 mJsonValue;
    ::ll::UntypedStorage<1, 152>                                                mJsonMutex;
    ::ll::UntypedStorage<8, 48>                                                 mFuncGetSecureStorageKey;
    ::ll::UntypedStorage<8, 48>                                                 mFuncSetSecureStorageKey;
    ::ll::TypedStorage<8, 8, ::ISecureStorageKeySystem*>                        mSSKSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Symmetric::Symmetric>>     mSSLInterface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Hash::HMAC>>               mHash;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FileSecureStorage::StorageSystem>> mFileStorage;
    ::ll::UntypedStorage<8, 32>                                                 mSecureFilePath;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileSecureStorage();

    virtual bool add(std::string const&, std::string const&);

    virtual bool addOrUpdate(std::string const&, std::string const&);

    virtual bool remove(std::string const&);

    virtual bool get(std::string const&, std::string&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileSecureStorage(
        ::Core::PathView,
        ::Core::PathView,
        ::ISecureStorageKeySystem*,
        ::Core::PathView,
        ::FileSecureStorage::StorageSystem*
    );

    MCNAPI std::string _contentKeyObfuscator(std::string const&, std::string const&);

    MCNAPI bool _init(bool);

    MCNAPI void _initalizeSymmetricEncyrption(std::string&, bool);

    MCNAPI void _rebuildSecureStorageFile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::PathView,
        ::Core::PathView,
        ::ISecureStorageKeySystem*,
        ::Core::PathView,
        ::FileSecureStorage::StorageSystem*
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
    MCNAPI bool $add(std::string const&, std::string const&);

    MCNAPI bool $addOrUpdate(std::string const&, std::string const&);

    MCNAPI bool $remove(std::string const&);

    MCNAPI bool $get(std::string const&, std::string&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
