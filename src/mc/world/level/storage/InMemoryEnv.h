#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/storage/FlushableEnv.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/InMemoryFileStorage.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class InMemoryEnv : public ::FlushableEnv {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::leveldb::Env*>        mTarget;
    ::ll::UntypedStorage<8, 24>                      mDbPath;
    ::ll::TypedStorage<8, 96, ::InMemoryFileStorage> mInMemoryStorage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnka7132a;
    ::ll::UntypedStorage<8, 32>  mUnkf2875a;
    ::ll::UntypedStorage<8, 136> mUnk787769;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    InMemoryEnv& operator=(InMemoryEnv const&);
    InMemoryEnv(InMemoryEnv const&);
#endif // @header-generator platform
    InMemoryEnv();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~InMemoryEnv();
#else // @header-generator platform
    virtual ~InMemoryEnv() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);
#else // @header-generator platform
    virtual ::leveldb::Status NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);
#else // @header-generator platform
    virtual ::leveldb::Status NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewWritableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    virtual ::leveldb::Status NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewAppendableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    virtual ::leveldb::Status NewAppendableFile(::std::string const& f, ::leveldb::WritableFile** r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool FileExists(std::string const&);
#else // @header-generator platform
    virtual ::leveldb::Status RemoveFile(::std::string const& f) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status GetChildren(std::string const&, std::vector<std::string>*);
#else // @header-generator platform
    virtual ::leveldb::Status RenameFile(::std::string const& from, ::std::string const& to) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status RemoveFile(std::string const&);
#else // @header-generator platform
    virtual bool FileExists(::std::string const& f) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status RenameFile(std::string const&, std::string const&);
#else // @header-generator platform
    virtual ::leveldb::Status GetChildren(::std::string const& dir, ::std::vector<::std::string>* r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flushToPermanentStorage();
#else // @header-generator platform
    virtual void flushToPermanentStorage() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI InMemoryEnv(::leveldb::Env* env, ::Core::Path const& rootDbPath);
#endif

#endif // @header-generator platform
    MCNAPI void _flushWithTransaction();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::leveldb::Env* env, ::Core::Path const& rootDbPath);
#endif
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
    MCNAPI ::leveldb::Status $NewAppendableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewAppendableFile(::std::string const& f, ::leveldb::WritableFile** r);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $FileExists(std::string const&);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $RemoveFile(::std::string const& f);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $GetChildren(std::string const&, std::vector<std::string>*);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $RenameFile(::std::string const& from, ::std::string const& to);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $RemoveFile(std::string const&);
#else // @header-generator platform
    MCNAPI bool $FileExists(::std::string const& f);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $RenameFile(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $GetChildren(::std::string const& dir, ::std::vector<::std::string>* r);
#endif // @header-generator platform

    MCNAPI void $flushToPermanentStorage();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
