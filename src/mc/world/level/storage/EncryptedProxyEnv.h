#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/EncryptedProxyReadMode.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class EncryptedProxyEnv : public ::leveldb::EnvWrapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::leveldb::Env*>          mTarget;
    ::ll::TypedStorage<8, 24, std::string const>       mContentKey;
    ::ll::TypedStorage<8, 24, std::string const>       mProductId;
    ::ll::TypedStorage<1, 1, ::EncryptedProxyReadMode> mMode;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkfea032;
    ::ll::UntypedStorage<8, 32> mUnk138938;
    ::ll::UntypedStorage<8, 32> mUnkb3cded;
    ::ll::UntypedStorage<1, 1>  mUnk535aec;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EncryptedProxyEnv& operator=(EncryptedProxyEnv const&);
    EncryptedProxyEnv(EncryptedProxyEnv const&);
#endif // @header-generator platform
    EncryptedProxyEnv();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EncryptedProxyEnv();
#else // @header-generator platform
    virtual ::leveldb::Status NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);
#else // @header-generator platform
    virtual ::leveldb::Status NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);
#else // @header-generator platform
    virtual ::leveldb::Status NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewWritableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    virtual ::leveldb::Status RemoveFile(::std::string const& f) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status RemoveFile(std::string const&);

    virtual ::leveldb::Status RenameFile(std::string const&, std::string const&);
#else // @header-generator platform
    virtual ::leveldb::Status RenameFile(::std::string const& from, ::std::string const& to) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI EncryptedProxyEnv(
        ::leveldb::Env*          env,
        ::ContentIdentity const& contentIdentity,
        ::std::string const&     contentKey,
        ::EncryptedProxyReadMode mode
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::leveldb::Env*          env,
        ::ContentIdentity const& contentIdentity,
        ::std::string const&     contentKey,
        ::EncryptedProxyReadMode mode
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewWritableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $RemoveFile(std::string const&);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $RemoveFile(::std::string const& f);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $RenameFile(std::string const&, std::string const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::leveldb::Status $RenameFile(::std::string const& from, ::std::string const& to);
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
