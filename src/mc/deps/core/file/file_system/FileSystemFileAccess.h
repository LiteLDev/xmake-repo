#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/FileSystemMode.h"
#include "mc/deps/core/file/file_system/IFileAccess.h"
#include "mc/deps/core/file/file_system/IFileReadAccess.h"
#include "mc/deps/core/file/file_system/IFileWriteAccess.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

class FileSystemFileAccess : public ::IFileAccess {
public:
    // FileSystemFileAccess inner types declare
    // clang-format off
    class FileSystemFileReadAccess;
    class FileSystemFileWriteAccess;
    // clang-format on

    // FileSystemFileAccess inner types define
    class FileSystemFileReadAccess : public ::IFileReadAccess {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~FileSystemFileReadAccess();

        virtual ulong fread(void*, ulong, ulong, void*) const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual uint64 fread(void* buffer, uint64 size, uint64 count, void* file) const /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ulong $fread(void*, ulong, ulong, void*) const;
#else // @header-generator platform
        MCNAPI uint64 $fread(void* buffer, uint64 size, uint64 count, void* file) const;


#endif // @header-generator platform
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class FileSystemFileWriteAccess : public ::IFileWriteAccess {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~FileSystemFileWriteAccess();

        virtual ulong fwrite(void const*, ulong, ulong, void*);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual uint64 fwrite(void const* buffer, uint64 size, uint64 count, void* file) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ulong $fwrite(void const*, ulong, ulong, void*);
#else // @header-generator platform
        MCNAPI uint64 $fwrite(void const* buffer, uint64 size, uint64 count, void* file);


#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::FileSystemMode>                                  mMode;
    ::ll::TypedStorage<8, 8, ::FileSystemFileAccess::FileSystemFileReadAccess>  mReadInterface;
    ::ll::TypedStorage<8, 8, ::FileSystemFileAccess::FileSystemFileWriteAccess> mWriteInterface;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkd7988c;
    ::ll::UntypedStorage<8, 8> mUnkfe4141;
    ::ll::UntypedStorage<8, 8> mUnk1845b8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileSystemFileAccess& operator=(FileSystemFileAccess const&);
    FileSystemFileAccess(FileSystemFileAccess const&);
#endif // @header-generator platform
    FileSystemFileAccess();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FileSystemFileAccess();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~FileSystemFileAccess() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~FileSystemFileAccess() /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void* fopen(::Core::PathView, std::string const&);
#else // @header-generator platform
    virtual void* fopen(::Core::PathView filePath, ::std::string const& mode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int fclose(void*);
#else // @header-generator platform
    virtual int fclose(void* file) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int fseek(void*, long, int);
#else // @header-generator platform
    virtual int fseek(void* file, int64 offset, int origin) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long ftell(void*);
#else // @header-generator platform
    virtual int64 ftell(void* file) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IFileReadAccess const* getReadInterface() const;
#else // @header-generator platform
    virtual ::IFileReadAccess const* getReadInterface() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IFileWriteAccess* getWriteInterface();
#else // @header-generator platform
    virtual ::IFileWriteAccess* getWriteInterface() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unload();
#else // @header-generator platform
    virtual void unload() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FileSystemFileAccess(::FileSystemMode);
#else // @header-generator platform
    MCNAPI explicit FileSystemFileAccess(::FileSystemMode mode);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::FileSystemMode);
#else // @header-generator platform
    MCNAPI void* $ctor(::FileSystemMode mode);
#endif // @header-generator platform
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
    MCNAPI void* $fopen(::Core::PathView, std::string const&);
#else // @header-generator platform
    MCNAPI void* $fopen(::Core::PathView filePath, ::std::string const& mode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $fclose(void*);
#else // @header-generator platform
    MCNAPI int $fclose(void* file);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $fseek(void*, long, int);
#else // @header-generator platform
    MCNAPI int $fseek(void* file, int64 offset, int origin);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long $ftell(void*);
#else // @header-generator platform
    MCNAPI int64 $ftell(void* file);
#endif // @header-generator platform

    MCNAPI ::IFileReadAccess const* $getReadInterface() const;

    MCNAPI ::IFileWriteAccess* $getWriteInterface();

    MCNAPI void $unload();
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
