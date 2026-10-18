#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/secure_storage/SecureStorage.h"

// auto generated forward declare list
// clang-format off
class ISecureStorageKeySystem;
class SecureStorageKey;
namespace Core { class Path; }
namespace Core { class PathView; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Crypto::Hash { class HMAC; }
namespace Crypto::Symmetric { class Symmetric; }
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        StorageSystem& operator=(StorageSystem const&);
        StorageSystem();

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool getData(std::string&, ::Core::Path);
#else // @header-generator platform
        virtual bool getData(::std::string& output, ::Core::Path path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~StorageSystem();
#else // @header-generator platform
        virtual void setData(::std::string const& data, ::Core::Path path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void setData(std::string const&, ::Core::Path);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual ~StorageSystem() = default;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $getData(std::string&, ::Core::Path);
#else // @header-generator platform
        MCNAPI bool $getData(::std::string& output, ::Core::Path path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $setData(std::string const&, ::Core::Path);
        // NOLINTEND
#else // @header-generator platform
        MCNAPI void $setData(::std::string const& data, ::Core::Path path);
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

    class FileStorageSystem : public ::FileSecureStorage::StorageSystem {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 40, std::mutex> mFileMutex;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 80> mUnkabc774;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        FileStorageSystem& operator=(FileStorageSystem const&);
        FileStorageSystem(FileStorageSystem const&);
        FileStorageSystem();
#endif // @header-generator platform

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool getData(std::string&, ::Core::Path);
#else // @header-generator platform
        virtual bool getData(::std::string& output, ::Core::Path path) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~FileStorageSystem();

        virtual void setData(std::string const&, ::Core::Path);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual void setData(::std::string const& data, ::Core::Path path) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $getData(std::string&, ::Core::Path);
#else // @header-generator platform
        MCNAPI bool $getData(::std::string& output, ::Core::Path path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $setData(std::string const&, ::Core::Path);
        // NOLINTEND
#else // @header-generator platform
        MCNAPI void $setData(::std::string const& data, ::Core::Path path);
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

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk3dbac1;
    ::ll::UntypedStorage<8, 16> mUnk8a969d;
    ::ll::UntypedStorage<8, 8>  mUnk7832e5;
    ::ll::UntypedStorage<8, 64> mUnkd32604;
    ::ll::UntypedStorage<8, 64> mUnk356a0f;
    ::ll::UntypedStorage<8, 8>  mUnkf95aee;
    ::ll::UntypedStorage<8, 8>  mUnke454b5;
    ::ll::UntypedStorage<8, 8>  mUnk2e3cf8;
    ::ll::UntypedStorage<8, 8>  mUnk2b701a;
    ::ll::UntypedStorage<8, 32> mUnkebdbd6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileSecureStorage& operator=(FileSecureStorage const&);
    FileSecureStorage(FileSecureStorage const&);
#endif // @header-generator platform
    FileSecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FileSecureStorage();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~FileSecureStorage() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~FileSecureStorage() /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool add(std::string const&, std::string const&);
#else // @header-generator platform
    virtual bool add(::std::string const& key, ::std::string const& value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addOrUpdate(std::string const&, std::string const&);
#else // @header-generator platform
    virtual bool addOrUpdate(::std::string const& key, ::std::string const& value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool remove(std::string const&);
#else // @header-generator platform
    virtual bool remove(::std::string const& key) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool get(std::string const&, std::string&);
#else // @header-generator platform
    virtual bool get(::std::string const& key, ::std::string& outValue) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileSecureStorage(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::PathView,
        ::Core::PathView,
        ::ISecureStorageKeySystem*,
        ::Core::PathView,
        ::FileSecureStorage::StorageSystem*
#else // @header-generator platform
        ::Core::PathView                    settingsPath,
        ::Core::PathView                    baseSettingsPath,
        ::ISecureStorageKeySystem*          sskSystem,
        ::Core::PathView                    userDataPath,
        ::FileSecureStorage::StorageSystem* storage
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _contentKeyObfuscator(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI ::std::string _contentKeyObfuscator(::std::string const& codedData, ::std::string const& identifier);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _init(bool);
#else // @header-generator platform
    MCNAPI ::SecureStorageKey _getSecureStorageKey() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initalizeSymmetricEncyrption(std::string&, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool _init(bool expectedFailure);
#endif

#ifdef LL_PLAT_S
    MCNAPI bool _init(bool expectedFailure);
#endif

    MCNAPI void _initalizeSymmetricEncyrption(::std::string& symmetricKey, bool force);
#endif // @header-generator platform

    MCNAPI void _rebuildSecureStorageFile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::PathView,
        ::Core::PathView,
        ::ISecureStorageKeySystem*,
        ::Core::PathView,
        ::FileSecureStorage::StorageSystem*
#else // @header-generator platform
        ::Core::PathView                    settingsPath,
        ::Core::PathView                    baseSettingsPath,
        ::ISecureStorageKeySystem*          sskSystem,
        ::Core::PathView                    userDataPath,
        ::FileSecureStorage::StorageSystem* storage
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $add(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI bool $add(::std::string const& key, ::std::string const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $addOrUpdate(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI bool $addOrUpdate(::std::string const& key, ::std::string const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $remove(std::string const&);
#else // @header-generator platform
    MCNAPI bool $remove(::std::string const& key);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $get(std::string const&, std::string&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI bool $get(::std::string const& key, ::std::string& outValue);
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
